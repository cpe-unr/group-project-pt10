#ifndef MONO8BITMANAGER_H
#define MONO8BITMANAGER_H

#include <fstream>
#include <iostream>
#include "Wav.h"

class Mono8BitManager : public Wav {

private:
    	unsigned char* buffer;
public:
	Mono8BitManager() = default;
    	Mono8BitManager(/* arguments */);
    	void captureData(const std::string &fileName) override;
    	void print() override;
};

#endif // MONO8BITMANAGER_H

