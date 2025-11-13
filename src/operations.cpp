#include "operations.h"
#include "data.h"

#include <cstring>

namespace lab {

TextLine* createLine(const char* str) {
	if (str == nullptr)	return nullptr;
	size_t length = std::strlen(str);
	char* buffer = new char[length + 1];
	std::strcpy(buffer, str);
	TextLine* line = new TextLine;
	line->length = static_cast<int>(length);
	line->content = buffer;
	return line;
} 

void deleteLine(TextLine* line) {
	delete[] line->content;
	delete line;
}

} // namespace lab
