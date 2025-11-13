#include <cstdlib>
#include <iostream>

#include "data.h"
#include "operations.h"

char offset(char symbol) {
	return symbol + 1;
}

int main(int argc, char *argv[]) {
	auto line = lab::createLine("7th_lab");
	lab::transformLine(line, &offset);
	std::cout << line->content << std::endl;
	lab::deleteLine(line);
	return EXIT_SUCCESS;
}
