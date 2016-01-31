#include "GlyphManager.hpp"
#include "Resources.hpp"

///////////////////
// GLYPH MANAGER //
///////////////////

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

void GlyphManager::draw(sf::RenderTarget *rt) {
  for (auto g : _data) {
    if(!g._destroyed)
      rt->draw(g._sprite);
  }
}

sf::Texture& GlyphManager::getTextureByGlyphType(GlyphType gt) {
  return Resources::glyphTextures[int(gt)];
}

GlyphManager::DataInstance GlyphManager::getGlyphDataById(unsigned int id) {
  DataInstance _d;
  _d._d = &_data[id];
  return _d;
}

///////////
// GLYPH //
///////////

void Glyph::destroy() {
  gm->destroy(*this);
}

sf::Vector2f Glyph::getSize() const {
  sf::Vector2f _ss = gm->getGlyphDataById(id)._d->_sprite.getScale();
  sf::Vector2u _ts = gm->getGlyphDataById(id)._d->_sprite.getTexture()->getSize();
  return sf::Vector2f(_ss.x * _ts.x, _ss.y * _ts.y);
}

sf::Vector2f Glyph::getPosition() const {
  return gm->getGlyphDataById(id)._d->_sprite.getPosition();
}

bool Glyph::isDestroyed() const {
  return gm->getGlyphDataById(id)._d->_destroyed;
}

void Glyph::setSize(sf::Vector2f _s) {
  sf::Vector2u _ts = gm->getGlyphDataById(id)._d->_sprite.getTexture()->getSize();
  float xf = _s.x / _ts.x;
  float yf = _s.y / _ts.y;
  gm->getGlyphDataById(id)._d->_sprite.setScale(sf::Vector2f(xf, yf));
}

void Glyph::setPosition(sf::Vector2f _p) {
  gm->getGlyphDataById(id)._d->_sprite.setPosition(_p);
}
