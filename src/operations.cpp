#include "operations.h"
#include "data.h"

#include <cstring>
#include <cctype>
#include <cstddef>

namespace lab {

	void transformLine(TextLine* line, char (*transform)(char)) {
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

	int countChars(const TextLine* line, bool(*condition)(char)) {
		if (line == nullptr || line->content == nullptr || condition == nullptr) return 0;
		int x = 0;
		for (int i = 0; i < line->length; i++) {
			if (condition(line->content[i])) x++;
		}
		return x;
	}

	void replaceChars(TextLine* line, bool(*condition)(char), char replacement) {
		if (line == nullptr || line->content == nullptr || condition == nullptr) return;
		for (int i = 0; i < line->length; i++) {
			if (condition(line->content[i])) line->content[i] = replacement;
		}
	}

	bool isVowel(char c) {
		const char* vowels = "aeiouAEIOU";
		for (int i = 0; i < std::strlen(vowels); i++) {
			if (c == vowels[i]) return true;
		}
		return false;
	}

	bool isDigit(char c) {
		if (isdigit(c)) return true;
		return false;
	}

} // namespace lab
