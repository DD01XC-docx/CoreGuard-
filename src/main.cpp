#include "src/scanner/file_scanner.h"
#include "src/signatures/signature_db.h"
#include <iostream>

int main() {
	std::vector<std::strin> db = loadSignatures("data/signatures.txt");

	Scanner  scanner(db);
	std::string file = "test.txt"; // Replace with the actual file path

	if (scanner.isMalicious(file)) {
		std::cout << "Malicious file detected: " << file << std::endl;
	}
	else {
		std::cout << "The file is safe.\n" << std::endl;
	}
	return 0;
}
