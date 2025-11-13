#include "operations.h"
#include "data.h"

#include <cctype>
#include <cstddef>

namespace lab {

void transformLine(TextLine *line, char (*transform)(char)) {
  if (line == nullptr || line->content == nullptr || transform == nullptr)
    return;
  for (std::size_t i = 0; i < line->length; ++i) {
    line->content[i] = transform(line->content[i]);
  }
}

char toUpper(char c) { return std::toupper(c); }

char rot13(char c) {
  if (c >= 'A' && c <= 'Z') {
    return static_cast<char>(((c - 'A' + 13) % 26) + 'A');
  }
  if (c >= 'a' && c <= 'z') {
    return static_cast<char>(((c - 'a' + 13) % 26) + 'a');
  }
  return c;
}

} // namespace lab
