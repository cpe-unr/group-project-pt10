#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include "AudioProcessor.h"
#include "Header.h"

class Preprocessor : public AudioProcessor<int>
{
	/**
	 * @brief contains virtual and other functions to use in metadata extraction
	 * 
	 */
private:
    	Header header;
public:
	Preprocessor() = default;
    	Preprocessor(int);
    	void captureData(const std::string &fileName) override;
	int getBuffer() override;
    	Header getHeader() override;
   	Metadata getMetadata() override;
    	bool checkIfStereo();
    	int processBitrate();
    	void print() override;
};

#endif //PREPROCESSOR_H
