#ifndef STEREO16BIT_H
#define STEREO16BIT_H

#include "AudioProcessor.h"

class Stereo16Bit : public AudioProcessor<short*>
{
private:
    short* buffer;
public:
	Stereo16Bit() = default;
    	Stereo16Bit(int);
    	void captureData(const std::string &fileName) override;
    	short* getBuffer() override;
    	Header getHeader() override;
    	Metadata getMetadata() override;
    	void print() override;
};

#endif // STEREO16BIT_H
