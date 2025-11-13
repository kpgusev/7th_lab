#include <cstdlib>
#include <iostream>

#include "data.h"
#include "operations.h"

int main(int argc, char *argv[]) {
	lab::TextLine* line = lab::createLine("7th_lab");
	std::cout << line->content << std::endl;
	lab::deleteLine(line);
	return EXIT_SUCCESS;
}
