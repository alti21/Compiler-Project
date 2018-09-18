// Generated from Pcl2.g4 by ANTLR 4.4

#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;

import org.antlr.v4.runtime.misc.NotNull;
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link Pcl2Parser}.
 */
public interface Pcl2Listener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#return_type}.
	 * @param ctx the parse tree
	 */
	void enterReturn_type(@NotNull Pcl2Parser.Return_typeContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#return_type}.
	 * @param ctx the parse tree
	 */
	void exitReturn_type(@NotNull Pcl2Parser.Return_typeContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#while_stm}.
	 * @param ctx the parse tree
	 */
	void enterWhile_stm(@NotNull Pcl2Parser.While_stmContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#while_stm}.
	 * @param ctx the parse tree
	 */
	void exitWhile_stm(@NotNull Pcl2Parser.While_stmContext ctx);
	/**
	 * Enter a parse tree produced by the {@code identifier}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void enterIdentifier(@NotNull Pcl2Parser.IdentifierContext ctx);
	/**
	 * Exit a parse tree produced by the {@code identifier}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void exitIdentifier(@NotNull Pcl2Parser.IdentifierContext ctx);
	/**
	 * Enter a parse tree produced by the {@code parentheses}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void enterParentheses(@NotNull Pcl2Parser.ParenthesesContext ctx);
	/**
	 * Exit a parse tree produced by the {@code parentheses}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void exitParentheses(@NotNull Pcl2Parser.ParenthesesContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(@NotNull Pcl2Parser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(@NotNull Pcl2Parser.StatContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#decl}.
	 * @param ctx the parse tree
	 */
	void enterDecl(@NotNull Pcl2Parser.DeclContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#decl}.
	 * @param ctx the parse tree
	 */
	void exitDecl(@NotNull Pcl2Parser.DeclContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#type_id}.
	 * @param ctx the parse tree
	 */
	void enterType_id(@NotNull Pcl2Parser.Type_idContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#type_id}.
	 * @param ctx the parse tree
	 */
	void exitType_id(@NotNull Pcl2Parser.Type_idContext ctx);
	/**
	 * Enter a parse tree produced by the {@code integer}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void enterInteger(@NotNull Pcl2Parser.IntegerContext ctx);
	/**
	 * Exit a parse tree produced by the {@code integer}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void exitInteger(@NotNull Pcl2Parser.IntegerContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(@NotNull Pcl2Parser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(@NotNull Pcl2Parser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(@NotNull Pcl2Parser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(@NotNull Pcl2Parser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by the {@code add_sub_op}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void enterAdd_sub_op(@NotNull Pcl2Parser.Add_sub_opContext ctx);
	/**
	 * Exit a parse tree produced by the {@code add_sub_op}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void exitAdd_sub_op(@NotNull Pcl2Parser.Add_sub_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#out}.
	 * @param ctx the parse tree
	 */
	void enterOut(@NotNull Pcl2Parser.OutContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#out}.
	 * @param ctx the parse tree
	 */
	void exitOut(@NotNull Pcl2Parser.OutContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#call}.
	 * @param ctx the parse tree
	 */
	void enterCall(@NotNull Pcl2Parser.CallContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#call}.
	 * @param ctx the parse tree
	 */
	void exitCall(@NotNull Pcl2Parser.CallContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#print}.
	 * @param ctx the parse tree
	 */
	void enterPrint(@NotNull Pcl2Parser.PrintContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#print}.
	 * @param ctx the parse tree
	 */
	void exitPrint(@NotNull Pcl2Parser.PrintContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#func}.
	 * @param ctx the parse tree
	 */
	void enterFunc(@NotNull Pcl2Parser.FuncContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#func}.
	 * @param ctx the parse tree
	 */
	void exitFunc(@NotNull Pcl2Parser.FuncContext ctx);
	/**
	 * Enter a parse tree produced by the {@code mul_div_op}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void enterMul_div_op(@NotNull Pcl2Parser.Mul_div_opContext ctx);
	/**
	 * Exit a parse tree produced by the {@code mul_div_op}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void exitMul_div_op(@NotNull Pcl2Parser.Mul_div_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#variable_list}.
	 * @param ctx the parse tree
	 */
	void enterVariable_list(@NotNull Pcl2Parser.Variable_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#variable_list}.
	 * @param ctx the parse tree
	 */
	void exitVariable_list(@NotNull Pcl2Parser.Variable_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#variable_id}.
	 * @param ctx the parse tree
	 */
	void enterVariable_id(@NotNull Pcl2Parser.Variable_idContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#variable_id}.
	 * @param ctx the parse tree
	 */
	void exitVariable_id(@NotNull Pcl2Parser.Variable_idContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#returning}.
	 * @param ctx the parse tree
	 */
	void enterReturning(@NotNull Pcl2Parser.ReturningContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#returning}.
	 * @param ctx the parse tree
	 */
	void exitReturning(@NotNull Pcl2Parser.ReturningContext ctx);
	/**
	 * Enter a parse tree produced by the {@code char}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void enterChar(@NotNull Pcl2Parser.CharContext ctx);
	/**
	 * Exit a parse tree produced by the {@code char}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void exitChar(@NotNull Pcl2Parser.CharContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#if_stm}.
	 * @param ctx the parse tree
	 */
	void enterIf_stm(@NotNull Pcl2Parser.If_stmContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#if_stm}.
	 * @param ctx the parse tree
	 */
	void exitIf_stm(@NotNull Pcl2Parser.If_stmContext ctx);
	/**
	 * Enter a parse tree produced by the {@code equality}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void enterEquality(@NotNull Pcl2Parser.EqualityContext ctx);
	/**
	 * Exit a parse tree produced by the {@code equality}
	 * labeled alternative in {@link Pcl2Parser#expr}.
	 * @param ctx the parse tree
	 */
	void exitEquality(@NotNull Pcl2Parser.EqualityContext ctx);
	/**
	 * Enter a parse tree produced by {@link Pcl2Parser#assign}.
	 * @param ctx the parse tree
	 */
	void enterAssign(@NotNull Pcl2Parser.AssignContext ctx);
	/**
	 * Exit a parse tree produced by {@link Pcl2Parser#assign}.
	 * @param ctx the parse tree
	 */
	void exitAssign(@NotNull Pcl2Parser.AssignContext ctx);
}