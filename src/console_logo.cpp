#include "console_logo.h"
#include "term_info.h"

// const char* ConsoleLogo::_logo[] = {
/*
std::vector<std::string> ConsoleLogo::_logo{// . = backround
											// W = White
											// B = Blue
											// R = Red
											// G = Green
											// C = Cyan
											// Y = Yellow
											// D = Dark Gray
											"................................................................................",
											"...WWWWWWWW..............WWWW..................................WWWW........WWWW.",
											"...WBBBBBBW..............WGGW..................................WYYW........WDDW.",
											".WWWBBBBBBWWW............WGGW..................................WYYW........WDDW.",
											".WBBWWWWWWBBW............WGGW..................................WWWW........WDDW.",
											".WBBW....WBBW..WWWWWWWW..WGGW..WWWWWWWW..WWWWWWWWWW..WWWWWWWW..WWWW..WWWWWWWDDW.",
											".WBBW....WWWW..WRRRRRRW..WGGW..WRRRRRRW..WCCWWCCCCW..WRRRRRRW..WYYW..WDDDDDDDDW.",
											".WBBW........WWWRRRRRRWWWWGGWWWWRRRRRRWWWWCCWWCCCCWWWWRRRRRRWWWWYYWWWWDDDDDDDDW.",
											".WBBW........WRRWWWWWWRRWWGGWWRRWWWWWWRRWWCCCCWWWWWWRRWWWWWWRRWWYYWWDDWWWWWWDDW.",
											".WBBW........WRRW....WRRWWGGWWRRW....WRRWWCCCCW....WRRW....WRRWWYYWWDDW....WDDW.",
											".WBBW........WRRW....WRRWWGGWWRRW....WRRWWCCWWW....WRRW....WRRWWYYWWDDW....WDDW.",
											".WBBW....WWWWWRRW....WRRWWGGWWRRW....WRRWWCCW......WRRW....WRRWWYYWWDDW....WDDW.",
											".WBBW....WBBWWRRW....WRRWWGGWWRRW....WRRWWCCW......WRRW....WRRWWYYWWDDW....WDDW.",
											".WBBWWWWWWBBWWRRWWWWWWRRWWGGWWRRWWWWWWRRWWCCW......WRRWWWWWWRRWWYYWWDDWWWWWWDDW.",
											".WWWBBBBBBWWWWWWRRRRRRWWWWGGWWWWRRRRRRWWWWCCW......WWWRRRRRRWWWWYYWWWWDDDDDDDDW.",
											"...WBBBBBBW....WRRRRRRW..WGGW..WRRRRRRW..WCCW........WRRRRRRW..WYYW..WDDDDDDDDW.",
											"...WWWWWWWW....WWWWWWWW..WWWW..WWWWWWWW..WWWW........WWWWWWWW..WWWW..WWWWWWWWWW.",
											"................................................................................"};
*/

const static std::string _compressed_logo = "|79.|2.7W13.3W33.3W7.3W.|2.W5BW13.W1GW33.W1YW7.W1DW.|.2W5B2W"
											"11.W1GW33.W1YW7.W1DW.|.W1B5W1BW11.W1GW33.3W7.W1DW.|.W1BW3.W1"
											"BW1.7W1.W1GW1.7W1.9W1.7W1.3W1.6W1DW.|.W1BW3.3W1.W5RW1.W1GW1."
											"W5RW1.W1C1W3CW1.W5RW1.W1YW1.W7DW.|.W1BW7.2W5R3W1G3W5R3W1C1W3"
											"C3W5R3W1Y3W7DW.|.W1BW7.W1R5W1R1W1G1W1R5W1R1W3C5W1R5W1R1W1Y1W"
											"1D5W1DW.|.W1BW7.W1RW3.W1R1W1G1W1RW3.W1R1W3CW3.W1RW3.W1R1W1Y1"
											"W1DW3.W1DW.|.W1BW7.W1RW3.W1R1W1G1W1RW3.W1R1W1C2W3.W1RW3.W1R1"
											"W1Y1W1DW3.W1DW.|.W1BW3.4W1RW3.W1R1W1G1W1RW3.W1R1W1CW5.W1RW3."
											"W1R1W1Y1W1DW3.W1DW.|.W1BW3.W1B1W1RW3.W1R1W1G1W1RW3.W1R1W1CW5"
											".W1RW3.W1R1W1Y1W1DW3.W1DW.|.W1B5W1B1W1R5W1R1W1G1W1R5W1R1W1CW"
											"5.W1R5W1R1W1Y1W1D5W1DW.|.2W5B5W5R3W1G3W5R3W1CW5.2W5R3W1Y3W7D"
											"W.|2.W5BW3.W5RW1.W1GW1.W5RW1.W1CW7.W5RW1.W1YW1.W7DW.|2.7W3.7"
											"W1.3W1.7W1.3W7.7W1.3W1.9W.|79.|";

void ConsoleLogo::print_uncompressed() {
	for (auto it = _logo.begin(); it != _logo.end(); it++) {
		std::cout << *it << std::endl;
	}
}

/*
void ConsoleLogo::compress() {
	std::cout << std::endl;

	for (auto it = _logo.begin(); it != _logo.end(); it++) {
		std::string line = *it;
		char prev_c;
		unsigned int idx = 0, cnt = 0;
		prev_c = 0;

		std::cout << "->";

		while (idx < line.size()) {
			if (line[idx] == prev_c) {
				cnt++;
			} else {
				if (prev_c) {
					if (cnt) {
						std::cout << cnt << prev_c;
						cnt = 0;
					} else {
						std::cout << prev_c;
					}
				}
				prev_c = line[idx];
			}
			idx++;
		}
		if (prev_c) {
			if (cnt) {
				std::cout << cnt << prev_c;
			} else {
				std::cout << prev_c;
			}
		}
		std::cout << std::endl;
	}
}*/

void ConsoleLogo::decompress() {
	int cnt, len;
	char c;
	std::string number, line;
	unsigned int idx = 0;

	number = "0";
	line.clear();

		while (idx < _compressed_logo.size()) {
			c = _compressed_logo[idx];
			switch (_compressed_logo[idx]) {
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					number += c;
					break;
				case '.':
				case 'B':
				case 'W':
				case 'R':
				case 'G':
				case 'C':
				case 'Y':
				case 'D':
					cnt = std::stoi(number);
					number = "0";
					line.append(std::string(cnt + 1, c));
					//for (int i = 0; i <= cnt; i++) {
					//	line += c;
					//}
					break;
				case '|':
					len = line.size();
					_logo.push_back(line);
					line.clear();
					break;
			}
			idx++;
		}
}

ConsoleLogo::ConsoleLogo() {
	_logo.clear();
	decompress();
}