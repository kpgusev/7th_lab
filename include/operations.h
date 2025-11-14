#pragma once

#include "data.h"

namespace lab {

	void transformLine(TextLine* line, char (*transform)(char));

	char toUpper(char c);
	char rot13(char c);

	int countChars(const TextLine* line, bool (*condition)(char));
	void replaceChars(TextLine* line, bool (*condition)(char), char replacement);
	bool isVowel(char c);
	bool isDigit(char c);

} // namespace lab
