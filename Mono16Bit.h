#ifndef MONO16BIT_H
#define MONO16BIT_H

#include "AudioProcessor.h"


class Mono16Bit : public AudioProcessor<short*>
{
	/**
	 * @brief functions for mono 16 bit data handling, override from AudioProcessor.h
	 * 
	 */
private:
    short* buffer;
public:
	Mono16Bit() = default;
    	Mono16Bit(int);
	void captureData(const std::string &fileName) override;
    	short* getBuffer() override;
    	Header getHeader() override;
    	Metadata getMetadata() override;
    	void print() override;
};

#endif // MONO16BIT_H
