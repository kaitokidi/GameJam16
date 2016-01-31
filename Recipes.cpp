#include "Recipes.hpp"
#include "Resources.hpp"

Recipes::Recipes(GlyphManager *n_gm)
  : GlyphContainer(n_gm, sf::Vector2u(7,6), Resources::talkBox)
{}

Recipes::~Recipes() {}

void Recipes::populate() {
  // TODO
}

Maybe<Glyph> Recipes::getGlyphByIndex(unsigned int index) {
  Maybe<Glyph> result;
  if(index >= n_elements) {
    result.valid = false;
    return result;
  }
  else {
    result.valid = true;
    result.value = _glyphs[index].clone();
    return result;
  }
}
