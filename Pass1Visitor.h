#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "Pcl2BaseVisitor.h"
#include "antlr4-runtime.h"
#include "Pcl2Visitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public Pcl2BaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;
    int num_delc;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProg(Pcl2Parser::ProgContext *ctx) override;
  // antlrcpp::Any visitStat(Pcl2Parser::StatContext *ctx) override;
   // antlrcpp::Any visitIf_stm(Pcl2Parser::If_stmContext *ctx) override;
  //  antlrcpp::Any visitWhile_stm(Pcl2Parser::While_stmContext *ctx) override;
    antlrcpp::Any visitDeclaration(Pcl2Parser::DeclarationContext *ctx) override;
    antlrcpp::Any visitReturn_type(Pcl2Parser::Return_typeContext *ctx) override;
    antlrcpp::Any visitDecl(Pcl2Parser::DeclContext *ctx) override;
    antlrcpp::Any visitReturning(Pcl2Parser::ReturningContext *ctx) override;
    antlrcpp::Any visitVariable_list(Pcl2Parser::Variable_listContext *ctx) override;
    antlrcpp::Any visitVariable_id(Pcl2Parser::Variable_idContext *ctx) override;
    antlrcpp::Any visitType_id(Pcl2Parser::Type_idContext *ctx) override;
    antlrcpp::Any visitAssign(Pcl2Parser::AssignContext *ctx) override;
    antlrcpp::Any visitIdentifier(Pcl2Parser::IdentifierContext *ctx) override;
    antlrcpp::Any visitParentheses(Pcl2Parser::ParenthesesContext *ctx) override;
    antlrcpp::Any visitMul_div_op(Pcl2Parser::Mul_div_opContext *ctx) override;
    antlrcpp::Any visitChar(Pcl2Parser::CharContext *ctx) override;
    antlrcpp::Any visitInteger(Pcl2Parser::IntegerContext *ctx) override;
    antlrcpp::Any visitEquality(Pcl2Parser::EqualityContext *ctx) override;
    antlrcpp::Any visitAdd_sub_op(Pcl2Parser::Add_sub_opContext *ctx) override;

};

#endif /* PASS1VISITOR_H_ */
