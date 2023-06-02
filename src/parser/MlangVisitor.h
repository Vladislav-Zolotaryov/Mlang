
// Generated from ./src/parser/Mlang.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "MlangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MlangParser.
 */
class  MlangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MlangParser.
   */
    virtual std::any visitProg(MlangParser::ProgContext *context) = 0;

    virtual std::any visitExpr(MlangParser::ExprContext *context) = 0;


};

