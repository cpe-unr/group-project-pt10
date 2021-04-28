#ifndef MANAGER_H
#define MANAGER_H

#include "Wav.h"
#include "WavHeader.h"

class Manager : Wav
{
private:
    	WaveHeader waveheader;
public:
	Manager() = default;
    	Manager(/* args */);
    	void captureData(const std::string &fileName) override;
    	bool processChannels();
    	int processBitrate();
};

#endif //MANAGER_H
