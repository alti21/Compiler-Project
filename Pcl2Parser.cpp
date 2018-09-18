
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Pcl2.g4 by ANTLR 4.7.1


#include "Pcl2Visitor.h"

#include "Pcl2Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Pcl2Parser::Pcl2Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Pcl2Parser::~Pcl2Parser() {
  delete _interpreter;
}

std::string Pcl2Parser::getGrammarFileName() const {
  return "Pcl2.g4";
}

const std::vector<std::string>& Pcl2Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Pcl2Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

Pcl2Parser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl2Parser::StatContext *> Pcl2Parser::ProgContext::stat() {
  return getRuleContexts<Pcl2Parser::StatContext>();
}

Pcl2Parser::StatContext* Pcl2Parser::ProgContext::stat(size_t i) {
  return getRuleContext<Pcl2Parser::StatContext>(i);
}


size_t Pcl2Parser::ProgContext::getRuleIndex() const {
  return Pcl2Parser::RuleProg;
}

antlrcpp::Any Pcl2Parser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ProgContext* Pcl2Parser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, Pcl2Parser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(34);
      stat();
      setState(37); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl2Parser::INT)
      | (1ULL << Pcl2Parser::CHAR)
      | (1ULL << Pcl2Parser::IF)
      | (1ULL << Pcl2Parser::WHILE)
      | (1ULL << Pcl2Parser::PRINT)
      | (1ULL << Pcl2Parser::ID)
      | (1ULL << Pcl2Parser::NEWLINE)
      | (1ULL << Pcl2Parser::LPAREN))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

Pcl2Parser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::AssignContext* Pcl2Parser::StatContext::assign() {
  return getRuleContext<Pcl2Parser::AssignContext>(0);
}

tree::TerminalNode* Pcl2Parser::StatContext::NEWLINE() {
  return getToken(Pcl2Parser::NEWLINE, 0);
}

Pcl2Parser::ExprContext* Pcl2Parser::StatContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}

Pcl2Parser::DeclarationContext* Pcl2Parser::StatContext::declaration() {
  return getRuleContext<Pcl2Parser::DeclarationContext>(0);
}

Pcl2Parser::If_stmContext* Pcl2Parser::StatContext::if_stm() {
  return getRuleContext<Pcl2Parser::If_stmContext>(0);
}

Pcl2Parser::While_stmContext* Pcl2Parser::StatContext::while_stm() {
  return getRuleContext<Pcl2Parser::While_stmContext>(0);
}

Pcl2Parser::PrintContext* Pcl2Parser::StatContext::print() {
  return getRuleContext<Pcl2Parser::PrintContext>(0);
}

Pcl2Parser::CallContext* Pcl2Parser::StatContext::call() {
  return getRuleContext<Pcl2Parser::CallContext>(0);
}


size_t Pcl2Parser::StatContext::getRuleIndex() const {
  return Pcl2Parser::RuleStat;
}

antlrcpp::Any Pcl2Parser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::StatContext* Pcl2Parser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, Pcl2Parser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(39);
      assign();
      setState(40);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(42);
      expr(0);
      setState(43);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(45);
      declaration();
      setState(46);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(48);
      if_stm();
      setState(49);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(51);
      while_stm();
      setState(52);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(54);
      print();
      setState(55);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(57);
      call();
      setState(58);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(60);
      match(Pcl2Parser::NEWLINE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

Pcl2Parser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::CallContext::ID() {
  return getToken(Pcl2Parser::ID, 0);
}

Pcl2Parser::ExprContext* Pcl2Parser::CallContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}


size_t Pcl2Parser::CallContext::getRuleIndex() const {
  return Pcl2Parser::RuleCall;
}

