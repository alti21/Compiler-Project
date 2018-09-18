
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Pcl2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Pcl2Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Pcl2Parser.
 */
class  Pcl2Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Pcl2Parser.
   */
    virtual antlrcpp::Any visitProg(Pcl2Parser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitStat(Pcl2Parser::StatContext *context) = 0;

    virtual antlrcpp::Any visitCall(Pcl2Parser::CallContext *context) = 0;

    virtual antlrcpp::Any visitIf_stm(Pcl2Parser::If_stmContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stm(Pcl2Parser::While_stmContext *context) = 0;

    virtual antlrcpp::Any visitPrint(Pcl2Parser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitOut(Pcl2Parser::OutContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(Pcl2Parser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitReturn_type(Pcl2Parser::Return_typeContext *context) = 0;

    virtual antlrcpp::Any visitReturning(Pcl2Parser::ReturningContext *context) = 0;

    virtual antlrcpp::Any visitFunc(Pcl2Parser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitDecl(Pcl2Parser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVariable_list(Pcl2Parser::Variable_listContext *context) = 0;

    virtual antlrcpp::Any visitVariable_id(Pcl2Parser::Variable_idContext *context) = 0;

    virtual antlrcpp::Any visitType_id(Pcl2Parser::Type_idContext *context) = 0;

    virtual antlrcpp::Any visitAssign(Pcl2Parser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(Pcl2Parser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitParentheses(Pcl2Parser::ParenthesesContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(Pcl2Parser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitChar(Pcl2Parser::CharContext *context) = 0;

    virtual antlrcpp::Any visitInteger(Pcl2Parser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitEquality(Pcl2Parser::EqualityContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(Pcl2Parser::Add_sub_opContext *context) = 0;


};

