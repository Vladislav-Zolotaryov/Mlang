
// Generated from ./parser/Mlang.g4 by ANTLR 4.12.0


#include "MlangListener.h"
#include "MlangVisitor.h"

#include "MlangParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MlangParserStaticData final {
  MlangParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MlangParserStaticData(const MlangParserStaticData&) = delete;
  MlangParserStaticData(MlangParserStaticData&&) = delete;
  MlangParserStaticData& operator=(const MlangParserStaticData&) = delete;
  MlangParserStaticData& operator=(MlangParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mlangParserOnceFlag;
MlangParserStaticData *mlangParserStaticData = nullptr;

void mlangParserInitialize() {
  assert(mlangParserStaticData == nullptr);
  auto staticData = std::make_unique<MlangParserStaticData>(
    std::vector<std::string>{
      "prog", "expr"
    },
    std::vector<std::string>{
      "", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "NEWLINE", "INT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,8,27,2,0,7,0,2,1,7,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,14,8,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,22,8,1,10,1,12,1,25,9,1,1,1,0,1,2,2,0,2,
  	0,2,1,0,1,2,1,0,3,4,27,0,4,1,0,0,0,2,13,1,0,0,0,4,5,3,2,1,0,5,6,5,0,0,
  	1,6,1,1,0,0,0,7,8,6,1,-1,0,8,14,5,8,0,0,9,10,5,5,0,0,10,11,3,2,1,0,11,
  	12,5,6,0,0,12,14,1,0,0,0,13,7,1,0,0,0,13,9,1,0,0,0,14,23,1,0,0,0,15,16,
  	10,4,0,0,16,17,7,0,0,0,17,22,3,2,1,5,18,19,10,3,0,0,19,20,7,1,0,0,20,
  	22,3,2,1,4,21,15,1,0,0,0,21,18,1,0,0,0,22,25,1,0,0,0,23,21,1,0,0,0,23,
  	24,1,0,0,0,24,3,1,0,0,0,25,23,1,0,0,0,3,13,21,23
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mlangParserStaticData = staticData.release();
}

}

MlangParser::MlangParser(TokenStream *input) : MlangParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MlangParser::MlangParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MlangParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mlangParserStaticData->atn, mlangParserStaticData->decisionToDFA, mlangParserStaticData->sharedContextCache, options);
}

MlangParser::~MlangParser() {
  delete _interpreter;
}

const atn::ATN& MlangParser::getATN() const {
  return *mlangParserStaticData->atn;
}

std::string MlangParser::getGrammarFileName() const {
  return "Mlang.g4";
}

const std::vector<std::string>& MlangParser::getRuleNames() const {
  return mlangParserStaticData->ruleNames;
}

const dfa::Vocabulary& MlangParser::getVocabulary() const {
  return mlangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MlangParser::getSerializedATN() const {
  return mlangParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

MlangParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MlangParser::ExprContext* MlangParser::ProgContext::expr() {
  return getRuleContext<MlangParser::ExprContext>(0);
}

tree::TerminalNode* MlangParser::ProgContext::EOF() {
  return getToken(MlangParser::EOF, 0);
}


size_t MlangParser::ProgContext::getRuleIndex() const {
  return MlangParser::RuleProg;
}

void MlangParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MlangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void MlangParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MlangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any MlangParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MlangVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

MlangParser::ProgContext* MlangParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MlangParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    expr(0);
    setState(5);
    match(MlangParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MlangParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MlangParser::ExprContext::INT() {
  return getToken(MlangParser::INT, 0);
}

std::vector<MlangParser::ExprContext *> MlangParser::ExprContext::expr() {
  return getRuleContexts<MlangParser::ExprContext>();
}

MlangParser::ExprContext* MlangParser::ExprContext::expr(size_t i) {
  return getRuleContext<MlangParser::ExprContext>(i);
}


size_t MlangParser::ExprContext::getRuleIndex() const {
  return MlangParser::RuleExpr;
}

void MlangParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MlangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void MlangParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MlangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any MlangParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MlangVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


MlangParser::ExprContext* MlangParser::expr() {
   return expr(0);
}

MlangParser::ExprContext* MlangParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MlangParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MlangParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, MlangParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(13);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MlangParser::INT: {
        setState(8);
        match(MlangParser::INT);
        break;
      }

      case MlangParser::T__4: {
        setState(9);
        match(MlangParser::T__4);
        setState(10);
        expr(0);
        setState(11);
        match(MlangParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(23);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(21);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(15);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(16);
          _la = _input->LA(1);
          if (!(_la == MlangParser::T__0

          || _la == MlangParser::T__1)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(17);
          expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(18);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(19);
          _la = _input->LA(1);
          if (!(_la == MlangParser::T__2

          || _la == MlangParser::T__3)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(20);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(25);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool MlangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MlangParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void MlangParser::initialize() {
  ::antlr4::internal::call_once(mlangParserOnceFlag, mlangParserInitialize);
}
