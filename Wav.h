#ifndef WAV_H
#define WAV_H

#include "Header.h"
#include "Metadata.h"

class Wav {

private:
	Header header;
	unsigned char* eightBuffer;
    	short* sixteenBuffer;
    	bool isStereo = false;
    	bool is16Bit = false;
    	Metadata metadata;
    
public:
	Wav() = default;
    	Wav(unsigned char* buffer, Header header, Metadata metadata);
    	Wav(short* buffer, Header header, Metadata metadata);
};

#endif //WAV_H
