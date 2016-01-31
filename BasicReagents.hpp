#ifndef __BASICREAGENTS__
#define __BASICREAGENTS__

#include "GlyphManager.hpp"
#include <utility>

const int NUM_BASIC_REAGENTS = 9;

class BasicReagents {
public:
  static void startNewSequence();
  static std::pair<Glyph, std::vector<Glyph>> getBasicReagent();
  static void init();
private:
  static Glyph basic[NUM_BASIC_REAGENTS];
  static Glyph used_g[NUM_BASIC_REAGENTS];
  static std::vector<std::vector<Glyph>> reagents;
  static int used;

  static bool alreadyUsed(Glyph);
};

#endif
