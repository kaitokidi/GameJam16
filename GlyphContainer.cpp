#include "GlyphContainer.hpp"
#include <stdio.h>

GlyphContainer::GlyphContainer(int size, sf::Vector2i layout, const sf::Texture& bg_text) :
  _background(bg_text),
  _glyphs()
{
  _nglyphs = size;
  _layout = layout;
  preserve_height = false;
  preserve_width = false;
}

GlyphContainer::~GlyphContainer() {}

void GlyphContainer::draw(sf::RenderTarget* target) {
  target->draw(_background);
  for (auto &g : _glyphs) {
    g.draw(target);
  }
}

void GlyphContainer::update(float deltaTime) {
  // TODO OR NOT TODO
}

void GlyphContainer::setRenderTarget(sf::RenderTarget* t) {
  _window = t;
  for (auto &g : _glyphs) {
    g.setRenderTarget(t);
  }
}

void GlyphContainer::setPosition(const sf::Vector2f& pos) {
  _background.setPosition(pos);
  _pos = pos;

  sf::Vector2f g_size;

  if(!empty())
    g_size = _glyphs[0].getSize();
  else
    return;

  sf::Vector2f offset;
  offset.x = (_background.getGlobalBounds().width/2)/_layout.x - (calculateGlyphSize().x/2);
  offset.y = (_background.getGlobalBounds().height/2)/_layout.y - (calculateGlyphSize().y/2);

  for(unsigned int i = 0; i < _layout.x; i++) {
    for(unsigned int j = 0; j < _layout.y; j++) {
      if((i * _layout.y + j) > _glyphs.size())
        return;

      sf::Vector2f n_pos = _pos + sf::Vector2f(i * g_size.x + offset.x,
                                               j * g_size.y + offset.y);
      _glyphs[i * _layout.y + j].setPosition(n_pos);
    }
  }
}

void GlyphContainer::setSize(const sf::Vector2f& size) {
  setSize(size.x, size.y);
}

void GlyphContainer::setSize(float width, float height) {
  float x_ratio = width / _background.getTexture()->getSize().x;
  float y_ratio = height / _background.getTexture()->getSize().y;
  _background.setScale(sf::Vector2f(x_ratio, y_ratio));

  sf::Vector2f gsize = calculateGlyphSize();
  for(auto &g : _glyphs) {
    g.setSize(gsize);
  }
  // Recalculate positions
  setPosition(_pos);
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
  printf("%d\n", g.getID());
  _glyphs.push_back(g);

  // Recalculate position
  setPosition(_pos);
}

void GlyphContainer::substitute(GlyphID gid) {
  printf("%d\n", gid);
  Glyph g = Glyph(gid);

  if(_glyphs.size() == 0) {
    g.setSize(calculateGlyphSize());
    _glyphs.push_back(g);
  } else {
    g.setSize(_glyphs[0].getSize());
    _glyphs[0] = g;
  }

  setPosition(_pos);
}

void GlyphContainer::preserveHeight(bool b) {
  preserve_height = b;
}

void GlyphContainer::add(GlyphID gid) {
  Glyph g = Glyph(gid);
  add(g);
}

bool GlyphContainer::empty() {
  return _glyphs.size() == 0;
}

Glyph GlyphContainer::get(int index) {
  return _glyphs[index];
}

GlyphID GlyphContainer::getGlyphID() {
  if(!empty())
    return _glyphs[0].getID();
  else
    return glyph_none;
}

sf::Vector2f GlyphContainer::calculateGlyphSize() {
  //sheeeeet
  float width;
  float height;

  width = this->_background.getGlobalBounds().width / _layout.x;
  height = this->_background.getGlobalBounds().height / _layout.y;

  if(preserve_height) {
    height = width;
  } else if(preserve_width) {
    width = height;
  }

  return sf::Vector2f(width, height);
}
