#include <cstdlib>
#include <iostream>

#include "data.h"
#include "operations.h"

int main(int argc, char *argv[]) {
	auto line = lab::createLine("7th_lab");
	int x = lab::countChars(line, isdigit());
	std::cout << line->content << std::endl;
	std::cout << x << std::endl;
	lab::deleteLine(line);
	return EXIT_SUCCESS;
}
