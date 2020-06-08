#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int countCharacters(std::vector<std::string>& words, std::string chars);
int main() {
	std::string S = "atbach";
	std::vector<std::string> W { "cat","bt","hat","tree" };
	std::cout << countCharacters(W, S) << std::endl;
	return 0;
}
int countCharacters(std::vector<std::string>& words, std::string chars) {
	int ptr = 0;
	for (auto w : words) {
		std::string tmpsCH = chars;
		int tmpWSIZE = w.size(), tmpptr = 0;
		for (char ptrW : w) {
			if (find(tmpsCH.begin(), tmpsCH.end(), ptrW) != tmpsCH.end()) {
				tmpptr++;
				tmpsCH.erase(tmpsCH.find(ptrW), 1);
			}
		}
		if (tmpptr == tmpWSIZE) {
			ptr += tmpptr;
		}
		else {
			tmpptr = 0;
		}
	}

	return ptr;
}