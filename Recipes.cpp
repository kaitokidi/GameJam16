#include "Recipes.hpp"
#include "Resources.hpp"

bool Recipes::compare_arrays(const std::array<Glyph,30>& g, const std::array<Glyph,30>& j) {
  if(!gm->getGlyphDataById(g[0].id).valid || !gm->getGlyphDataById(j[0].id).valid)
    return false;

  for(int i = 0; i < 6; ++i){
    if(gm->getGlyphDataById(g[i].id).valid && gm->getGlyphDataById(j[i].id).valid){
      if(gm->getGlyphDataById(g[i].id).value._d->_gt !=
         gm->getGlyphDataById(j[i].id).value._d->_gt) {
        std::cout << "hola1 " << gm->getGlyphDataById(g[i].id).value._d->_gt <<
          " " << gm->getGlyphDataById(j[i].id).value._d->_gt <<  " " <<
          gm->getGlyphDataById(g[i].id).valid << " " <<
          gm->getGlyphDataById(j[i].id).valid <<  std::endl;
        return false;
      }
    } else if(gm->getGlyphDataById(g[i].id).valid != gm->getGlyphDataById(j[i].id).valid) {
      std::cout << "hola2 " << std::endl;
        return false;
    }
  }
  return true;
}

Recipes::Recipes(GlyphManager *n_gm)
  : GlyphContainer(n_gm, sf::Vector2u(7,6), Resources::talkBox)
{}

Recipes::~Recipes() {}

void Recipes::draw(sf::RenderTarget *rt) {
  GlyphContainer::draw(rt);
}

Maybe<Glyph> Recipes::build(const std::array<Glyph,30>& g) {
  Maybe<Glyph> result;
  for(int i = 0; i < 6; ++i) {
    std::cout << "volta " << i << std::endl;
    if(compare_arrays(g, _recipes[i])) {
      std::cout << "wtf " << std::endl;
      result.valid = true;
      result.value = _glyphs[i];
      return result;
    }
  }
  result.valid = false;
  return result;
}

void Recipes::populate() {
  // TODO
  add(gm->create(GlyphType::glyph_14)); // TEST
  add(gm->create(GlyphType::glyph_17)); // TEST
  add(gm->create(GlyphType::glyph_19)); // TEST
  add(gm->create(GlyphType::glyph_21)); // TEST
  add(gm->create(GlyphType::glyph_24)); // TEST
  add(gm->create(GlyphType::glyph_32)); // TEST

  _recipes[0] = std::array<Glyph, 30>();
  _recipes[0][0] = gm->create(GlyphType::glyph_up);
  _recipes[0][1] = gm->create(GlyphType::glyph_down);
}
