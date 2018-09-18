// Generated from Pcl2.g4 by ANTLR 4.4

#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class Pcl2Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.4", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__4=1, T__3=2, T__2=3, T__1=4, T__0=5, EQUALITY=6, MUL_DIV_OP=7, ADD_SUB_OP=8, 
		MUL_OP=9, DIV_OP=10, ADD_OP=11, SUB_OP=12, INT=13, CHAR=14, IF=15, WHILE=16, 
		PRINT=17, INSERTION=18, STRING=19, ID=20, COMMENT=21, WS=22, NEWLINE=23, 
		LINE_ESCAPE=24, IGNORE_NEWLINE=25, LPAREN=26, RPAREN=27, LBRACK=28, RBRACK=29;
	public static final String[] tokenNames = {
		"<INVALID>", "'return'", "':'", "'{'", "'='", "'}'", "'==='", "MUL_DIV_OP", 
		"ADD_SUB_OP", "'*'", "'/'", "'+'", "'-'", "INT", "CHAR", "'if'", "'while'", 
		"'print'", "'<<'", "STRING", "ID", "COMMENT", "WS", "NEWLINE", "LINE_ESCAPE", 
		"IGNORE_NEWLINE", "'('", "')'", "'['", "']'"
	};
	public static final int
		RULE_prog = 0, RULE_stat = 1, RULE_call = 2, RULE_if_stm = 3, RULE_while_stm = 4, 
		RULE_print = 5, RULE_out = 6, RULE_declaration = 7, RULE_return_type = 8, 
		RULE_returning = 9, RULE_func = 10, RULE_decl = 11, RULE_variable_list = 12, 
		RULE_variable_id = 13, RULE_type_id = 14, RULE_assign = 15, RULE_expr = 16;
	public static final String[] ruleNames = {
		"prog", "stat", "call", "if_stm", "while_stm", "print", "out", "declaration", 
		"return_type", "returning", "func", "decl", "variable_list", "variable_id", 
		"type_id", "assign", "expr"
	};

	@Override
	public String getGrammarFileName() { return "Pcl2.g4"; }

	@Override
	public String[] getTokenNames() { return tokenNames; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public Pcl2Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgContext extends ParserRuleContext {
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterProg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitProg(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(35); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(34); stat();
				}
				}
				setState(37); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << CHAR) | (1L << IF) | (1L << WHILE) | (1L << PRINT) | (1L << ID) | (1L << NEWLINE) | (1L << LPAREN))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatContext extends ParserRuleContext {
		public While_stmContext while_stm() {
			return getRuleContext(While_stmContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignContext assign() {
			return getRuleContext(AssignContext.class,0);
		}
		public TerminalNode NEWLINE() { return getToken(Pcl2Parser.NEWLINE, 0); }
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public CallContext call() {
			return getRuleContext(CallContext.class,0);
		}
		public If_stmContext if_stm() {
			return getRuleContext(If_stmContext.class,0);
		}
		public PrintContext print() {
			return getRuleContext(PrintContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterStat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitStat(this);
		}
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_stat);
		try {
			setState(61);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(39); assign();
				setState(40); match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(42); expr(0);
				setState(43); match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(45); declaration();
				setState(46); match(NEWLINE);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(48); if_stm();
				setState(49); match(NEWLINE);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(51); while_stm();
				setState(52); match(NEWLINE);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(54); print();
				setState(55); match(NEWLINE);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(57); call();
				setState(58); match(NEWLINE);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(60); match(NEWLINE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CallContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(Pcl2Parser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public CallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_call; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterCall(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitCall(this);
		}
	}

	public final CallContext call() throws RecognitionException {
		CallContext _localctx = new CallContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_call);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63); match(ID);
			setState(64); match(LPAREN);
			setState(65); expr(0);
			setState(66); match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class If_stmContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(Pcl2Parser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public If_stmContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_stm; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterIf_stm(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitIf_stm(this);
		}
	}

	public final If_stmContext if_stm() throws RecognitionException {
		If_stmContext _localctx = new If_stmContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_if_stm);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(68); match(IF);
			setState(69); match(LPAREN);
			setState(70); expr(0);
			setState(71); match(RPAREN);
			setState(72); stat();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class While_stmContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public TerminalNode WHILE() { return getToken(Pcl2Parser.WHILE, 0); }
		public While_stmContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while_stm; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterWhile_stm(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitWhile_stm(this);
		}
	}

	public final While_stmContext while_stm() throws RecognitionException {
		While_stmContext _localctx = new While_stmContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_while_stm);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74); match(WHILE);
			setState(75); match(LPAREN);
			setState(76); expr(0);
			setState(77); match(RPAREN);
			setState(78); stat();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintContext extends ParserRuleContext {
		public TerminalNode INSERTION() { return getToken(Pcl2Parser.INSERTION, 0); }
		public TerminalNode PRINT() { return getToken(Pcl2Parser.PRINT, 0); }
		public OutContext out() {
			return getRuleContext(OutContext.class,0);
		}
		public PrintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_print; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterPrint(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitPrint(this);
		}
	}

	public final PrintContext print() throws RecognitionException {
		PrintContext _localctx = new PrintContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_print);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80); match(PRINT);
			setState(81); match(INSERTION);
			setState(82); out();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OutContext extends ParserRuleContext {
		public Variable_idContext variable_id() {
			return getRuleContext(Variable_idContext.class,0);
		}
		public TerminalNode STRING() { return getToken(Pcl2Parser.STRING, 0); }
		public OutContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_out; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterOut(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitOut(this);
		}
	}

	public final OutContext out() throws RecognitionException {
		OutContext _localctx = new OutContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_out);
		try {
			setState(86);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(84); variable_id();
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 2);
				{
				setState(85); match(STRING);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public DeclContext decl() {
			return getRuleContext(DeclContext.class,0);
		}
		public FuncContext func() {
			return getRuleContext(FuncContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitDeclaration(this);
		}
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_declaration);
		try {
			setState(90);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(88); decl();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(89); func();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Return_typeContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(Pcl2Parser.ID, 0); }
		public Return_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterReturn_type(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitReturn_type(this);
		}
	}

	public final Return_typeContext return_type() throws RecognitionException {
		Return_typeContext _localctx = new Return_typeContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_return_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(92); match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ReturningContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(Pcl2Parser.ID, 0); }
		public ReturningContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returning; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterReturning(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitReturning(this);
		}
	}

	public final ReturningContext returning() throws RecognitionException {
		ReturningContext _localctx = new ReturningContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_returning);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(94); match(T__4);
			setState(95); match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FuncContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(Pcl2Parser.ID, 0); }
		public ReturningContext returning() {
			return getRuleContext(ReturningContext.class,0);
		}
		public AssignContext assign() {
			return getRuleContext(AssignContext.class,0);
		}
		public Return_typeContext return_type() {
			return getRuleContext(Return_typeContext.class,0);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public FuncContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterFunc(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitFunc(this);
		}
	}

	public final FuncContext func() throws RecognitionException {
		FuncContext _localctx = new FuncContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_func);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(97); return_type();
			setState(98); match(T__3);
			setState(99); match(ID);
			setState(100); match(LPAREN);
			setState(101); assign();
			setState(102); match(RPAREN);
			setState(103); match(T__2);
			setState(105); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(104); stat();
				}
				}
				setState(107); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << CHAR) | (1L << IF) | (1L << WHILE) | (1L << PRINT) | (1L << ID) | (1L << NEWLINE) | (1L << LPAREN))) != 0) );
			setState(109); match(T__0);
			setState(110); returning();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclContext extends ParserRuleContext {
		public Type_idContext type_id() {
			return getRuleContext(Type_idContext.class,0);
		}
		public Variable_listContext variable_list() {
			return getRuleContext(Variable_listContext.class,0);
		}
		public DeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decl; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterDecl(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitDecl(this);
		}
	}

	public final DeclContext decl() throws RecognitionException {
		DeclContext _localctx = new DeclContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(112); type_id();
			setState(113); variable_list();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_listContext extends ParserRuleContext {
		public Variable_idContext variable_id() {
			return getRuleContext(Variable_idContext.class,0);
		}
		public Variable_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterVariable_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitVariable_list(this);
		}
	}

	public final Variable_listContext variable_list() throws RecognitionException {
		Variable_listContext _localctx = new Variable_listContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_variable_list);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115); variable_id();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_idContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(Pcl2Parser.ID, 0); }
		public Variable_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_id; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterVariable_id(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitVariable_id(this);
		}
	}

	public final Variable_idContext variable_id() throws RecognitionException {
		Variable_idContext _localctx = new Variable_idContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_variable_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(117); match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_idContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(Pcl2Parser.ID, 0); }
		public Type_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_id; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterType_id(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitType_id(this);
		}
	}

	public final Type_idContext type_id() throws RecognitionException {
		Type_idContext _localctx = new Type_idContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_type_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(119); match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Variable_idContext variable_id() {
			return getRuleContext(Variable_idContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public AssignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterAssign(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitAssign(this);
		}
	}

	public final AssignContext assign() throws RecognitionException {
		AssignContext _localctx = new AssignContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_assign);
		try {
			setState(129);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(121); variable_id();
				setState(122); match(T__1);
				setState(123); expr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(125); declaration();
				setState(126); match(T__1);
				setState(127); expr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public TypeSpec * type;
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
			this.type = ctx.type;
		}
	}
	public static class IdentifierContext extends ExprContext {
		public TerminalNode ID() { return getToken(Pcl2Parser.ID, 0); }
		public IdentifierContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterIdentifier(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitIdentifier(this);
		}
	}
	public static class ParenthesesContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParenthesesContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterParentheses(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitParentheses(this);
		}
	}
	public static class Mul_div_opContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MUL_DIV_OP() { return getToken(Pcl2Parser.MUL_DIV_OP, 0); }
		public Mul_div_opContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterMul_div_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitMul_div_op(this);
		}
	}
	public static class CharContext extends ExprContext {
		public TerminalNode CHAR() { return getToken(Pcl2Parser.CHAR, 0); }
		public CharContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterChar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitChar(this);
		}
	}
	public static class IntegerContext extends ExprContext {
		public TerminalNode INT() { return getToken(Pcl2Parser.INT, 0); }
		public IntegerContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitInteger(this);
		}
	}
	public static class EqualityContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EQUALITY() { return getToken(Pcl2Parser.EQUALITY, 0); }
		public EqualityContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterEquality(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitEquality(this);
		}
	}
	public static class Add_sub_opContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode ADD_SUB_OP() { return getToken(Pcl2Parser.ADD_SUB_OP, 0); }
		public Add_sub_opContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).enterAdd_sub_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Pcl2Listener ) ((Pcl2Listener)listener).exitAdd_sub_op(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(139);
			switch (_input.LA(1)) {
			case INT:
				{
				_localctx = new IntegerContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(132); match(INT);
				}
				break;
			case CHAR:
				{
				_localctx = new CharContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(133); match(CHAR);
				}
				break;
			case ID:
				{
				_localctx = new IdentifierContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(134); match(ID);
				}
				break;
			case LPAREN:
				{
				_localctx = new ParenthesesContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(135); match(LPAREN);
				setState(136); expr(0);
				setState(137); match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(152);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(150);
					switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
					case 1:
						{
						_localctx = new Mul_div_opContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(141);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(142); match(MUL_DIV_OP);
						setState(143); expr(8);
						}
						break;
					case 2:
						{
						_localctx = new Add_sub_opContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(144);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(145); match(ADD_SUB_OP);
						setState(146); expr(7);
						}
						break;
					case 3:
						{
						_localctx = new EqualityContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(147);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(148); match(EQUALITY);
						setState(149); expr(2);
						}
						break;
					}
					} 
				}
				setState(154);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 16: return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0: return precpred(_ctx, 7);
		case 1: return precpred(_ctx, 6);
		case 2: return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd\3\37\u009e\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\3\2\6\2&\n\2\r\2\16\2\'\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3@\n\3\3\4\3\4\3\4\3\4\3"+
		"\4\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\b"+
		"\3\b\5\bY\n\b\3\t\3\t\5\t]\n\t\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f"+
		"\3\f\3\f\3\f\3\f\6\fl\n\f\r\f\16\fm\3\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16"+
		"\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\5\21\u0084"+
		"\n\21\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u008e\n\22\3\22\3\22"+
		"\3\22\3\22\3\22\3\22\3\22\3\22\3\22\7\22\u0099\n\22\f\22\16\22\u009c\13"+
		"\22\3\22\2\3\"\23\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"\2\2\u009e"+
		"\2%\3\2\2\2\4?\3\2\2\2\6A\3\2\2\2\bF\3\2\2\2\nL\3\2\2\2\fR\3\2\2\2\16"+
		"X\3\2\2\2\20\\\3\2\2\2\22^\3\2\2\2\24`\3\2\2\2\26c\3\2\2\2\30r\3\2\2\2"+
		"\32u\3\2\2\2\34w\3\2\2\2\36y\3\2\2\2 \u0083\3\2\2\2\"\u008d\3\2\2\2$&"+
		"\5\4\3\2%$\3\2\2\2&\'\3\2\2\2\'%\3\2\2\2\'(\3\2\2\2(\3\3\2\2\2)*\5 \21"+
		"\2*+\7\31\2\2+@\3\2\2\2,-\5\"\22\2-.\7\31\2\2.@\3\2\2\2/\60\5\20\t\2\60"+
		"\61\7\31\2\2\61@\3\2\2\2\62\63\5\b\5\2\63\64\7\31\2\2\64@\3\2\2\2\65\66"+
		"\5\n\6\2\66\67\7\31\2\2\67@\3\2\2\289\5\f\7\29:\7\31\2\2:@\3\2\2\2;<\5"+
		"\6\4\2<=\7\31\2\2=@\3\2\2\2>@\7\31\2\2?)\3\2\2\2?,\3\2\2\2?/\3\2\2\2?"+
		"\62\3\2\2\2?\65\3\2\2\2?8\3\2\2\2?;\3\2\2\2?>\3\2\2\2@\5\3\2\2\2AB\7\26"+
		"\2\2BC\7\34\2\2CD\5\"\22\2DE\7\35\2\2E\7\3\2\2\2FG\7\21\2\2GH\7\34\2\2"+
		"HI\5\"\22\2IJ\7\35\2\2JK\5\4\3\2K\t\3\2\2\2LM\7\22\2\2MN\7\34\2\2NO\5"+
		"\"\22\2OP\7\35\2\2PQ\5\4\3\2Q\13\3\2\2\2RS\7\23\2\2ST\7\24\2\2TU\5\16"+
		"\b\2U\r\3\2\2\2VY\5\34\17\2WY\7\25\2\2XV\3\2\2\2XW\3\2\2\2Y\17\3\2\2\2"+
		"Z]\5\30\r\2[]\5\26\f\2\\Z\3\2\2\2\\[\3\2\2\2]\21\3\2\2\2^_\7\26\2\2_\23"+
		"\3\2\2\2`a\7\3\2\2ab\7\26\2\2b\25\3\2\2\2cd\5\22\n\2de\7\4\2\2ef\7\26"+
		"\2\2fg\7\34\2\2gh\5 \21\2hi\7\35\2\2ik\7\5\2\2jl\5\4\3\2kj\3\2\2\2lm\3"+
		"\2\2\2mk\3\2\2\2mn\3\2\2\2no\3\2\2\2op\7\7\2\2pq\5\24\13\2q\27\3\2\2\2"+
		"rs\5\36\20\2st\5\32\16\2t\31\3\2\2\2uv\5\34\17\2v\33\3\2\2\2wx\7\26\2"+
		"\2x\35\3\2\2\2yz\7\26\2\2z\37\3\2\2\2{|\5\34\17\2|}\7\6\2\2}~\5\"\22\2"+
		"~\u0084\3\2\2\2\177\u0080\5\20\t\2\u0080\u0081\7\6\2\2\u0081\u0082\5\""+
		"\22\2\u0082\u0084\3\2\2\2\u0083{\3\2\2\2\u0083\177\3\2\2\2\u0084!\3\2"+
		"\2\2\u0085\u0086\b\22\1\2\u0086\u008e\7\17\2\2\u0087\u008e\7\20\2\2\u0088"+
		"\u008e\7\26\2\2\u0089\u008a\7\34\2\2\u008a\u008b\5\"\22\2\u008b\u008c"+
		"\7\35\2\2\u008c\u008e\3\2\2\2\u008d\u0085\3\2\2\2\u008d\u0087\3\2\2\2"+
		"\u008d\u0088\3\2\2\2\u008d\u0089\3\2\2\2\u008e\u009a\3\2\2\2\u008f\u0090"+
		"\f\t\2\2\u0090\u0091\7\t\2\2\u0091\u0099\5\"\22\n\u0092\u0093\f\b\2\2"+
		"\u0093\u0094\7\n\2\2\u0094\u0099\5\"\22\t\u0095\u0096\f\3\2\2\u0096\u0097"+
		"\7\b\2\2\u0097\u0099\5\"\22\4\u0098\u008f\3\2\2\2\u0098\u0092\3\2\2\2"+
		"\u0098\u0095\3\2\2\2\u0099\u009c\3\2\2\2\u009a\u0098\3\2\2\2\u009a\u009b"+
		"\3\2\2\2\u009b#\3\2\2\2\u009c\u009a\3\2\2\2\13\'?X\\m\u0083\u008d\u0098"+
		"\u009a";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}