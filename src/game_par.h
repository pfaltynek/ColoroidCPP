#ifndef GAME_PAR_H
#define GAME_PAR_H

#define GAME_SIZE_MIN 4
#define GAME_SIZE_MAX 35

class GamePar {
  public:
	int get_min_size();
	int get_max_size();
	bool get_par_for_size(int size, int &par);
};
#endif // GAME_PAR_H