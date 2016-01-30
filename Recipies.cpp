#include "Recipies.hpp"

#include "BasicReagents.hpp"

int BasicReagents::used;
GlyphID BasicReagents::used_g[9];
std::vector<std::vector<GlyphID>> BasicReagents::reagents;

Recipies::Recipies(const sf::Texture& text)
  : GlyphContainer(6, sf::Vector2i(1,6), text)
{}

Recipies::~Recipies() {}

void Recipies::populate() {
  BasicReagents::init();
  glyphs.clear();

  // Generate 3 basic reagents
  BasicReagents::startNewSequence();
  for(int i = 0; i < 3; i++) {
    std::pair<GlyphID, std::vector<GlyphID>> p = BasicReagents::getBasicReagent();
    recipies[p.second] = p.first;
    glyphs.push_back(p.first);
  }

  // Generate 2 simple reagents
  generateSimpleRecipies();

  // Generate 1 complex reagent
  generateComplexRecipe();
}

GlyphID Recipies::build(std::vector<GlyphID> v) {
  return recipies[v];
}

void Recipies::generateSimpleRecipies() {
  std::vector<GlyphID> recipe;

  for(int j = 0; j < 2; j++) {
    for(int i = 0; i < 2; i++) {
      int index = rand() % 3;
      recipe.push_back(glyphs[index]);
    }
    recipies[recipe] = generateUniqueSimpleReagent();
    glyphs.push_back(recipies[recipe]);
  }
}

void Recipies::generateComplexRecipe() {
  std::vector<GlyphID> recipe;

  for(int i = 0; i < 4; i++) {
    int index = rand() % 5;
    recipe.push_back(glyphs[index]);
  }
  recipies[recipe] = generateUniqueComplexReagent();
  glyphs.push_back(recipies[recipe]);
}

GlyphID Recipies::generateUniqueSimpleReagent() {
  GlyphID random;
  do {
    random = (GlyphID)(rand() % 6 + 13);
    printf("lmao\n");
  } while(isUsed(random));
  aused_simple[used_simple] = random;
  used_simple++;
  return random;
}

GlyphID Recipies::generateUniqueComplexReagent() {
  return (GlyphID)(rand() % 3 + 19);
}

bool Recipies::isUsed(GlyphID gid) {
  for(int i = 0; i < used_simple; i++) {
    if(aused_simple[i] == gid)
      return true;
  }
  return false;
}
