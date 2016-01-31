#ifndef __GLYPHMANAGER__
#define __GLYPHMANAGER__

#include <SFML/Graphics.hpp>

// maximum number of glyphs the Glyph Manager can hold
const unsigned int MAX_NUM_GLYPHS = 32000;

// Types of Glyph
enum GlyphType {
  glyph_up,
  glyph_down,
  glyph_left,
  glyph_right,
  glyph_11,
  glyph_12,
  glyph_13,
  glyph_14,
  glyph_15,
  glyph_16,
  glyph_17,
  glyph_18,
  glyph_19,
  glyph_21,
  glyph_22,
  glyph_23,
  glyph_24,
  glyph_25,
  glyph_26,
  glyph_31,
  glyph_32,
  glyph_33,
  glyph_none
};


class GlyphManager;
struct Glyph {
  friend class GlyphManager;
public:
  unsigned int id;

private:
  GlyphManager* gm;
};

// Manages Glyphs
//   ____ _             _     __  __
//  / ___| |_   _ _ __ | |__ |  \/  | __ _ _ __   __ _  __ _  ___ _ __
// | |  _| | | | | '_ \| '_ \| |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '__|
// | |_| | | |_| | |_) | | | | |  | | (_| | | | | (_| | (_| |  __/ |
//  \____|_|\__, | .__/|_| |_|_|  |_|\__,_|_| |_|\__,_|\__, |\___|_|
//          |___/|_|                                   |___/

class GlyphManager {
  friend class Glyph;
public:
  GlyphManager();
  ~GlyphManager();

  Glyph create(GlyphType gt);
  void  destroy(Glyph);

private:
  struct _glyph_data {
    sf::Sprite _sprite;
    GlyphType _gt;
    bool _complete;
    bool _destroyed;
  };

  unsigned int _n_glyphs;
  std::array<_glyph_data, MAX_NUM_GLYPHS> _data;

  unsigned int _n_free_indices;
  std::array<unsigned int, MAX_NUM_GLYPHS> _free_indices;

  // Private methods
  sf::Texture& getTextureByGlyphType(GlyphType);

public:
  struct DataInstance {
    _glyph_data *_d;

    // Data Instance data methods

  };

private:
  GlyphManager::DataInstance getGlyphDataById(unsigned int id);
};

#endif
