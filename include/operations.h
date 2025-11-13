#pragma once

#include "data.h"

namespace lab {

	void transformLine(TextLine* line, char (*transform)(char));

	char toUpper(char c);
	char rot13(char c);

	int countChars(const TextLine* line, bool (*condition)(char));

} // namespace lab
