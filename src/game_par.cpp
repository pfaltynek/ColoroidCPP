#include "game_par.h"

int GamePar::get_min_size() {
	return GAME_SIZE_MIN;
};

int GamePar::get_max_size() {
	return GAME_SIZE_MAX;
};

bool GamePar::get_par_for_size(int size, int &par) {
	bool result = true;

	switch (size){
		case 4:
			par = 7;
			break;

		case 5:
			par = 9;
			break;

		case 6:
			par = 11;
			break;

		case 7:
			par = 13;
			break;

		case 8:
			par = 15;
			break;

		case 9:
			par = 17;
			break;

		case 10:
			par = 19;
			break;

		case 11:
			par = 20;
			break;

		case 12:
			par = 22;
			break;

		case 13:
			par = 24;
			break;

		case 14:
			par = 26;
			break;

		case 15:
			par = 28;
			break;

		case 16:
			par = 30;
			break;

		case 17:
			par = 32;
			break;

		case 18:
			par = 34;
			break;

		case 19:
			par = 36;
			break;

		case 20:
			par = 38;
			break;

		case 21:
			par = 39;
			break;

		case 22:
			par = 41;
			break;

		case 23:
			par = 43;
			break;

		case 24:
			par = 45;
			break;

		case 25:
			par = 47;
			break;

		case 26:
			par = 49;
			break;

		case 27:
			par = 51;
			break;

		case 28:
			par = 53;
			break;

		case 29:
			par = 55;
			break;

		case 30:
			par = 57;
			break;

		case 31:
			par = 58;
			break;

		case 32:
			par = 60;
			break;

		case 33:
			par = 62;
			break;

		case 34:
			par = 64;
			break;

		case 35:
			par = 66;
			break;

		default:
			result = false;
			par = -1;
			break;
	}

	return result;
}
