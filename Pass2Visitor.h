#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>
#include <utility>
#include <map>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "Pcl2BaseVisitor.h"
#include "antlr4-runtime.h"
#include "Pcl2Visitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public Pcl2BaseVisitor
{
private:
	string program_name;
	ostream& j_file;
	int lab_count;
	int count;
	map  <string, int > my_map;
public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

   /* antlrcpp::Any visitProgram(Pcl2Parser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(Pcl2Parser::HeaderContext *ctx) override;
    antlrcpp::Any visitMainBlock(Pcl2Parser::MainBlockContext *ctx) override;
    antlrcpp::Any visitStmt(Pcl2Parser::StmtContext *ctx) override;
    antlrcpp::Any visitAssignmentStmt(Pcl2Parser::AssignmentStmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(Pcl2Parser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(Pcl2Parser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(Pcl2Parser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(Pcl2Parser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitIntegerConst(Pcl2Parser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(Pcl2Parser::FloatConstContext *ctx) override;*/
       antlrcpp::Any visitProg(Pcl2Parser::ProgContext *ctx) override;
      antlrcpp::Any visitStat(Pcl2Parser::StatContext *ctx) override;
      antlrcpp::Any visitFunc(Pcl2Parser::FuncContext *ctx) override;
      antlrcpp::Any visitIf_stm(Pcl2Parser::If_stmContext *ctx) override;
      antlrcpp::Any visitReturning(Pcl2Parser::ReturningContext *ctx) override;
      // antlrcpp::Any visitPass_by_value(Pcl2Parser::Pass_by_valueContext *ctx) override;
      antlrcpp::Any visitCall(Pcl2Parser::CallContext *ctx) override;
      antlrcpp::Any visitWhile_stm(Pcl2Parser::While_stmContext *ctx) override;
      // antlrcpp::Any visitDeclaration(Pcl2Parser::DeclarationContext *ctx) override;
      // antlrcpp::Any visitVariable_list(Pcl2Parser::Variable_listContext *ctx) override;
     //  antlrcpp::Any visitVariable_id(Pcl2Parser::Variable_idContext *ctx) override;
      // antlrcpp::Any visitType_id(Pcl2Parser::Type_idContext *ctx) override;
       antlrcpp::Any visitAssign(Pcl2Parser::AssignContext *ctx) override;
       antlrcpp::Any visitIdentifier(Pcl2Parser::IdentifierContext *ctx) override;
     //  antlrcpp::Any visitParentheses(Pcl2Parser::ParenthesesContext *ctx) override;
       antlrcpp::Any visitMul_div_op(Pcl2Parser::Mul_div_opContext *ctx) override;
       antlrcpp::Any visitPrint(Pcl2Parser::PrintContext *ctx) override;
       antlrcpp::Any visitChar(Pcl2Parser::CharContext *ctx) override;
       antlrcpp::Any visitInteger(Pcl2Parser::IntegerContext *ctx) override;
       antlrcpp::Any visitEquality(Pcl2Parser::EqualityContext *ctx) override;
       antlrcpp::Any visitAdd_sub_op(Pcl2Parser::Add_sub_opContext *ctx) override;
};

#endif /* PASS2VISITOR_H_ */
