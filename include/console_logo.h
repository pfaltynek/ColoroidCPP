#ifndef CONSOLE_LOGO_H
#define CONSOLE_LOGO_H

#include <string>
#include <iostream>
#include <vector>

class ConsoleLogo {
	private:
	  std::vector<std::string> _logo;
	  unsigned int _logo_width = 0;
	  static const std::string _compressed;
	  void compress();
	  void decompress();

	public:
	  void print_uncompressed();
	  ConsoleLogo();
};
#endif // CONSOLE_LOGO_H
