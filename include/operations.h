#pragma once

#include "data.h"

namespace lab {

void transformLine(TextLine* line, char (*transform)(char));

} // namespace lab
