#include "Resources.hpp"
#include "GlyphManager.hpp"

//PLACE HERE THE RESOURCES YOU WANT TO LOAD

// sf::Texture        Resources::....
sf::Texture            Resources::key;
sf::Texture            Resources::talkBox;
sf::Shader             Resources::cInvert;
sf::Font               Resources::pauseMenuFont;
std::vector<SpriteSheetDescription> Resources::descriptions;

//Orc textures
sf::Texture             Resources::objectiveBg;
sf::Texture             Resources::actualBgOrc;
sf::Texture             Resources::spellingBgOrc;
sf::Texture             Resources::inventoryBgOrc;

//Silvan textures
sf::Texture             Resources::objectiveCham;
sf::Texture             Resources::actualBgCham;
sf::Texture             Resources::spellingBgCham;
sf::Texture             Resources::inventoryBgCham;
sf::Texture             Resources::background;

sf::Texture             Resources::glyphTextures[22];

sf::Texture             Resources::recipesBg;

void Resources::load() {
key.loadFromFile(TEXTURETPATH+std::string("key.png"));

actualBgOrc.loadFromFile(TEXTURETPATH+std::string("key.png"));
objectiveBg.loadFromFile                    (TEXTURETPATH+std::string("key.png"));
spellingBgOrc.loadFromFile                  (TEXTURETPATH+std::string("key.png"));
inventoryBgOrc.loadFromFile                 (TEXTURETPATH+std::string("key.png"));

actualBgCham.loadFromFile                   (TEXTURETPATH+std::string("key.png"));
objectiveCham.loadFromFile                  (TEXTURETPATH+std::string("key.png"));
spellingBgCham.loadFromFile                 (TEXTURETPATH+std::string("key.png"));
inventoryBgCham.loadFromFile                (TEXTURETPATH+std::string("key.png"));

recipesBg.loadFromFile                      (TEXTURETPATH+std::string("key.png"));

talkBox.loadFromFile                (TEXTURETPATH+std::string("talkBox.png"));

background.loadFromFile             (TEXTURETPATH+std::string("background.png"));

if (!cInvert.loadFromFile(SHADERPATH+std::string("invert.frag"), sf::Shader::Fragment))
  exit(EXIT_FAILURE);

if (!pauseMenuFont.loadFromFile("Resources/Fonts/font.ttf"))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_11)].loadFromFile(TEXTURETPATH+std::string("glyph-1-01.png"))) {
exit(EXIT_FAILURE);
}

if (!glyphTextures[int(GlyphType::glyph_12)].loadFromFile(TEXTURETPATH+std::string("glyph-1-02.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_13)].loadFromFile(TEXTURETPATH+std::string("glyph-1-03.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_14)].loadFromFile(TEXTURETPATH+std::string("glyph-1-04.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_15)].loadFromFile(TEXTURETPATH+std::string("glyph-1-05.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_16)].loadFromFile(TEXTURETPATH+std::string("glyph-1-06.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_17)].loadFromFile(TEXTURETPATH+std::string("glyph-1-07.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_18)].loadFromFile(TEXTURETPATH+std::string("glyph-1-08.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_19)].loadFromFile(TEXTURETPATH+std::string("glyph-1-09.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_21)].loadFromFile(TEXTURETPATH+std::string("glyph-2-01.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_22)].loadFromFile(TEXTURETPATH+std::string("glyph-2-02.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_23)].loadFromFile(TEXTURETPATH+std::string("glyph-2-03.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_24)].loadFromFile(TEXTURETPATH+std::string("glyph-2-04.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_25)].loadFromFile(TEXTURETPATH+std::string("glyph-2-05.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_26)].loadFromFile(TEXTURETPATH+std::string("glyph-2-06.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_31)].loadFromFile(TEXTURETPATH+std::string("glyph-3-01.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_32)].loadFromFile(TEXTURETPATH+std::string("glyph-3-02.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_33)].loadFromFile(TEXTURETPATH+std::string("glyph-3-03.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_up)].loadFromFile(TEXTURETPATH+std::string("glyph-up.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_down)].loadFromFile(TEXTURETPATH+std::string("glyph-down.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_right)].loadFromFile(TEXTURETPATH+std::string("glyph-right.png")))
  exit(EXIT_FAILURE);

if (!glyphTextures[int(GlyphType::glyph_left)].loadFromFile(TEXTURETPATH+std::string("glyph-left.png")))
  exit(EXIT_FAILURE);
}

SpriteSheetDescription Resources::loadDescription(std::string fileName) {
  std::string filePath = TEXTURETPATH + fileName + TEXTUREDESCRIPTIONEXTENSION;
  SpriteSheetDescription ret;
  // leer el fichero
  std::ifstream file(filePath);
  if (!file.is_open()) {
    std::cout << "Error opening file on resources loadDescription " << filePath << std::endl;
    exit(EXIT_FAILURE);
  }
  std::vector<std::pair<int, std::string> > v;
  int lineNum = 0;
  std::string line;
  while (getline(file,line)) {
    ++lineNum;
    for (int i = 0; i < int(line.size()-1); ++i) {
      if (line[i] == '/' && line[i+1] == '/') {
        line = line.substr(0,i);
        break;
      }
    }
    std::istringstream aux(line);
    std::string s;
    while(aux >> s) 
      v.push_back(std::make_pair(lineNum,s));
  }
  SpriteSheetDescription ssd;
  std::map<std::string, int> positions;
  for (int  i = 0; i < int(v.size()); ++i) {
    lineNum = v[i].first;
    std::string key = v[i].second;
    int descriptorPosition;
    if (positions.find(key) == positions.end()) {
      descriptorPosition = positions.size();
      positions.insert(std::make_pair(key,descriptorPosition));
      ssd.push_back(std::vector<sf::IntRect>());
    }
    else {
      descriptorPosition = positions[key];
    }

    if (i+4 >= int(v.size()) || 
        !isInt(v[i+1].second) || 
        !isInt(v[i+2].second) || 
        !isInt(v[i+3].second) || 
        !isInt(v[i+4].second)) {
      std::cout << "Error in line " << lineNum << ": four integers are needed" << std::endl;
      exit(EXIT_FAILURE);
    }

    sf::IntRect intRect(myStoi(v[i+1].second),
                        myStoi(v[i+2].second),
                        myStoi(v[i+3].second),
                        myStoi(v[i+4].second));
    ssd[descriptorPosition].push_back(intRect);

    i += 4;
  }

  return ssd;
}
