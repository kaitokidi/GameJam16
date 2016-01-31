#include "Recipes.hpp"
#include "Resources.hpp"

Recipes::Recipes(GlyphManager *gm)
  : GlyphContainer(gm, sf::Vector2u(7,6), Resources::talkBox)
{}
Recipes::~Recipes() {}

void Recipes::populate() {
  // TODO
}

Glyph Recipes::getGlyphByIndex(unsigned int index) {
  return _glyphs[index].clone();
}
