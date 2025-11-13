#include <cstdlib>
#include <iostream>

#include "data.h"
#include "operations.h"

int main(int argc, char *argv[]) {
	lab::TextLine* textLine = lab::createLine("7th_lab");
	std::cout << textLine->content << std::endl;
	lab::deleteLine(textLine);
	return EXIT_SUCCESS;
}
