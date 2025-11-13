#include <cstdlib>
#include <iostream>

#include "data.h"
#include "operations.h"

bool isDigit(char c) {
	if (isdigit(c)) return true;
	return false;
}

int main(int argc, char *argv[]) {
	auto line = lab::createLine("7th_lab");
	int x = lab::countChars(line, isDigit());
	std::cout << line->content << std::endl;
	std::cout << x << std::endl;
	lab::deleteLine(line);
	return EXIT_SUCCESS;
}
