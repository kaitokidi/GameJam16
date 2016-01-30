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
  reagents[glyph11] = {glyphUP, glyphDOWN, glyphUP, glyphDOWN, glyphUP, glyphDOWN};
  reagents[glyph12] = {glyphUP, glyphDOWN, glyphLEFT, glyphRIGHT, glyphLEFT, glyphRIGHT};
  reagents[glyph13] = {glyphUP, glyphDOWN, glyphRIGHT, glyphLEFT, glyphDOWN, glyphRIGHT};
  reagents[glyph14] = {glyphUP, glyphDOWN, glyphLEFT, glyphDOWN, glyphUP, glyphDOWN};
  reagents[glyph15] = {glyphUP, glyphDOWN, glyphDOWN, glyphLEFT, glyphDOWN, glyphUP};
  reagents[glyph16] = {glyphRIGHT, glyphLEFT, glyphRIGHT, glyphLEFT, glyphRIGHT, glyphLEFT};
  reagents[glyph17] = {glyphUP, glyphRIGHT, glyphLEFT, glyphUP, glyphRIGHT, glyphLEFT};
  reagents[glyph18] = {glyphLEFT, glyphDOWN, glyphRIGHT, glyphLEFT, glyphDOWN, glyphRIGHT};
  reagents[glyph19] = {glyphUP,glyphDOWN, glyphLEFT, glyphDOWN, glyphUP, glyphDOWN};
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
