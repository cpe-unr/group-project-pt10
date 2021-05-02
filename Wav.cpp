#include "Wav.h"

Wav::Wav(unsigned char* buffer, Header header, Metadata metadata)
{
	if (header.num_channels == 2)
    	{		
        	Wav::isStereo = true;
    	}
    	Wav::header = header;
    	Wav::8Buffer = buffer;
    	Wav::metadata = metadata;       
}

Wav::Wav(short* buffer, Header header, Metadata metadata)
{
    	if (header.num_channels == 2)
    	{
        	Wav::isStereo = true;
    	}
   	Wav::is16Bit = true;
    	Wav::header = header;
    	Wav::16Buffer = buffer;
    	Wav::metadata = metadata;
}
