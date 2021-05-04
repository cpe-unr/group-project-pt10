#ifndef STEREO8BIT_H
#define STEREO8BIT_H

#include "AudioProcessor.h"

class Stereo8Bit : public AudioProcessor<unsigned char*>
{
	/**
	 * @brief functions for stero 8 bit data handling, override from AudioProcessor.h
	 * 
	 */
private:
    unsigned char* buffer;
    
public:
	Stereo8Bit() = default;
    	Stereo8Bit(int);
    	void captureData(const std::string &fileName) override;
    	unsigned char* getBuffer() override;
    	Header getHeader() override;
    	Metadata getMetadata() override;
    	void print() override;
};

#endif // STEREO8BIT_H
