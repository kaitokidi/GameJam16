#ifndef __GLYPH_HPP__
#define __GLYPH_HPP__

#include <SFML/Graphics.hpp>


class Glyph {
public:
  Glyph(sf::Texture& text);
  ~Glyph();

  void render();
  void setPosition(sf::Vector2f pos);

private:
  sf::RenderWindow* _window;
  sf::Sprite _sprite;
};

#endif
