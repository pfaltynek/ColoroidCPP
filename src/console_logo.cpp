#include "console_logo.h"
#include "term_info.h"

// const char* ConsoleLogo::_logo[] = {
/*
const std::vector<std::string> ConsoleLogo::_logo{// . = backround
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
const static std::string _compressed_logo = "79.|2.9W22.25W58.61W68.71W71.|2.2W7B7W20.20W21G21W54.54W55Y5"
											"5W62.62W63D63W63.|.2W7B9W20.20W21G21W54.54W55Y55W62.62W63D63"
											"W63.|.W1B6W7B7W18.18W19G19W52.55W62.62W63D63W63.|.W1B1W4.4W5"
											"B5W6.13W14.14W15G15W16.23W24.33W34.41W42.45W46.52W53D53W53.|"
											".W1B1W4.7W8.8W13R13W14.14W15G15W16.16W21R21W22.22W23C24W27C2"
											"7W28.28W33R33W34.34W35Y35W36.36W43D43W43.|.W1B1W8.10W15R18W1"
											"9G22W27R30W31C32W35C38W43R46W47Y50W57D57W57.|.W1B1W8.8W9R14W"
											"15R16W17G18W19R24W25R26W29C34W35R40W41R42W43Y44W45D50W51D51W"
											"51.|.W1B1W8.8W9R9W12.12W13R14W15G16W17R17W20.20W21R22W25C25W"
											"28.28W29R29W32.32W33R34W35Y36W37D37W40.40W41D41W41.|.W1B1W8."
											"8W9R9W12.12W13R14W15G16W17R17W20.20W21R22W23C25W28.28W29R29W"
											"32.32W33R34W35Y36W37D37W40.40W41D41W41.|.W1B1W4.8W9R9W12.12W"
											"13R14W15G16W17R17W20.20W21R22W23C23W28.28W29R29W32.32W33R34W"
											"35Y36W37D37W40.40W41D41W41.|.W1B1W4.4W5B6W7R7W10.10W11R12W13"
											"G14W15R15W18.18W19R20W21C21W26.26W27R27W30.30W31R32W33Y34W35"
											"D35W38.38W39D39W39.|.W1B6W7B8W9R14W15R16W17G18W19R24W25R26W2"
											"7C27W32.32W33R38W39R40W41Y42W43D48W49D49W49.|.2W7B12W17R20W2"
											"1G24W29R32W33C33W38.40W45R48W49Y52W59D59W59.|2.2W7B7W10.10W1"
											"5R15W16.16W17G17W18.18W23R23W24.24W25C25W32.32W37R37W38.38W3"
											"9Y39W40.40W47D47W47.|2.9W12.19W20.23W24.31W32.35W42.49W50.53"
											"W54.63W63.|79.|";

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
	int cnt;
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