#include "InputGlyphs.hpp"

InputGlyphs::InputGlyphs(sf::Texture& text, GlyphContainer* curr_object) :
  GlyphContainer(10, sf::Vector2i(6,1), text),
  _current_object(curr_object)
{}

InputGlyphs::~InputGlyphs() {}

void InputGlyphs::discard() {
    _glyphs.clear();
}

std::vector<GlyphID> InputGlyphs::getVectorGlyphID(){
    std::vector<GlyphID> ret;
    for (auto g : _glyphs) {
        ret.push_back(g.getID());
    }
    return ret;
}

// bool InputGlyphs::add(Glyph g) {
//   _glyphs.push_back(g);
// }
