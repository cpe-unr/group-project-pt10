#include "Wav.h"

Wav::Wav(unsigned char* buffer, Header header, Metadata metadata)
{
	if (header.num_channels == 2)
    	{		
        	Wav::stereo = true;
    	}
    	Wav::header = header;
    	Wav::eightBuffer = buffer;
    	Wav::metadata = metadata;       
}

Wav::Wav(short* buffer, Header header, Metadata metadata)
{
    	if (header.num_channels == 2)
    	{
        	Wav::stereo = true;
    	}
   	Wav::sixteenBit = true;
    	Wav::header = header;
    	Wav::sixteenBuffer = buffer;
    	Wav::metadata = metadata;
}
