#include <cstdlib>
#include <iostream>

#include "data.h"
#include "operations.h"

int main(int argc, char *argv[]) {
	auto line = lab::createLine("7th_lab");
	lab::transformLine(line, lab::rot13);
	std::cout << line->content << std::endl;
	lab::deleteLine(line);
	return EXIT_SUCCESS;
}
