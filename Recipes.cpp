#include "Recipes.hpp"
#include "Resources.hpp"

Recipes::Recipes(GlyphManager *n_gm)
  : GlyphContainer(n_gm, sf::Vector2u(7,6), Resources::talkBox)
{}

Recipes::~Recipes() {}

void Recipes::draw(sf::RenderTarget *rt) {
  GlyphContainer::draw(rt);
}

void Recipes::populate() {
  // TODO
  add(gm->create(GlyphType::glyph_14)); // TEST
  add(gm->create(GlyphType::glyph_17)); // TEST
  add(gm->create(GlyphType::glyph_19)); // TEST
  add(gm->create(GlyphType::glyph_21)); // TEST
  add(gm->create(GlyphType::glyph_24)); // TEST
  add(gm->create(GlyphType::glyph_32)); // TEST
}
