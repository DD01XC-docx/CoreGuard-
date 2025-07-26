#pragma once
#include <string>
#include <vector>

class Scanner {
public:
	Scanner(const std::vector <std:string>& known_signatures);
	bool isMalicious(const std::string& file_path);

private:
	std::vector<std::string> signatures;

	// SHA256 hash of the file
	std::string hashFile(const std::string& file_path);
};
