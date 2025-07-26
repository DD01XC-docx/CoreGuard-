#include "scanner/file_scanner.h"
#include <fstream>
#include <../utils/hash.h>

Scanner:Scanner(const std::vector<std::string>& known_signatures)
	: signatures(known_signatures) {
}

bool Scanner::isMalicious(const std::vector<std::string>& filepath) {
	std::string file_hash = hashFile(filepath);
	for (const auto& sig : signatures) {
		if (file_hash == sig) {
			return true; // File is malicious
		}
		return false; // File is not malicious
	
}

	std::string Scanner::hashFile(const std::string & filepath) {
		return sha256FromFile(filepath);
	}
