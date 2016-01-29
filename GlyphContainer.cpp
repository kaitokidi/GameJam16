#include "GlyphContainer.hpp"

GlyphContainer::GlyphContainer(int size, sf::Vector2i layout, const sf::Texture& bg_text) :
  _background(bg_text)
{
  _nglyphs = size;
  _glyphs = std::vector<Glyph>(size);
  _layout = layout;
}

GlyphContainer::~GlyphContainer() {}

void GlyphContainer::render() {
  // TODO
}

void GlyphContainer::update() {
  // TODO 
}

void GlyphContainer::setPosition(sf::Vector2f pos) {
  _background.setPosition(pos);
  _pos = pos;
}

Glyph GlyphContainer::top() {
  return _glyphs[_glyphs.size()];
}

void GlyphContainer::pop() {
  _glyphs.erase(_glyphs.end());
}

void GlyphContainer::insert(Glyph g) {
  _glyphs.push_back(g);
}

bool GlyphContainer::empty() {
  return _glyphs.size() == 0;
}

Glyph GlyphContainer::get(int index) {
  return _glyphs[index];
}

