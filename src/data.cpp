#include "data.h"

#include <cstring>

namespace lab {

TextLine* createLine(const char* str) {
	if (str == nullptr)	return nullptr;
	auto length = std::strlen(str);
	auto buffer = new char[length + 1];
	std::strcpy(buffer, str);
	auto line = new TextLine;
	line->length = static_cast<int>(length);
	line->content = buffer;
	return line;
} 

void deleteLine(TextLine* line) {
	delete[] line->content;
	delete line;
}

}
