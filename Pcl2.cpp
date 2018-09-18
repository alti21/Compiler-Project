//#include <iostream>
//#include <fstream>
//
//#include "antlr4-runtime.h"
//#include "Pcl2Lexer.h"
//#include "Pcl2Parser.h"
//#include "Pass1Visitor.h"
//#include "Pass2Visitor.h"
//
//using namespace std;
//using namespace antlrcpp;
//using namespace antlr4;
//
//int main(int argc, const char *args[])
//{
//    ifstream ins;
//    ins.open(args[1]);
//
//    ANTLRInputStream input(ins);
//    Pcl2Lexer lexer(&input);
//    CommonTokenStream tokens(&lexer);
//    printf("main 1");
//    Pcl2Parser parser(&tokens);
//    tree::ParseTree *tree = parser.prog();
//    printf("main 2");
//    Pass1Visitor *pass1 = new Pass1Visitor();
//    pass1->visit(tree);
//    printf("main 3");
//    ostream& j_file = pass1->get_assembly_file();
//    printf("main 4");
//    Pass2Visitor *pass2 = new Pass2Visitor(j_file);
//    pass2->visit(tree);
//  //  System.out.printf();
//    delete tree;
//    return 0;
//}
#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "Pcl2Lexer.h"
#include "Pcl2Parser.h"
#include "Pass1Visitor.h"
#include "Pass2Visitor.h"
#include "Pass0Visitor.h"

using namespace std;
using namespace antlrcpp;
using namespace antlr4;

int Pass0Visitor::num_decl;

int main(int argc, const char *args[])
{
    ifstream ins;
    ins.open(args[1]);

    ANTLRInputStream input(ins);
    Pcl2Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    printf("main 1");
    Pcl2Parser parser(&tokens);
    tree::ParseTree *tree = parser.prog();
    printf("main 2");
    auto *pass0 = new Pass0Visitor();
    pass0->visit(tree);
    Pass1Visitor *pass1 = new Pass1Visitor();
    pass1->visit(tree);
    printf("main 3");
    ostream& j_file = pass1->get_assembly_file();
    printf("main 4");
    Pass2Visitor *pass2 = new Pass2Visitor(j_file);
    pass2->visit(tree);
  //  System.out.printf();
    delete tree;
    return 0;
}
