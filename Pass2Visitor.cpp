#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
//int count = 0;
Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name("sample"), j_file(j_file), lab_count(0), count(0)
{
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProg(Pcl2Parser::ProgContext *ctx)
{
 //   visitChildren(ctx);
	visit(ctx->stat(0));
	//	visit(ctx->stat(1));
	//	visit(ctx->stat(2));
    //j_file.close();
    //return value;
	 // Emit the main program header.
	//visit(ctx->stat(100)->declaration()->func());//try to visit funciton here
	    j_file << endl;
	    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
	    j_file << endl;
	    j_file << "\tnew RunTimer" << endl;
	    j_file << "\tdup" << endl;
	    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
	    j_file << "\tputstatic        " << program_name
	           << "/_runTimer LRunTimer;" << endl;
	    j_file << "\tnew PascalTextIn" << endl;
	    j_file << "\tdup" << endl;
	    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
	    j_file << "\tputstatic        " + program_name
	           << "/_standardIn LPascalTextIn;" << endl;
//	    visit(ctx->children[2]);
//	    visit(ctx->children[3]);
//	    visit(ctx->children[4]);
//	    visit(ctx->children[5]);
//	    visit(ctx->children[6]);
//	    visit(ctx->children[7]);
	    for (int i = 1; i< 14; i++)
	        {
	            visit(ctx->children[i]);

	        }
	   // auto value = visitChildren(ctx);
	  //  visit(ctx->stat(100)->function());

	    // Emit the main program epilogue.
	    j_file << endl;
	    j_file << "\tgetstatic     " << program_name
	               << "/_runTimer LRunTimer;" << endl;
	    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
	    j_file << endl;
	    j_file << "\treturn" << endl;
	    j_file << endl;
	    j_file << ".limit locals 16" << endl;
	    j_file << ".limit stack 16" << endl;
	    j_file << ".end method" << endl;

	    return 1;
}

antlrcpp::Any Pass2Visitor::visitStat(Pcl2Parser::StatContext *ctx)//CHANGE CODE
{
	//visit(ctx->function());//

	// j_file << endl << "; " + ctx->getText() << endl << endl;
	j_file << endl;
	// visitDeclaration(ctx->declaration());
	    return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitFunc(Pcl2Parser::FuncContext *ctx)
{
//.method public static b_inc(I)I
	//j_file << "testing func" << endl;
//	visitChildren(ctx);
//	string type_indicator =
//					(ctx->decl()->type_id()->ID()->toString() == "int") ? "I"
//					: (ctx->decl()->type_id()->ID()->toString() == "char")    ? "C"
//				:  "?";
	j_file << ".method public static " << ctx->ID()->toString()
			<< "("
			//<< type_indicator
			<< "I"
			<< ")"
			<< "I"
			<< endl;
//	j_file << "\tloc_var 1 is "
//			<< ctx->decl()->variable_list()->variable_id()->ID()->toString()
//			<< " "
//			<< type_indicator
//			<< endl;
//	j_file << "\tloc_var 2 is "
//		    << ctx->stat()->assign()->declaration()->decl()->variable_list()->variable_id()->ID()->toString()
//			<< " "
//			<< type_indicator
//			<< endl;
	//j_file << "\tldc " ;
	visit(ctx->assign());
	visit(ctx->stat(0));
	visit(ctx->stat(1));
	//visit(ctx->stat(2));
//	visit(ctx->stat(3));
	visit(ctx->returning());
	j_file << ".limit stack 16"  << endl;
	j_file << ".limit locals 16" << endl;
	j_file << ".end method" << endl;
	//visitChildren(ctx);
	return 1;
}
antlrcpp::Any Pass2Visitor::visitReturning(Pcl2Parser::ReturningContext *ctx)
{
	//iload 1
	//ireturn
	//variable_id_list.
	//j_file << "why" << endl;
	j_file << "\tiload " << my_map.at(ctx->ID()->toString()) << endl;
	j_file << "\tireturn" << endl;
	return 1;
}
//antlrcpp::Any Pass2Visitor::visitPass_by_value(Pcl2Parser::Pass_by_valueContext *ctx)
//{
//	  j_file << "\tldc\t" << ctx->expr()->toString() << endl;
//	  return 1;
//}
antlrcpp::Any Pass2Visitor::visitIdentifier(Pcl2Parser::IdentifierContext *ctx)
{
	 string variable_name = ctx->ID()->toString();
	    TypeSpec *type = ctx->type;

	    string type_indicator = (type == Predefined::integer_type) ? "I"
	                          : (type == Predefined::real_type)    ? "F"
	                          :                                      "?";

	    // Emit a field get instruction.
	    j_file << "\tgetstatic\t" << program_name
	           << "/" << variable_name << " " << type_indicator << endl;

	    return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitIf_stm(Pcl2Parser::If_stmContext *ctx)
{
	lab_count++;


		string type_indicator =
				(ctx->expr()->type == Predefined::integer_type) ? "I"
																: (ctx->expr()->type == Predefined::char_type)    ? "C"
																												  :                                                   "?";

		j_file << "\tgetstatic     " << program_name
			   <<  "/" <<	ctx->expr()->getStart()->getText()
			   << " " << type_indicator
			   << endl;

		//here visit identifier
		j_file << "\tistore 1" << endl;
		j_file << "\tiload 1" << endl;
		//here visit integer
		j_file << "\tldc " << ctx->expr()->getStop()->getText() << endl;
		j_file << "\tistore 2" << endl;
		j_file << "\tiload 2" << endl;
		j_file << "\tif_icmpeq     " << "\tL00" << lab_count << endl;
		lab_count++;
		j_file << "\tgoto" << "\tL00" << lab_count << endl;
		lab_count--;
		j_file << "L00" << lab_count << ":" << endl;
		visit(ctx->stat()->assign());//

		lab_count++;
		j_file << "L00" << lab_count << ":" << endl;
		return 1;

	 return 1;
}

antlrcpp::Any Pass2Visitor::visitWhile_stm(Pcl2Parser::While_stmContext *ctx)
{
	//auto value = visit(ctx->expr());
	 string type_indicator =
		                   (ctx->expr()->type == Predefined::integer_type) ? "I"
		                 : (ctx->expr()->type == Predefined::char_type)    ? "C"
		   	              :                                                   "?";
	 j_file << "\tgetstatic     " << program_name
	              <<  "/" <<	ctx->expr()->getStart()->getText()
	 			 << " " << type_indicator
	 			 << endl;
	 j_file << "\tistore 3" << endl;
	 j_file << "\tldc " << ctx->expr()->getStop()->getText() << endl;
	 j_file << "\tistore 4" << endl;
	 j_file << "\tWHILE: " << endl;
	 j_file << "\tiload 3" << endl;
	 j_file << "\tiload 4" << endl;
	 j_file << "\tif_icmpne	" << "END_WHILE" << endl;
	 j_file << "\tgoto" <<	"\tEQUAL" << endl;
	 j_file << "\tEQUAL:" << endl;
	 visit(ctx->stat());
	// j_file << "\tgoto" <<	"\tWHILE" << endl;
	 j_file << "\tEND_WHILE:" << endl;
	return 1;
}//“x_after is : ”

antlrcpp::Any Pass2Visitor::visitAssign(Pcl2Parser::AssignContext *ctx)
{

	//j_file << ctx->parent->toString();
//	if(ctx->parent->toString()=="[30]")
//	{
	//j_file << ctx->variable_id()->ID()->getTExt()
	//string a =  ctx->variable_id()->ID()->toString() ;
	if(ctx->parent->toString()=="[104 89 45 34]")
		{

			 auto value = visit(ctx->expr());
			 if((ctx->getStart()->getText())=="int" || (ctx->getStart()->getText())=="char")
			 {
				 pair <string, int >my_pair1(ctx->declaration()->decl()->variable_list()->variable_id()->ID()->toString(), count);
				 my_map.insert(my_pair1);
				 j_file << "\tistore " << my_map.at(ctx->declaration()->decl()->variable_list()->variable_id()->ID()->toString()) << endl;
			 }
			 else
			 {
				 pair <string, int >my_pair2(ctx->variable_id()->ID()->toString(), count);
				 my_map.insert(my_pair2);
				 j_file << "\tistore " << my_map.at(ctx->variable_id()->ID()->toString()) << endl;
			 }

			 count++;

			 return value;
		}
	else if(ctx->parent->toString()=="[89 45 34]")
	{
		count++;
		j_file << "\tiload 0" << endl;
		j_file << "\tistore " << count << endl;
		return 1;
	}
	else
	{
		 auto value = visit(ctx->expr());

		    string type_indicator =
		                  (ctx->expr()->type == Predefined::integer_type) ? "I"
		                : (ctx->expr()->type == Predefined::char_type)    ? "C"
		                :                                                   "?";

		//getrulecontext
		  if((ctx->getStart()->getText())=="int" || (ctx->getStart()->getText())=="char")//or equal to char
		  {
			  j_file << "\tputstatic\t" << program_name
			   			<< "/" << ctx->declaration()->decl()->variable_list()->variable_id()->ID()->toString()
			      			// << "/" <<	ctx->declaration()->decl()->type_id()->ID()->toString()
			  				 << " " << type_indicator << endl;

		  }
		  else // if((ctx->getStart()->getText())=="")
		  {
			  j_file << "\tputstatic\t" << program_name
			 	   			<< "/" << ctx->variable_id()->ID()->toString()
			 	      			// << "/" <<	ctx->declaration()->decl()->type_id()->ID()->toString()
			 	  				 << " " << type_indicator << endl;
		  }
		   // else {j_file << "put" << endl;}

		    return value;
	}
//	else if(ctx->parent->toString()=="[83 71 41 30]")
//	{
//		 auto value = visit(ctx->expr());
//		 return value;
//	}
//	 auto value = visit(ctx->expr());
//
//    string type_indicator =
//                  (ctx->expr()->type == Predefined::integer_type) ? "I"
//                : (ctx->expr()->type == Predefined::char_type)    ? "C"
//                :                                                   "?";
//
////getrulecontext
//  if((ctx->getStart()->getText())=="int" || (ctx->getStart()->getText())=="char")//or equal to char
//  {
//	  j_file << "\tputstatic\t" << program_name
//	   			<< "/" << ctx->declaration()->decl()->variable_list()->variable_id()->ID()->toString()
//	      			// << "/" <<	ctx->declaration()->decl()->type_id()->ID()->toString()
//	  				 << " " << type_indicator << endl;
//
//  }
//  else // if((ctx->getStart()->getText())=="")
//  {
//	  j_file << "\tputstatic\t" << program_name
//	 	   			<< "/" << ctx->variable_id()->ID()->toString()
//	 	      			// << "/" <<	ctx->declaration()->decl()->type_id()->ID()->toString()
//	 	  				 << " " << type_indicator << endl;
//  }
//   // else {j_file << "put" << endl;}
//
//    return value;
}
antlrcpp::Any Pass2Visitor::visitMul_div_op(Pcl2Parser::Mul_div_opContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->MUL_DIV_OP()->getText();
    string opcode;

    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idiv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;

    return value;
}
antlrcpp::Any Pass2Visitor::visitPrint(Pcl2Parser::PrintContext *ctx)
{
	auto value = visitChildren(ctx);

	//j_file << ctx->out()->getStart()->getType()<< endl;//DEBUG LINE
	if((ctx->out()->getStart()->getType()==19))//if it's a string
	//j_file << ctx->out()-> << endl;
		{
		j_file << "\tgetstatic java/lang/System/out Ljava/io/PrintStream;" << endl;

		j_file << "\tldc " << ctx->out()->STRING()->getText() <<  endl;//put string here

		j_file << "\tinvokevirtual java/io/PrintStream/print(Ljava/lang/String;)V" << endl;
	}
	else if((ctx->out()->getStart()->getType()==20))//if it's an int or char
	{//right now just for int
		j_file << "\tgetstatic java/lang/System/out Ljava/io/PrintStream;" << endl;
		j_file << "\tgetstatic	" << program_name << "/"
				//"sample/x I" << endl;

			   		<<	 ctx->out()->variable_id()->ID()->toString()
			      			// << "/" <<	ctx->declaration()->decl()->type_id()->ID()->toString()
			  				 << " " << "I" << endl;
		j_file << "\tinvokevirtual java/io/PrintStream/println(I)V" << endl;
	}

//	j_file << "\tinvokevirtual java/io/PrintStream/println(I)V" << endl;

	return value;
}
antlrcpp::Any Pass2Visitor::visitCall(Pcl2Parser::CallContext *ctx)
{
//	 string type_indicator =
//	               (ctx->expr()->type == Predefined::integer_type) ? "I"
//	                : (ctx->expr()->type == Predefined::char_type)    ? "C"
//	                :                                                   "?";

	j_file << "\tgetstatic	"  << program_name << "/"
			<<	 ctx->expr()->getStop()->getText()
					      			// << "/" <<	ctx->declaration()->decl()->type_id()->ID()->toString()
					  				 << " " << "I" << endl;//change for I
	j_file << "\tistore 1" << endl;
	j_file << "\tiload 1" << endl;
	j_file << "\tinvokestatic " << program_name << "/"
			<< ctx->ID()->toString() << "(" << "I" << ")" << "I" << endl;
	j_file << "\tistore 2" << endl;
	j_file << "\tiload 2" << endl;
	j_file << "\tputstatic\t" << program_name
		<< "/" << ctx->expr()->getStop()->getText()
		 << " "
		<< "I"
		 << endl;
	return 1;
}
antlrcpp::Any Pass2Visitor::visitChar(Pcl2Parser::CharContext *ctx)
{
	 j_file << "\tldc\t" << ctx->getText() << endl;

	 return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitInteger(Pcl2Parser::IntegerContext *ctx)
{
	// Emit a load constant instruction.
	    j_file << "\tldc\t" << ctx->getText() << endl;

	    return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitEquality(Pcl2Parser::EqualityContext *ctx)
{
	 auto value = visitChildren(ctx);

	    TypeSpec *type1 = ctx->expr(0)->type;
	    TypeSpec *type2 = ctx->expr(1)->type;

	    bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
	    bool real_mode    =    (type1 == Predefined::real_type)
	                        && (type2 == Predefined::real_type);

	    string op = ctx->EQUALITY()->getText();
	    string opcode;
	  return value;
}
antlrcpp::Any Pass2Visitor::visitAdd_sub_op(Pcl2Parser::Add_sub_opContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->ADD_SUB_OP()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}
