#include <iostream>
#include <string>
#include <vector>
#include "Pcl2Lexer.h"
#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"
#include "Pass0Visitor.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr),variable_id_list(0),
	  num_delc(0)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);
  //  Pcl2Lexer lexer;
  //  j_file << "nesting: " << lexer.nesting << endl;
    //cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProg(Pcl2Parser::ProgContext *ctx)
{

	printf("test 0");
  //  auto value = visitChildren(ctx);
    printf("test 1");
//    cout << "=== visitProgram: Printing xref table." << endl;

    //string program_name = ctx->ID()->toString();
    string program_name = "sample";
       program_id = symtab_stack->enter_local(program_name);
       program_id->set_definition((Definition)DF_PROGRAM);
       program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                                 new EntryValue(symtab_stack->push()));
       symtab_stack->set_program_id(program_id);
       printf("test 2");
    // Print the cross-reference table.

    j_file.open(program_name + ".j");
       if (j_file.fail())
       {
               cout << "***** Cannot open assembly file." << endl;
               exit(-99);
       }
       printf("test 3");
       // Emit the program header.
       j_file << ".class public " << program_name << endl;
       j_file << ".super java/lang/Object" << endl;


       // Emit the RunTimer and PascalTextIn fields.
       j_file << endl;
       j_file << ".field private static _runTimer LRunTimer;" << endl;
       j_file << ".field private static _standardIn LPascalTextIn;" << endl;
     //  auto value = visitChildren(ctx);
       CrossReferencer cross_referencer;
         cross_referencer.print(symtab_stack);
         printf("test 4");
       return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitAssign(Pcl2Parser::AssignContext *ctx)
{
    if (ctx->children[0] == ctx->declaration())
    {
        visitDeclaration(ctx->declaration());
    }
    auto value = ctx->children[2];
    return visit(value);
}
antlrcpp::Any Pass1Visitor::visitDeclaration(Pcl2Parser::DeclarationContext *ctx)
{
	auto value = visitChildren(ctx);
	//   return value;
	    // Emit the class constructor.

	 num_delc++;
	    if (Pass0Visitor::num_decl == num_delc)
	    {
	   // 	visitChildren(ctx);
	    j_file << endl;
	    j_file << ".method public <init>()V" << endl;
	    j_file << endl;
	    j_file << "\taload_0" << endl;
	    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
	    j_file << "\treturn" << endl;
	    j_file << endl;
	    j_file << ".limit locals 1" << endl;
	    j_file << ".limit stack 1" << endl;
	    j_file << ".end method" << endl;
	 //   auto value = visitChildren(ctx);
	    }

	  //  visitChildren(ctx);
	    //visitFunc(ctx->func());
	    return 1;
}

antlrcpp::Any Pass1Visitor::visitVariable_list(Pcl2Parser::Variable_listContext *ctx)
{
//    cout << "=== visitVarList: " + ctx->getText() << endl;
	    variable_id_list.resize(0);
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitDecl(Pcl2Parser::DeclContext *ctx)
{


	 j_file << "\n; " << ctx->getText() << "\n" << endl;


//	visitVariable_list(visitChildren(ctx));
	 visitVariable_list(ctx->variable_list());
	// visit(ctx->variable_list());
	 //visitVariable_id(visit(ctx));
	return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitReturning(Pcl2Parser::ReturningContext *ctx)
{

	// SymTabEntry *variable_id = symtab_stack->lookup_local("x");
	// j_file << "RIGHT HERE " << variable_id->;
}
antlrcpp::Any Pass1Visitor::visitVariable_id(Pcl2Parser::Variable_idContext *ctx)
{
//    cout << "=== visitVarId: " + ctx->getText() << endl;

    string variable_name = ctx->ID()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id_list.push_back(variable_id);

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitType_id(Pcl2Parser::Type_idContext *ctx)
{
//    cout << "=== visitTypeId: " + ctx->getText() << endl;

//if type_id of var x = int
	//visitVariable_list(visit(ctx));

    TypeSpec *type;
    string type_indicator;

    string type_name = ctx->ID()->toString();
    if (type_name == "int")//put var_id here?
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name == "char")
    {
        type = Predefined::char_type;
        type_indicator = "C";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }
//nothing in variable_id_list?
    for (SymTabEntry *id : variable_id_list) {

        id->set_typespec(type);

        // Emit a field declaration.
        j_file << ".field private static "
               << id->get_name() << " " << type_indicator << endl;
    }

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitIdentifier(Pcl2Parser::IdentifierContext *ctx)
{
	//
    auto value = visitChildren(ctx);
    ctx->type = Predefined::char_type;
    ctx->type = Predefined::integer_type;
    return value;
}
antlrcpp::Any Pass1Visitor::visitReturn_type(Pcl2Parser::Return_typeContext *ctx)
{
	   return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitParentheses(Pcl2Parser::ParenthesesContext *ctx)
{
//    cout << "=== visitParenExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitMul_div_op(Pcl2Parser::Mul_div_opContext *ctx)
{
//    cout << "=== visitMulDivExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool char_mode    =    (type1 == Predefined::char_type)
                        && (type2 == Predefined::char_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : char_mode    ? Predefined::char_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitChar(Pcl2Parser::CharContext *ctx)//ADD CODE
{
	 ctx->type = Predefined::char_type;
	 return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitInteger(Pcl2Parser::IntegerContext *ctx)
{
//    cout << "=== visitIntegerConst: " + ctx->getText() << endl;

    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitEquality(Pcl2Parser::EqualityContext *ctx)
	{
	 auto value = visitChildren(ctx);
	//    ctx->expr()->type = ctx->type;
	 TypeSpec *type1 = ctx->expr(0)->type;
	    TypeSpec *type2 = ctx->expr(1)->type;

	    bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
	    bool char_mode    =    (type1 == Predefined::char_type)
	                        && (type2 == Predefined::char_type);
	    TypeSpec *type = integer_mode ? Predefined::integer_type
	                    : char_mode    ? Predefined::char_type
	                    :                nullptr;
	     ctx->type = type;

	     return value;

	}
antlrcpp::Any Pass1Visitor::visitAdd_sub_op(Pcl2Parser::Add_sub_opContext *ctx)
{
//    cout << "=== visitAddSubExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool char_mode    =    (type1 == Predefined::char_type)
                        && (type2 == Predefined::char_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : char_mode    ? Predefined::char_type
                   :                nullptr;
    ctx->type = type;

    return value;
}
