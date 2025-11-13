#include "operations.h"
#include "data.h"

#include <cstddef>

namespace lab {

void transformLine(TextLine *line, char (*transform)(char)) {
  if (line == nullptr || line->content == nullptr || transform == nullptr)
    return;
  for (std::size_t i = 0; i < line->length; ++i) {
    line->content[i] = transform(line->content[i]);
  }
}

} // namespace lab
