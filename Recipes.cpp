#include "Recipes.hpp"
#include "Resources.hpp"

Recipes::Recipes(GlyphManager *n_gm)
  : GlyphContainer(n_gm, sf::Vector2u(7,6), Resources::talkBox)
{}

Recipes::~Recipes() {}

void Recipes::populate() {
  // TODO
  add(gm->create(GlyphType::glyph_14)); // TEST
}
