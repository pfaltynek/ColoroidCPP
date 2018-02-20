#ifndef CONSOLE_LOGO_H
#define CONSOLE_LOGO_H

#include <string>
#include <iostream>
#include <vector>

class ConsoleLogo {
	private:
	  std::vector<std::string> _logo;
	  static const std::string _compressed;
	  void decompress();

	public:
	  void print_uncompressed();
	  //void compress();

	  ConsoleLogo();
};
#endif // CONSOLE_LOGO_H