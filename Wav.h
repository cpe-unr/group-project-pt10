#ifndef WAV_H
#define WAV_H

#include <string>
#include "WavHeader.h"

class Wav {

protected:
	WavHeader wavheader;

public:
	virtual void(const std::string &fileName)=0
	virtual void print() = 0;
};


#endif //WAV_H