antlrcpp::Any Pcl2Parser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::CallContext* Pcl2Parser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 4, Pcl2Parser::RuleCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(Pcl2Parser::ID);
    setState(64);
    match(Pcl2Parser::LPAREN);
    setState(65);
    expr(0);
    setState(66);
    match(Pcl2Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmContext ------------------------------------------------------------------

Pcl2Parser::If_stmContext::If_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::If_stmContext::IF() {
  return getToken(Pcl2Parser::IF, 0);
}

Pcl2Parser::ExprContext* Pcl2Parser::If_stmContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}

Pcl2Parser::StatContext* Pcl2Parser::If_stmContext::stat() {
  return getRuleContext<Pcl2Parser::StatContext>(0);
}


size_t Pcl2Parser::If_stmContext::getRuleIndex() const {
  return Pcl2Parser::RuleIf_stm;
}

antlrcpp::Any Pcl2Parser::If_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitIf_stm(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::If_stmContext* Pcl2Parser::if_stm() {
  If_stmContext *_localctx = _tracker.createInstance<If_stmContext>(_ctx, getState());
  enterRule(_localctx, 6, Pcl2Parser::RuleIf_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(Pcl2Parser::IF);
    setState(69);
    match(Pcl2Parser::LPAREN);
    setState(70);
    expr(0);
    setState(71);
    match(Pcl2Parser::RPAREN);
    setState(72);
    stat();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmContext ------------------------------------------------------------------

Pcl2Parser::While_stmContext::While_stmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::While_stmContext::WHILE() {
  return getToken(Pcl2Parser::WHILE, 0);
}

Pcl2Parser::ExprContext* Pcl2Parser::While_stmContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}

Pcl2Parser::StatContext* Pcl2Parser::While_stmContext::stat() {
  return getRuleContext<Pcl2Parser::StatContext>(0);
}


size_t Pcl2Parser::While_stmContext::getRuleIndex() const {
  return Pcl2Parser::RuleWhile_stm;
}

antlrcpp::Any Pcl2Parser::While_stmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitWhile_stm(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::While_stmContext* Pcl2Parser::while_stm() {
  While_stmContext *_localctx = _tracker.createInstance<While_stmContext>(_ctx, getState());
  enterRule(_localctx, 8, Pcl2Parser::RuleWhile_stm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(Pcl2Parser::WHILE);
    setState(75);
    match(Pcl2Parser::LPAREN);
    setState(76);
    expr(0);
    setState(77);
    match(Pcl2Parser::RPAREN);
    setState(78);
    stat();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

Pcl2Parser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::PrintContext::PRINT() {
  return getToken(Pcl2Parser::PRINT, 0);
}

tree::TerminalNode* Pcl2Parser::PrintContext::INSERTION() {
  return getToken(Pcl2Parser::INSERTION, 0);
}

Pcl2Parser::OutContext* Pcl2Parser::PrintContext::out() {
  return getRuleContext<Pcl2Parser::OutContext>(0);
}


size_t Pcl2Parser::PrintContext::getRuleIndex() const {
  return Pcl2Parser::RulePrint;
}

antlrcpp::Any Pcl2Parser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::PrintContext* Pcl2Parser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 10, Pcl2Parser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(Pcl2Parser::PRINT);
    setState(81);
    match(Pcl2Parser::INSERTION);
    setState(82);
    out();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutContext ------------------------------------------------------------------

Pcl2Parser::OutContext::OutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::Variable_idContext* Pcl2Parser::OutContext::variable_id() {
  return getRuleContext<Pcl2Parser::Variable_idContext>(0);
}

tree::TerminalNode* Pcl2Parser::OutContext::STRING() {
  return getToken(Pcl2Parser::STRING, 0);
}


size_t Pcl2Parser::OutContext::getRuleIndex() const {
  return Pcl2Parser::RuleOut;
}

antlrcpp::Any Pcl2Parser::OutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitOut(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::OutContext* Pcl2Parser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 12, Pcl2Parser::RuleOut);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(84);
        variable_id();
        break;
      }

      case Pcl2Parser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(85);
        match(Pcl2Parser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

Pcl2Parser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::DeclContext* Pcl2Parser::DeclarationContext::decl() {
  return getRuleContext<Pcl2Parser::DeclContext>(0);
}

Pcl2Parser::FuncContext* Pcl2Parser::DeclarationContext::func() {
  return getRuleContext<Pcl2Parser::FuncContext>(0);
}


size_t Pcl2Parser::DeclarationContext::getRuleIndex() const {
  return Pcl2Parser::RuleDeclaration;
}

antlrcpp::Any Pcl2Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::DeclarationContext* Pcl2Parser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, Pcl2Parser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      func();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_typeContext ------------------------------------------------------------------

Pcl2Parser::Return_typeContext::Return_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::Return_typeContext::ID() {
  return getToken(Pcl2Parser::ID, 0);
}


size_t Pcl2Parser::Return_typeContext::getRuleIndex() const {
  return Pcl2Parser::RuleReturn_type;
}

antlrcpp::Any Pcl2Parser::Return_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitReturn_type(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::Return_typeContext* Pcl2Parser::return_type() {
  Return_typeContext *_localctx = _tracker.createInstance<Return_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, Pcl2Parser::RuleReturn_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(Pcl2Parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturningContext ------------------------------------------------------------------

Pcl2Parser::ReturningContext::ReturningContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::ReturningContext::ID() {
  return getToken(Pcl2Parser::ID, 0);
}


size_t Pcl2Parser::ReturningContext::getRuleIndex() const {
  return Pcl2Parser::RuleReturning;
}

antlrcpp::Any Pcl2Parser::ReturningContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitReturning(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ReturningContext* Pcl2Parser::returning() {
  ReturningContext *_localctx = _tracker.createInstance<ReturningContext>(_ctx, getState());
  enterRule(_localctx, 18, Pcl2Parser::RuleReturning);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(Pcl2Parser::T__0);
    setState(95);
    match(Pcl2Parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

Pcl2Parser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::Return_typeContext* Pcl2Parser::FuncContext::return_type() {
  return getRuleContext<Pcl2Parser::Return_typeContext>(0);
}

tree::TerminalNode* Pcl2Parser::FuncContext::ID() {
  return getToken(Pcl2Parser::ID, 0);
}

Pcl2Parser::AssignContext* Pcl2Parser::FuncContext::assign() {
  return getRuleContext<Pcl2Parser::AssignContext>(0);
}

Pcl2Parser::ReturningContext* Pcl2Parser::FuncContext::returning() {
  return getRuleContext<Pcl2Parser::ReturningContext>(0);
}

std::vector<Pcl2Parser::StatContext *> Pcl2Parser::FuncContext::stat() {
  return getRuleContexts<Pcl2Parser::StatContext>();
}

Pcl2Parser::StatContext* Pcl2Parser::FuncContext::stat(size_t i) {
  return getRuleContext<Pcl2Parser::StatContext>(i);
}


size_t Pcl2Parser::FuncContext::getRuleIndex() const {
  return Pcl2Parser::RuleFunc;
}

antlrcpp::Any Pcl2Parser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::FuncContext* Pcl2Parser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 20, Pcl2Parser::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    return_type();
    setState(98);
    match(Pcl2Parser::T__1);
    setState(99);
    match(Pcl2Parser::ID);
    setState(100);
    match(Pcl2Parser::LPAREN);
    setState(101);
    assign();
    setState(102);
    match(Pcl2Parser::RPAREN);
    setState(103);
    match(Pcl2Parser::T__2);
    setState(105); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(104);
      stat();
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl2Parser::INT)
      | (1ULL << Pcl2Parser::CHAR)
      | (1ULL << Pcl2Parser::IF)
      | (1ULL << Pcl2Parser::WHILE)
      | (1ULL << Pcl2Parser::PRINT)
      | (1ULL << Pcl2Parser::ID)
      | (1ULL << Pcl2Parser::NEWLINE)
      | (1ULL << Pcl2Parser::LPAREN))) != 0));
    setState(109);
    match(Pcl2Parser::T__3);
    setState(110);
    returning();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

Pcl2Parser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::Type_idContext* Pcl2Parser::DeclContext::type_id() {
  return getRuleContext<Pcl2Parser::Type_idContext>(0);
}

Pcl2Parser::Variable_listContext* Pcl2Parser::DeclContext::variable_list() {
  return getRuleContext<Pcl2Parser::Variable_listContext>(0);
}


size_t Pcl2Parser::DeclContext::getRuleIndex() const {
  return Pcl2Parser::RuleDecl;
}

antlrcpp::Any Pcl2Parser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::DeclContext* Pcl2Parser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 22, Pcl2Parser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    type_id();
    setState(113);
    variable_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_listContext ------------------------------------------------------------------

Pcl2Parser::Variable_listContext::Variable_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::Variable_idContext* Pcl2Parser::Variable_listContext::variable_id() {
  return getRuleContext<Pcl2Parser::Variable_idContext>(0);
}


size_t Pcl2Parser::Variable_listContext::getRuleIndex() const {
  return Pcl2Parser::RuleVariable_list;
}

antlrcpp::Any Pcl2Parser::Variable_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitVariable_list(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::Variable_listContext* Pcl2Parser::variable_list() {
  Variable_listContext *_localctx = _tracker.createInstance<Variable_listContext>(_ctx, getState());
  enterRule(_localctx, 24, Pcl2Parser::RuleVariable_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    variable_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_idContext ------------------------------------------------------------------

Pcl2Parser::Variable_idContext::Variable_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::Variable_idContext::ID() {
  return getToken(Pcl2Parser::ID, 0);
}


size_t Pcl2Parser::Variable_idContext::getRuleIndex() const {
  return Pcl2Parser::RuleVariable_id;
}

antlrcpp::Any Pcl2Parser::Variable_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitVariable_id(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::Variable_idContext* Pcl2Parser::variable_id() {
  Variable_idContext *_localctx = _tracker.createInstance<Variable_idContext>(_ctx, getState());
  enterRule(_localctx, 26, Pcl2Parser::RuleVariable_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(Pcl2Parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_idContext ------------------------------------------------------------------

Pcl2Parser::Type_idContext::Type_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::Type_idContext::ID() {
  return getToken(Pcl2Parser::ID, 0);
}


size_t Pcl2Parser::Type_idContext::getRuleIndex() const {
  return Pcl2Parser::RuleType_id;
}

antlrcpp::Any Pcl2Parser::Type_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitType_id(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::Type_idContext* Pcl2Parser::type_id() {
  Type_idContext *_localctx = _tracker.createInstance<Type_idContext>(_ctx, getState());
  enterRule(_localctx, 28, Pcl2Parser::RuleType_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(Pcl2Parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

Pcl2Parser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::Variable_idContext* Pcl2Parser::AssignContext::variable_id() {
  return getRuleContext<Pcl2Parser::Variable_idContext>(0);
}

Pcl2Parser::ExprContext* Pcl2Parser::AssignContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}

Pcl2Parser::DeclarationContext* Pcl2Parser::AssignContext::declaration() {
  return getRuleContext<Pcl2Parser::DeclarationContext>(0);
}


size_t Pcl2Parser::AssignContext::getRuleIndex() const {
  return Pcl2Parser::RuleAssign;
}

antlrcpp::Any Pcl2Parser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::AssignContext* Pcl2Parser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 30, Pcl2Parser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(121);
      variable_id();
      setState(122);
      match(Pcl2Parser::T__4);
      setState(123);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(125);
      declaration();
      setState(126);
      match(Pcl2Parser::T__4);
      setState(127);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

Pcl2Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Pcl2Parser::ExprContext::getRuleIndex() const {
  return Pcl2Parser::RuleExpr;
}

void Pcl2Parser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::IdentifierContext::ID() {
  return getToken(Pcl2Parser::ID, 0);
}

Pcl2Parser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any Pcl2Parser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

Pcl2Parser::ExprContext* Pcl2Parser::ParenthesesContext::expr() {
  return getRuleContext<Pcl2Parser::ExprContext>(0);
}

Pcl2Parser::ParenthesesContext::ParenthesesContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any Pcl2Parser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul_div_opContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExprContext *> Pcl2Parser::Mul_div_opContext::expr() {
  return getRuleContexts<Pcl2Parser::ExprContext>();
}

Pcl2Parser::ExprContext* Pcl2Parser::Mul_div_opContext::expr(size_t i) {
  return getRuleContext<Pcl2Parser::ExprContext>(i);
}

tree::TerminalNode* Pcl2Parser::Mul_div_opContext::MUL_DIV_OP() {
  return getToken(Pcl2Parser::MUL_DIV_OP, 0);
}

Pcl2Parser::Mul_div_opContext::Mul_div_opContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any Pcl2Parser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::CharContext::CHAR() {
  return getToken(Pcl2Parser::CHAR, 0);
}

Pcl2Parser::CharContext::CharContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any Pcl2Parser::CharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::IntegerContext::INT() {
  return getToken(Pcl2Parser::INT, 0);
}

Pcl2Parser::IntegerContext::IntegerContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any Pcl2Parser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExprContext *> Pcl2Parser::EqualityContext::expr() {
  return getRuleContexts<Pcl2Parser::ExprContext>();
}

Pcl2Parser::ExprContext* Pcl2Parser::EqualityContext::expr(size_t i) {
  return getRuleContext<Pcl2Parser::ExprContext>(i);
}

tree::TerminalNode* Pcl2Parser::EqualityContext::EQUALITY() {
  return getToken(Pcl2Parser::EQUALITY, 0);
}

Pcl2Parser::EqualityContext::EqualityContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any Pcl2Parser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add_sub_opContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExprContext *> Pcl2Parser::Add_sub_opContext::expr() {
  return getRuleContexts<Pcl2Parser::ExprContext>();
}

Pcl2Parser::ExprContext* Pcl2Parser::Add_sub_opContext::expr(size_t i) {
  return getRuleContext<Pcl2Parser::ExprContext>(i);
}

tree::TerminalNode* Pcl2Parser::Add_sub_opContext::ADD_SUB_OP() {
  return getToken(Pcl2Parser::ADD_SUB_OP, 0);
}

Pcl2Parser::Add_sub_opContext::Add_sub_opContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any Pcl2Parser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ExprContext* Pcl2Parser::expr() {
   return expr(0);
}

Pcl2Parser::ExprContext* Pcl2Parser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Pcl2Parser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  Pcl2Parser::ExprContext *previousContext = _localctx;
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, Pcl2Parser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(139);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::INT: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(132);
        match(Pcl2Parser::INT);
        break;
      }

      case Pcl2Parser::CHAR: {
        _localctx = _tracker.createInstance<CharContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(133);
        match(Pcl2Parser::CHAR);
        break;
      }

      case Pcl2Parser::ID: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(134);
        match(Pcl2Parser::ID);
        break;
      }

      case Pcl2Parser::LPAREN: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(135);
        match(Pcl2Parser::LPAREN);
        setState(136);
        expr(0);
        setState(137);
        match(Pcl2Parser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(152);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(150);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_div_opContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(141);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(142);
          match(Pcl2Parser::MUL_DIV_OP);
          setState(143);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Add_sub_opContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(144);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(145);
          match(Pcl2Parser::ADD_SUB_OP);
          setState(146);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<EqualityContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(147);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(148);
          match(Pcl2Parser::EQUALITY);
          setState(149);
          expr(2);
          break;
        }

        } 
      }
      setState(154);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool Pcl2Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Pcl2Parser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Pcl2Parser::_decisionToDFA;
atn::PredictionContextCache Pcl2Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Pcl2Parser::_atn;
std::vector<uint16_t> Pcl2Parser::_serializedATN;

std::vector<std::string> Pcl2Parser::_ruleNames = {
  "prog", "stat", "call", "if_stm", "while_stm", "print", "out", "declaration", 
  "return_type", "returning", "func", "decl", "variable_list", "variable_id", 
  "type_id", "assign", "expr"
};

std::vector<std::string> Pcl2Parser::_literalNames = {
  "", "'return'", "':'", "'{'", "'}'", "'='", "'==='", "", "", "'*'", "'/'", 
  "'+'", "'-'", "", "", "'if'", "'while'", "'print'", "'<<'", "", "", "", 
  "", "", "", "", "'('", "')'", "'['", "']'"
};

std::vector<std::string> Pcl2Parser::_symbolicNames = {
  "", "", "", "", "", "", "EQUALITY", "MUL_DIV_OP", "ADD_SUB_OP", "MUL_OP", 
  "DIV_OP", "ADD_OP", "SUB_OP", "INT", "CHAR", "IF", "WHILE", "PRINT", "INSERTION", 
  "STRING", "ID", "COMMENT", "WS", "NEWLINE", "LINE_ESCAPE", "IGNORE_NEWLINE", 
  "LPAREN", "RPAREN", "LBRACK", "RBRACK"
};

dfa::Vocabulary Pcl2Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Pcl2Parser::_tokenNames;

Pcl2Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1f, 0x9e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x6, 0x2, 0x26, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x27, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x40, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x59, 
    0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x5d, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x6c, 0xa, 0xc, 
    0xd, 0xc, 0xe, 0xc, 0x6d, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x84, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0x8e, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x99, 0xa, 
    0x12, 0xc, 0x12, 0xe, 0x12, 0x9c, 0xb, 0x12, 0x3, 0x12, 0x2, 0x3, 0x22, 
    0x13, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x2, 0x2, 0x2, 0x9e, 0x2, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x58, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x63, 0x3, 0x2, 0x2, 0x2, 0x18, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x79, 0x3, 0x2, 0x2, 0x2, 0x20, 0x83, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x24, 0x26, 0x5, 0x4, 0x3, 0x2, 0x25, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2a, 0x5, 0x20, 0x11, 0x2, 0x2a, 0x2b, 0x7, 0x19, 0x2, 
    0x2, 0x2b, 0x40, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0x22, 0x12, 0x2, 
    0x2d, 0x2e, 0x7, 0x19, 0x2, 0x2, 0x2e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0x30, 0x5, 0x10, 0x9, 0x2, 0x30, 0x31, 0x7, 0x19, 0x2, 0x2, 0x31, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x5, 0x8, 0x5, 0x2, 0x33, 0x34, 0x7, 
    0x19, 0x2, 0x2, 0x34, 0x40, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x5, 0xa, 
    0x6, 0x2, 0x36, 0x37, 0x7, 0x19, 0x2, 0x2, 0x37, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x39, 0x5, 0xc, 0x7, 0x2, 0x39, 0x3a, 0x7, 0x19, 0x2, 0x2, 
    0x3a, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x6, 0x4, 0x2, 0x3c, 
    0x3d, 0x7, 0x19, 0x2, 0x2, 0x3d, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 
    0x7, 0x19, 0x2, 0x2, 0x3f, 0x29, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x5, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 0x16, 0x2, 0x2, 0x42, 
    0x43, 0x7, 0x1c, 0x2, 0x2, 0x43, 0x44, 0x5, 0x22, 0x12, 0x2, 0x44, 0x45, 
    0x7, 0x1d, 0x2, 0x2, 0x45, 0x7, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 
    0x11, 0x2, 0x2, 0x47, 0x48, 0x7, 0x1c, 0x2, 0x2, 0x48, 0x49, 0x5, 0x22, 
    0x12, 0x2, 0x49, 0x4a, 0x7, 0x1d, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0x4, 0x3, 
    0x2, 0x4b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x12, 0x2, 0x2, 
    0x4d, 0x4e, 0x7, 0x1c, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x22, 0x12, 0x2, 0x4f, 
    0x50, 0x7, 0x1d, 0x2, 0x2, 0x50, 0x51, 0x5, 0x4, 0x3, 0x2, 0x51, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x13, 0x2, 0x2, 0x53, 0x54, 0x7, 
    0x14, 0x2, 0x2, 0x54, 0x55, 0x5, 0xe, 0x8, 0x2, 0x55, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x59, 0x5, 0x1c, 0xf, 0x2, 0x57, 0x59, 0x7, 0x15, 0x2, 
    0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x5, 0x18, 0xd, 0x2, 0x5b, 
    0x5d, 0x5, 0x16, 0xc, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 
    0x16, 0x2, 0x2, 0x5f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x3, 
    0x2, 0x2, 0x61, 0x62, 0x7, 0x16, 0x2, 0x2, 0x62, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x64, 0x5, 0x12, 0xa, 0x2, 0x64, 0x65, 0x7, 0x4, 0x2, 0x2, 
    0x65, 0x66, 0x7, 0x16, 0x2, 0x2, 0x66, 0x67, 0x7, 0x1c, 0x2, 0x2, 0x67, 
    0x68, 0x5, 0x20, 0x11, 0x2, 0x68, 0x69, 0x7, 0x1d, 0x2, 0x2, 0x69, 0x6b, 
    0x7, 0x5, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x4, 0x3, 0x2, 0x6b, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x70, 0x7, 0x6, 0x2, 0x2, 0x70, 0x71, 0x5, 0x14, 0xb, 0x2, 
    0x71, 0x17, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x1e, 0x10, 0x2, 0x73, 
    0x74, 0x5, 0x1a, 0xe, 0x2, 0x74, 0x19, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x5, 0x1c, 0xf, 0x2, 0x76, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 
    0x16, 0x2, 0x2, 0x78, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x16, 
    0x2, 0x2, 0x7a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x1c, 0xf, 
    0x2, 0x7c, 0x7d, 0x7, 0x7, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x22, 0x12, 0x2, 
    0x7e, 0x84, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x10, 0x9, 0x2, 0x80, 
    0x81, 0x7, 0x7, 0x2, 0x2, 0x81, 0x82, 0x5, 0x22, 0x12, 0x2, 0x82, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x83, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x21, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x8, 0x12, 
    0x1, 0x2, 0x86, 0x8e, 0x7, 0xf, 0x2, 0x2, 0x87, 0x8e, 0x7, 0x10, 0x2, 
    0x2, 0x88, 0x8e, 0x7, 0x16, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x1c, 0x2, 0x2, 
    0x8a, 0x8b, 0x5, 0x22, 0x12, 0x2, 0x8b, 0x8c, 0x7, 0x1d, 0x2, 0x2, 0x8c, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0xc, 0x9, 
    0x2, 0x2, 0x90, 0x91, 0x7, 0x9, 0x2, 0x2, 0x91, 0x99, 0x5, 0x22, 0x12, 
    0xa, 0x92, 0x93, 0xc, 0x8, 0x2, 0x2, 0x93, 0x94, 0x7, 0xa, 0x2, 0x2, 
    0x94, 0x99, 0x5, 0x22, 0x12, 0x9, 0x95, 0x96, 0xc, 0x3, 0x2, 0x2, 0x96, 
    0x97, 0x7, 0x8, 0x2, 0x2, 0x97, 0x99, 0x5, 0x22, 0x12, 0x4, 0x98, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x92, 0x3, 0x2, 0x2, 0x2, 0x98, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xb, 0x27, 0x3f, 0x58, 0x5c, 0x6d, 
    0x83, 0x8d, 0x98, 0x9a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Pcl2Parser::Initializer Pcl2Parser::_init;
