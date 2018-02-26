#include "term_info.h"
#include <windows.h>

namespace terminal {
	void GetTerminalSize(unsigned int &w, unsigned int &h) {
		CONSOLE_SCREEN_BUFFER_INFO sbInfo;

		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbInfo);
		// w = sbInfo.dwSize.X;
		// h = sbInfo.dwSize.Y;
		w = sbInfo.srWindow.Right - sbInfo.srWindow.Left + 1;
		h = sbInfo.srWindow.Bottom - sbInfo.srWindow.Top + 1;
	}

	int GetTerminalColor() {
		CONSOLE_SCREEN_BUFFER_INFO sbInfo;

		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbInfo);
		return (int)sbInfo.wAttributes;
	}

	void SetTerminalColor(int color) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	}

	unsigned char TranslateColorCodeToColorNumber(char color_symbol) {
		// . = backround
		// W = White
		// B = Blue
		// R = Red
		// G = Green
		// C = Cyan
		// Y = Yellow
		// D = Dark Gray

		switch (color_symbol) {
			case 'W':
				return 0x0F;
				break;
			case 'B':
				return 0x09;
				break;
			case 'R':
				return 0x0C;
				break;
			case 'G':
				return 0x0A;
				break;
			case 'C':
				return 0x0B;
				break;
			case 'Y':
				return 0x0E;
				break;
			case 'D':
				return 0x08;
				break;
			case '.':
			default:
				return 0x00;
				break;
		}
	}

	void SetTerminalBackColor(char color_code) {
		SetTerminalColor(TranslateColorCodeToColorNumber(color_code) << 4);
	}

	void SetTerminalColors(char color_code_f, char color_code_b) {
		SetTerminalColor((TranslateColorCodeToColorNumber(color_code_b) << 4) | TranslateColorCodeToColorNumber(color_code_f));
	}
} // namespace terminal