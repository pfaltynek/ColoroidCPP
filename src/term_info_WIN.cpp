#include "term_info.h"
#include <windows.h>

namespace terminal {
	void GetTerminalSize(unsigned int &w, unsigned int &h) {
		CONSOLE_SCREEN_BUFFER_INFO sbInfo;

		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbInfo);
		w = sbInfo.dwSize.X;
		h = sbInfo.dwSize.Y;
	}
} // namespace terminal