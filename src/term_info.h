#ifndef TERM_INFO_H
#define TERM_INFO_H

namespace terminal {
	void GetTerminalSize(unsigned int &w, unsigned int &h);
	int GetTerminalColor();
	void SetTerminalColor(int color);
	void SetTerminalBackColor(char color_code);
	void SetTerminalColors(char color_code_f, char color_code_b);
}

#endif // TERM_INFO_H