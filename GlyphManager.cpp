#include "GlyphManager.hpp"

GlyphManager::GlyphManager() {
  _n_glyphs = 0;
}

GlyphManager::~GlyphManager() {}

Glyph GlyphManager::create(GlyphType gt) {
  // Generate Glyph Data
  _data[_n_glyphs]._sprite = sf::Sprite(getTextureByGlyphType(gt));
  _data[_n_glyphs]._gt = gt;
  _data[_n_glyphs]._complete = false;
  _data[_n_glyphs]._destroyed = false;

  // Create glyph instance
  Glyph g;
  g.id = _n_glyphs;
  g.gm = this;

  // Increment Glyph counter
  ++_n_glyphs;

  // Return glyph instance
  return g;
}

void GlyphManager::destroy(Glyph g) {
  // Set destroyed flag to true and add g.id to free indices
  _data[g.id]._destroyed = true;
  _free_indices[_n_free_indices] = g.id;
  ++_n_free_indices;
}

sf::Texture& GlyphManager::getTextureByGlyphType(GlyphType gt) {
  // TODO
}

GlyphManager::DataInstance GlyphManager::getGlyphDataById(unsigned int id) {
  DataInstance _d;
  _d._d = &_data[id];
  return _d;
}
