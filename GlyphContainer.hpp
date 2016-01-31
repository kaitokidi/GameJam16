#ifndef __GLYPHCONTAINER_HPP__
#define __GLYPHCONTAINER_HPP__

#include <array>

#include "Glyph.hpp"

class GlyphContainer {
public:
  GlyphContainer(sf::Vector2i layout, const sf::Texture& text);
  ~GlyphContainer();

  void draw(sf::RenderTarget* target);
  void update(float deltaTime);

  void setPosition(const sf::Vector2f& pos);
  void setSize(const sf::Vector2f& size);
  void setSize(float width, float height);

  GlyphID getGlyphID();

  void preserveHeight(bool b);

  Glyph top();
  void pop();
  void add(Glyph g);
  void add(GlyphID gid);
  bool empty();
  Glyph get(int index);
  void substitute(GlyphID gid);

  bool glyphNone();
  sf::Sprite _background;

protected:
  sf::Vector2i _layout;
  sf::Vector2f _pos;
  bool preserve_height;
  bool preserve_width;

  sf::RenderTarget* _window;

  int n_elements;
  std::array<Glyph, 30> _glyphs;

  sf::Vector2f calculateGlyphSize();
};

#endif
