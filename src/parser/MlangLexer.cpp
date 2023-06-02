
// Generated from ./src/parser/Mlang.g4 by ANTLR 4.12.0


#include "MlangLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MlangLexerStaticData final {
  MlangLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MlangLexerStaticData(const MlangLexerStaticData&) = delete;
  MlangLexerStaticData(MlangLexerStaticData&&) = delete;
  MlangLexerStaticData& operator=(const MlangLexerStaticData&) = delete;
  MlangLexerStaticData& operator=(MlangLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mlanglexerLexerOnceFlag;
MlangLexerStaticData *mlanglexerLexerStaticData = nullptr;

void mlanglexerLexerInitialize() {
  assert(mlanglexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<MlangLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "WS", "NEWLINE", "INT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "WS", "NEWLINE", "INT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,50,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,2,8,7,8,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,4,
  	6,33,8,6,11,6,12,6,34,1,6,1,6,1,7,4,7,40,8,7,11,7,12,7,41,1,7,1,7,1,8,
  	4,8,47,8,8,11,8,12,8,48,0,0,9,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,
  	1,0,2,2,0,10,10,13,13,1,0,48,57,52,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,
  	0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,
  	1,0,0,0,1,19,1,0,0,0,3,21,1,0,0,0,5,23,1,0,0,0,7,25,1,0,0,0,9,27,1,0,
  	0,0,11,29,1,0,0,0,13,32,1,0,0,0,15,39,1,0,0,0,17,46,1,0,0,0,19,20,5,42,
  	0,0,20,2,1,0,0,0,21,22,5,47,0,0,22,4,1,0,0,0,23,24,5,43,0,0,24,6,1,0,
  	0,0,25,26,5,45,0,0,26,8,1,0,0,0,27,28,5,40,0,0,28,10,1,0,0,0,29,30,5,
  	41,0,0,30,12,1,0,0,0,31,33,5,32,0,0,32,31,1,0,0,0,33,34,1,0,0,0,34,32,
  	1,0,0,0,34,35,1,0,0,0,35,36,1,0,0,0,36,37,6,6,0,0,37,14,1,0,0,0,38,40,
  	7,0,0,0,39,38,1,0,0,0,40,41,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,43,
  	1,0,0,0,43,44,6,7,1,0,44,16,1,0,0,0,45,47,7,1,0,0,46,45,1,0,0,0,47,48,
  	1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,18,1,0,0,0,4,0,34,41,48,2,1,6,
  	0,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mlanglexerLexerStaticData = staticData.release();
}

}

MlangLexer::MlangLexer(CharStream *input) : Lexer(input) {
  MlangLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mlanglexerLexerStaticData->atn, mlanglexerLexerStaticData->decisionToDFA, mlanglexerLexerStaticData->sharedContextCache);
}

MlangLexer::~MlangLexer() {
  delete _interpreter;
}

std::string MlangLexer::getGrammarFileName() const {
  return "Mlang.g4";
}

const std::vector<std::string>& MlangLexer::getRuleNames() const {
  return mlanglexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MlangLexer::getChannelNames() const {
  return mlanglexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MlangLexer::getModeNames() const {
  return mlanglexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MlangLexer::getVocabulary() const {
  return mlanglexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MlangLexer::getSerializedATN() const {
  return mlanglexerLexerStaticData->serializedATN;
}

const atn::ATN& MlangLexer::getATN() const {
  return *mlanglexerLexerStaticData->atn;
}


void MlangLexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 6: WSAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

void MlangLexer::WSAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0: skip(); break;

  default:
    break;
  }
}



void MlangLexer::initialize() {
  ::antlr4::internal::call_once(mlanglexerLexerOnceFlag, mlanglexerLexerInitialize);
}
