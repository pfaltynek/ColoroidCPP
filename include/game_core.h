#ifndef GAME_CORE_H
#define GAME_CORE_H

typedef enum ColoroidColor { Black, Blue, Cyan, Green, Pink, Red };

class ColoroidGameCore {

  public:
  protected:
  private:
	std::map<int, ColoroidColor> m_desktop;
};

#endif // GAME_CORE_H