#pragma once
#include <string>
#include <vector>
class ApriltagGenerator {

public:
	ApriltagGenerator();
	~ApriltagGenerator();
	bool isBackgroundApplied;
	bool isBackgroundLoaded;
	int tagLength;
	int imageSize;
	std::string backgroundFileName;
	std::string outputFilePath;
	std::string outputFileName;
	std::vector<double> rotationAngles;
};

