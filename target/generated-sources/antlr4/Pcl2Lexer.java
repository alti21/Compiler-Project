// Generated from Pcl2.g4 by ANTLR 4.4

#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;

import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class Pcl2Lexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.4", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__4=1, T__3=2, T__2=3, T__1=4, T__0=5, EQUALITY=6, MUL_DIV_OP=7, ADD_SUB_OP=8, 
		MUL_OP=9, DIV_OP=10, ADD_OP=11, SUB_OP=12, INT=13, CHAR=14, IF=15, WHILE=16, 
		PRINT=17, INSERTION=18, STRING=19, ID=20, COMMENT=21, WS=22, NEWLINE=23, 
		LINE_ESCAPE=24, IGNORE_NEWLINE=25, LPAREN=26, RPAREN=27, LBRACK=28, RBRACK=29;
	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] tokenNames = {
		"'\\u0000'", "'\\u0001'", "'\\u0002'", "'\\u0003'", "'\\u0004'", "'\\u0005'", 
		"'\\u0006'", "'\\u0007'", "'\b'", "'\t'", "'\n'", "'\\u000B'", "'\f'", 
		"'\r'", "'\\u000E'", "'\\u000F'", "'\\u0010'", "'\\u0011'", "'\\u0012'", 
		"'\\u0013'", "'\\u0014'", "'\\u0015'", "'\\u0016'", "'\\u0017'", "'\\u0018'", 
		"'\\u0019'", "'\\u001A'", "'\\u001B'", "'\\u001C'", "'\\u001D'"
	};
	public static final String[] ruleNames = {
		"T__4", "T__3", "T__2", "T__1", "T__0", "EQUALITY", "MUL_DIV_OP", "ADD_SUB_OP", 
		"MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "INT", "CHAR", "IF", "WHILE", 
		"PRINT", "INSERTION", "STRING", "ID", "COMMENT", "WS", "NEWLINE", "LINE_ESCAPE", 
		"IGNORE_NEWLINE", "LPAREN", "RPAREN", "LBRACK", "RBRACK"
	};



	  int nesting = 0;



	public Pcl2Lexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Pcl2.g4"; }

	@Override
	public String[] getTokenNames() { return tokenNames; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	@Override
	public void action(RuleContext _localctx, int ruleIndex, int actionIndex) {
		switch (ruleIndex) {
		case 25: LPAREN_action((RuleContext)_localctx, actionIndex); break;
		case 26: RPAREN_action((RuleContext)_localctx, actionIndex); break;
		case 27: LBRACK_action((RuleContext)_localctx, actionIndex); break;
		case 28: RBRACK_action((RuleContext)_localctx, actionIndex); break;
		}
	}
	private void RBRACK_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3: nesting--; break;
		}
	}
	private void LBRACK_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2: nesting++; break;
		}
	}
	private void LPAREN_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0: nesting++; break;
		}
	}
	private void RPAREN_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1: nesting--; break;
		}
	}
	@Override
	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 22: return NEWLINE_sempred((RuleContext)_localctx, predIndex);
		case 24: return IGNORE_NEWLINE_sempred((RuleContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean IGNORE_NEWLINE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1: return nesting>0;
		}
		return true;
	}
	private boolean NEWLINE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0: return nesting==0;
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd\2\37\u00bb\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\3\2\3\2\3\2\3"+
		"\2\3\2\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\b\3\b"+
		"\5\bS\n\b\3\t\3\t\5\tW\n\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\6\16"+
		"b\n\16\r\16\16\16c\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\21\3"+
		"\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\24\3\24\3"+
		"\24\7\24\177\n\24\f\24\16\24\u0082\13\24\3\24\3\24\3\25\3\25\7\25\u0088"+
		"\n\25\f\25\16\25\u008b\13\25\3\26\3\26\7\26\u008f\n\26\f\26\16\26\u0092"+
		"\13\26\3\26\3\26\3\27\3\27\3\27\3\27\3\30\5\30\u009b\n\30\3\30\3\30\3"+
		"\30\3\31\3\31\5\31\u00a2\n\31\3\31\3\31\3\31\3\31\3\32\5\32\u00a9\n\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\35"+
		"\3\36\3\36\3\36\2\2\37\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27"+
		"\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33"+
		"\65\34\67\359\36;\37\3\2\b\3\2\62;\b\2\"\"\62;C\\^^c}\177\177\5\2C\\a"+
		"ac|\6\2\62;C\\aac|\4\2\f\f\17\17\4\2\13\13\"\"\u00c3\2\3\3\2\2\2\2\5\3"+
		"\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2"+
		"\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3"+
		"\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'"+
		"\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63"+
		"\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\3=\3\2\2\2\5"+
		"D\3\2\2\2\7F\3\2\2\2\tH\3\2\2\2\13J\3\2\2\2\rL\3\2\2\2\17R\3\2\2\2\21"+
		"V\3\2\2\2\23X\3\2\2\2\25Z\3\2\2\2\27\\\3\2\2\2\31^\3\2\2\2\33a\3\2\2\2"+
		"\35e\3\2\2\2\37i\3\2\2\2!l\3\2\2\2#r\3\2\2\2%x\3\2\2\2\'{\3\2\2\2)\u0085"+
		"\3\2\2\2+\u008c\3\2\2\2-\u0095\3\2\2\2/\u009a\3\2\2\2\61\u009f\3\2\2\2"+
		"\63\u00a8\3\2\2\2\65\u00af\3\2\2\2\67\u00b2\3\2\2\29\u00b5\3\2\2\2;\u00b8"+
		"\3\2\2\2=>\7t\2\2>?\7g\2\2?@\7v\2\2@A\7w\2\2AB\7t\2\2BC\7p\2\2C\4\3\2"+
		"\2\2DE\7<\2\2E\6\3\2\2\2FG\7}\2\2G\b\3\2\2\2HI\7?\2\2I\n\3\2\2\2JK\7\177"+
		"\2\2K\f\3\2\2\2LM\7?\2\2MN\7?\2\2NO\7?\2\2O\16\3\2\2\2PS\5\23\n\2QS\5"+
		"\25\13\2RP\3\2\2\2RQ\3\2\2\2S\20\3\2\2\2TW\5\27\f\2UW\5\31\r\2VT\3\2\2"+
		"\2VU\3\2\2\2W\22\3\2\2\2XY\7,\2\2Y\24\3\2\2\2Z[\7\61\2\2[\26\3\2\2\2\\"+
		"]\7-\2\2]\30\3\2\2\2^_\7/\2\2_\32\3\2\2\2`b\t\2\2\2a`\3\2\2\2bc\3\2\2"+
		"\2ca\3\2\2\2cd\3\2\2\2d\34\3\2\2\2ef\7)\2\2fg\t\3\2\2gh\7)\2\2h\36\3\2"+
		"\2\2ij\7k\2\2jk\7h\2\2k \3\2\2\2lm\7y\2\2mn\7j\2\2no\7k\2\2op\7n\2\2p"+
		"q\7g\2\2q\"\3\2\2\2rs\7r\2\2st\7t\2\2tu\7k\2\2uv\7p\2\2vw\7v\2\2w$\3\2"+
		"\2\2xy\7>\2\2yz\7>\2\2z&\3\2\2\2{|\7$\2\2|\u0080\t\3\2\2}\177\t\3\2\2"+
		"~}\3\2\2\2\177\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2\2\u0081"+
		"\u0083\3\2\2\2\u0082\u0080\3\2\2\2\u0083\u0084\7$\2\2\u0084(\3\2\2\2\u0085"+
		"\u0089\t\4\2\2\u0086\u0088\t\5\2\2\u0087\u0086\3\2\2\2\u0088\u008b\3\2"+
		"\2\2\u0089\u0087\3\2\2\2\u0089\u008a\3\2\2\2\u008a*\3\2\2\2\u008b\u0089"+
		"\3\2\2\2\u008c\u0090\7%\2\2\u008d\u008f\n\6\2\2\u008e\u008d\3\2\2\2\u008f"+
		"\u0092\3\2\2\2\u0090\u008e\3\2\2\2\u0090\u0091\3\2\2\2\u0091\u0093\3\2"+
		"\2\2\u0092\u0090\3\2\2\2\u0093\u0094\b\26\2\2\u0094,\3\2\2\2\u0095\u0096"+
		"\t\7\2\2\u0096\u0097\3\2\2\2\u0097\u0098\b\27\2\2\u0098.\3\2\2\2\u0099"+
		"\u009b\7\17\2\2\u009a\u0099\3\2\2\2\u009a\u009b\3\2\2\2\u009b\u009c\3"+
		"\2\2\2\u009c\u009d\7\f\2\2\u009d\u009e\6\30\2\2\u009e\60\3\2\2\2\u009f"+
		"\u00a1\7^\2\2\u00a0\u00a2\7\17\2\2\u00a1\u00a0\3\2\2\2\u00a1\u00a2\3\2"+
		"\2\2\u00a2\u00a3\3\2\2\2\u00a3\u00a4\7\f\2\2\u00a4\u00a5\3\2\2\2\u00a5"+
		"\u00a6\b\31\2\2\u00a6\62\3\2\2\2\u00a7\u00a9\7\17\2\2\u00a8\u00a7\3\2"+
		"\2\2\u00a8\u00a9\3\2\2\2\u00a9\u00aa\3\2\2\2\u00aa\u00ab\7\f\2\2\u00ab"+
		"\u00ac\6\32\3\2\u00ac\u00ad\3\2\2\2\u00ad\u00ae\b\32\2\2\u00ae\64\3\2"+
		"\2\2\u00af\u00b0\7*\2\2\u00b0\u00b1\b\33\3\2\u00b1\66\3\2\2\2\u00b2\u00b3"+
		"\7+\2\2\u00b3\u00b4\b\34\4\2\u00b48\3\2\2\2\u00b5\u00b6\7]\2\2\u00b6\u00b7"+
		"\b\35\5\2\u00b7:\3\2\2\2\u00b8\u00b9\7_\2\2\u00b9\u00ba\b\36\6\2\u00ba"+
		"<\3\2\2\2\f\2RVc\u0080\u0089\u0090\u009a\u00a1\u00a8\7\b\2\2\3\33\2\3"+
		"\34\3\3\35\4\3\36\5";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}