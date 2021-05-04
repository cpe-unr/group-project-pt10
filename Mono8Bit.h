#ifndef MONO8BIT_H
#define MONO8BIT_H

#include "AudioProcessor.h"

class Mono8Bit : public AudioProcessor<unsigned char*>
{
private:
    	unsigned char* buffer;
public:
	Mono8Bit() = default;
    	Mono8Bit(int);
    	void captureData(const std::string &fileName) override;
    	unsigned char* getBuffer() override;
	Header getHeader() override;
	Metadata getMetadata() override;
	void print() override;
};

#endif // MONO8BIT_H

