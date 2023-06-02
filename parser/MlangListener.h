
// Generated from ./parser/Mlang.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "MlangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MlangParser.
 */
class  MlangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(MlangParser::ProgContext *ctx) = 0;
  virtual void exitProg(MlangParser::ProgContext *ctx) = 0;

  virtual void enterExpr(MlangParser::ExprContext *ctx) = 0;
  virtual void exitExpr(MlangParser::ExprContext *ctx) = 0;


};

