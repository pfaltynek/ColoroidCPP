#ifndef COLOROID_GAME_STATS_H
#define COLOROID_GAME_STATS_H

class ColoroidGameStats {
	public:
	  ColoroidGameStats();
	  void reset_game_stats();
	  bool

	private:
	  unsigned char m_next_game_size;
	  unsigned int m_games_played;
	  unsigned int m_games_won;
	  unsigned char m_checksum
};
#endif // COLOROID_GAME_STATS_H