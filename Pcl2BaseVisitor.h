
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Pcl2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Pcl2Visitor.h"


/**
 * This class provides an empty implementation of Pcl2Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Pcl2BaseVisitor : public Pcl2Visitor {
public:

  virtual antlrcpp::Any visitProg(Pcl2Parser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(Pcl2Parser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(Pcl2Parser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stm(Pcl2Parser::If_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stm(Pcl2Parser::While_stmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(Pcl2Parser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut(Pcl2Parser::OutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(Pcl2Parser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_type(Pcl2Parser::Return_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturning(Pcl2Parser::ReturningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(Pcl2Parser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(Pcl2Parser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_list(Pcl2Parser::Variable_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_id(Pcl2Parser::Variable_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_id(Pcl2Parser::Type_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(Pcl2Parser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(Pcl2Parser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParentheses(Pcl2Parser::ParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(Pcl2Parser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar(Pcl2Parser::CharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(Pcl2Parser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality(Pcl2Parser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(Pcl2Parser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

