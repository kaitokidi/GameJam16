#include "GlyphContainer.hpp"

GlyphContainer::GlyphContainer(int size, sf::Vector2i layout, const sf::Texture& bg_text) :
  _background(bg_text)
{
  _nglyphs = size;
  _glyphs = std::vector<Glyph>(size);
  _layout = layout;
}

GlyphContainer::~GlyphContainer() {}

void GlyphContainer::draw() {
  _window->draw(_background);
  for (auto g : _glyphs) {
    g.draw();
  }
}

void GlyphContainer::update(float deltaTime) {
  // TODO OR NOT TODO
}

void GlyphContainer::setPosition(const sf::Vector2f& pos) {
  _background.setPosition(pos);
  _pos = pos;

  sf::Vector2f g_size;

  if(!empty())
    g_size = _glyphs[0].getSize();
  else
    return;

  for(unsigned int i = 0; i < _layout.x; i++) {
    for(unsigned int j = 0; j < _layout.y; j++) {
      if((i * _layout.y + j) > _glyphs.size())
        return;

      sf::Vector2f n_pos = _pos + sf::Vector2f(i * g_size.x,
                                               j * g_size.y);
      _glyphs[i * _layout.y + j].setPosition(n_pos);
    }
  }
}

void GlyphContainer::setSize(const sf::Vector2f& size) {
  // TODO _background.(size

  // Recalculate positions
  setPosition(_pos);
}

void GlyphContainer::setSize(float width, float height) {
  setSize(sf::Vector2f(width, height));
}

Glyph GlyphContainer::top() {
  return _glyphs[_glyphs.size()];
}

void GlyphContainer::pop() {
  _glyphs.erase(_glyphs.end()--);
}

void GlyphContainer::add(Glyph g) {
  if(_glyphs.size() == 0) {
    g.setSize(calculateGlyphSize());
  } else {
    g.setSize(_glyphs[0].getSize());
  }

  _glyphs.push_back(g);
  // Recalculate position
  setPosition(_pos);
}

bool GlyphContainer::empty() {
  return _glyphs.size() == 0;
}

Glyph GlyphContainer::get(int index) {
  return _glyphs[index];
}

sf::Vector2f GlyphContainer::calculateGlyphSize() {
  // TODO
}
