#pragma once

namespace lab {

struct TextLine {
	char* content;
	int length;
};

TextLine* createLine(const char* str); 
void deleteLine(TextLine* line);

} // namespace lab
