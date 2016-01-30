#ifndef __INPUTGLYPHS__
#define __INPUTGLYPHS__

#include "GlyphContainer.hpp"

class InputGlyphs : public GlyphContainer {
public:
  InputGlyphs(int size, sf::Vector2i layout,
              const sf::Texture& text, GlyphContainer* curr_object);
  ~InputGlyphs();

  bool add(Glyph g);
  void discard();
private:
  GlyphContainer* _current_object;
};

#endif
