#ifndef __GLYPHCONTAINER_HPP__
#define __GLYPHCONTAINER_HPP__

#include <array>
#include "GlyphManager.hpp"

class GlyphContainer {
public:
  GlyphContainer(sf::Vector2u layout, const sf::Texture& text);
  ~GlyphContainer();

  void draw(sf::RenderTarget* target);

  void setPosition(const sf::Vector2f& pos);
  void setSize(const sf::Vector2f& size);
  void setSize(float width, float height);

  void preserveHeight(bool b);
  void preserveWidth(bool b);

  void add(Glyph g);

  bool empty();
  Glyph get(int index);

protected:
  // Layout
  sf::Vector2u _layout;
  sf::Vector2f _pos;

  bool preserve_height;
  bool preserve_width;

  sf::Sprite _background;

  // Container data
  unsigned int n_elements;
  std::array<Glyph, 30> _glyphs;

  sf::Vector2f calculateGlyphSize();
};

#endif
