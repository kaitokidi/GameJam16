#ifndef __GLYPHCONTAINER_HPP__
#define __GLYPHCONTAINER_HPP__

#include <vector>

#include "Glyph.hpp"

class GlyphContainer {
public:
  GlyphContainer(int size, sf::Vector2i layout, const sf::Texture& text);
  ~GlyphContainer();

  void draw();
  void update(float deltaTime);

  void setPosition(const sf::Vector2f& pos);
  void setSize(const sf::Vector2f& size);
  void setSize(float width, float height);

  void setRenderTarget(sf::RenderTarget* t);

  Glyph top();
  void pop();
  void add(Glyph g);
  void add(GlyphID gid);
  bool empty();
  Glyph get(int index);

protected:
  unsigned int _nglyphs;
  sf::Vector2i _layout;
  sf::Vector2f _pos;

  sf::RenderTarget* _window;

  std::vector<Glyph> _glyphs;
  sf::Sprite _background;

  sf::Vector2f calculateGlyphSize();
};

#endif
