#include "BasicReagents.hpp"

void BasicReagents::startNewSequence()
{
  used = 0;
}

bool BasicReagents::alreadyUsed(GlyphID gid) {
  for(int i = 0; i < used; i++) {
    if(used_g[i] == gid)
      return true;
  }
  return false;
}

void BasicReagents::init() {
  reagents = std::vector<std::vector<GlyphID>>(30);
  reagents[glyph11] = {glyphUP, glyphDOWN};
  reagents[glyph12] = {glyphUP, glyphDOWN};
  reagents[glyph13] = {glyphUP, glyphDOWN};
  reagents[glyph14] = {glyphUP, glyphDOWN};
  reagents[glyph15] = {glyphUP, glyphDOWN};
  reagents[glyph16] = {glyphUP, glyphDOWN};
  reagents[glyph17] = {glyphUP, glyphDOWN};
  reagents[glyph18] = {glyphUP, glyphDOWN};
  reagents[glyph19] = {glyphUP, glyphDOWN};
}

std::pair<GlyphID, std::vector<GlyphID>> BasicReagents::getBasicReagent() {
  GlyphID randomgid;
  do {
    randomgid = (GlyphID)(rand() % NUM_BASIC_REAGENTS + 4);
  } while (alreadyUsed(randomgid));
  used_g[used] = randomgid;
  used++;
  return std::pair<GlyphID, std::vector<GlyphID>>
    (randomgid, reagents[(int)randomgid]);
}
