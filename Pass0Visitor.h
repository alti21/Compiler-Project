/*
 * Pass0Visitor.h
 *
 *  Created on: May 19, 2018
 *      Author: Alti
 */

#ifndef PASS0VISITOR_H_
#define PASS0VISITOR_H_

#include "Pcl2BaseVisitor.h"
#include "antlr4-runtime.h"
#include "Pcl2Visitor.h"

class Pass0Visitor : public Pcl2BaseVisitor
{
public:
    static int num_decl;
    antlrcpp::Any visitDeclaration(Pcl2Parser::DeclarationContext *ctx) override;
};



#endif /* PASS0VISITOR_H_ */
