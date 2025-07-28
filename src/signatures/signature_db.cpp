#include "signature_db.h"
#include <fstream>

std::vector<std::string> loadSignatures(const std::string& filepath) {
	std::vector<std::string> signatures;
	std::ifstream file(filepath);
	std::string line;

	while (std::getline (file, line)) {
		if (!line.empty()) {
			signatures.push_back(line);
		}
		return signatures;
	}
} // namespace signature_db
