#pragma once

#include "data.h"

namespace lab {

void transformLine(TextLine* line, char (*transform)(char));

char toUpper(char c);
char rot13(char c);

} // namespace lab
