#include "operations.h"
#include "data.h"

#include <cstring>

namespace lab {

TextLine* createLine(const char* str) {
	if (str == nullptr)	return nullptr;
	size_t length = std::strlen(str);
	char* buffer = new char[length + 1];
	std::strcpy(buffer, str);
	TextLine* textLine = new TextLine;
	textLine->length = static_cast<int>(length);
	textLine->content = buffer;
	return textLine;
} 

void deleteLine(TextLine* line) {
	delete[] line->content;
	delete line;
}

} // namespace lab
