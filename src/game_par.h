#ifndef GAME_PAR_H
#define GAME_PAR_H

class GamePar {
  public:
	int get_min_size();
	int get_max_size();
	bool get_par_for_size(int size, int &par);

	private:
	  int _min, _max;

};
#endif // GAME_PAR_H