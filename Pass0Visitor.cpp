/*
 * Pass0Visitor.cpp
 *
 *  Created on: May 19, 2018
 *      Author: Alti
 */
#include "Pass0Visitor.h"

antlrcpp::Any Pass0Visitor::visitDeclaration(Pcl2Parser::DeclarationContext *ctx)
{
    num_decl++;
    return visitChildren(ctx);
}




