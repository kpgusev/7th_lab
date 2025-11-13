#include "operations.h"
#include "data.h"

#include <cctype>
#include <cstddef>

namespace lab {

	int countChars(const TextLine* line, bool(*condition)(char)) {
		if (line == nullptr || line->content == nullptr || condition == nullptr) return 0;
		int x = 0;
		for (int i = 0; i < line->length; i++) {
			if (condition(line->content[i])) x++;
		}
		return x;
	}

} // namespace lab
