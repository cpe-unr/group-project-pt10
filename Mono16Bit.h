#ifndef MONO16BIT_H
#define MONO16BIT_H

#include "AudioProcessor.h"


class Mono16Bit : public AudioProcessor<short*>
{
private:
    short* buffer;
public:
	Mono16Bit() = default;
    	Mono16Bit(/* args */);
	void captureData(const std::string &fileName) override;
    	short* getBuffer() override;
    	Header getHeader() override;
    	Metadata getMetadata() override;
    	void print() override;
};

#endif // MONO16BIT_H
