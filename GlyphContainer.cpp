#include "GlyphContainer.hpp"

GlyphContainer::GlyphContainer(GlyphManager *n_gm, sf::Vector2u layout, const sf::Texture& bg_text) :
  _background(bg_text)
{
  // Draw layout (columns, rows)
  _layout = layout;

  // Layout presentation
  preserve_height = false;
  preserve_width = false;

  // we start with zero elements
  n_elements = 0;

  gm = n_gm;
}

GlyphContainer::~GlyphContainer() {}

// Draw the container, the glyphs will be drawn using the Glyph Manager
void GlyphContainer::draw(sf::RenderTarget* target) {
  target->draw(_background);
}

//
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
      if((i * _layout.y + j) >= n_elements)
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
  for(unsigned int i = 0; i < n_elements; ++i) {
    _glyphs[i].setSize(gsize);
  }

  // Recalculate positions
  setPosition(_pos);
}

// Add glyph to Container
void GlyphContainer::add(Glyph g) {
  // TODO
  if(n_elements == 0) {
    g.setSize(calculateGlyphSize());
  } else {
    g.setSize(_glyphs[0].getSize());
  }
  _glyphs[n_elements] = g;
  ++n_elements;

  // Recalculate position
  setPosition(_pos);
}

// Discard all the elements in the container
void GlyphContainer::discard() {
  for (int i = 0; i < n_elements; ++i)
    _glyphs[i].destroy();
  n_elements = 0;
}

void GlyphContainer::preserveHeight(bool b) {
  preserve_height = b;
}

void GlyphContainer::preserveWidth(bool b) {
  preserve_width = b;
}

bool GlyphContainer::empty() const {
  return n_elements == 0;
}

Maybe<Glyph> GlyphContainer::get(unsigned int index) {
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

// PRIVATE
sf::Vector2f GlyphContainer::calculateGlyphSize() {
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

const std::array<Glyph,30>& GlyphContainer::getArray() const {
  return _glyphs;
}
