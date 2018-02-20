#include "term_info.h"
#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

namespace terminal {
	void GetTerminalSize(unsigned int &w, unsigned int &h) {
		struct winsize w;

		ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
		h = w.ws_row;
		w = w.ws_col;
	}
} // namespace terminal