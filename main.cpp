#include <iostream>
#include <vector>
#include "Mono8Bit.h"
#include "Mono16Bit.h"
#include "Stereo8Bit.h"
#include "Stereo16Bit.h"
#include "Preprocessor.h"
#include "Wav.h"

using namespace std;

/**
 * \brief   The function bar.
 *
 * \details This function does something which is doing nothing. So this text
 *          is totally senseless and you really do not need to read this,
 *          because this text is basically saying nothing.
 *
 * \note    This text shall only show you, how such a \"note\" section
 *          is looking. There is nothing which really needs your notice,
 *          so you do not really need to read this section.
 *
 * \param[in]     a    Description of parameter a.
 * \param[out]    b    Description of the parameter b.
 * \param[in,out] c    Description of the parameter c.
 *
 * \return        The error return code of the function.
 *
 * \retval        ERR_SUCCESS    The function is successfully executed
 * \retval        ERR_FAILURE    An error occurred
 */
void fn(){

}

int main() {
	Preprocessor *preprocessor = new Preprocessor();
    	AudioProcessor<unsigned char*> *eightBitone = new Mono8Bit();
    	AudioProcessor<short*> *sixteenBitone = new Mono16Bit();
    	AudioProcessor<unsigned char*> *eightBitwo = new Stereo8Bit();
    	AudioProcessor<short*> *sixteenBitwo = new Stereo16Bit();
    	vector<Wav*> songs;
    	preprocessor->captureData("yes-8-bit-stereo.wav");
    	int bitRate = preprocessor->processBitrate();
    	switch (bitRate)
    	{
    	case 1:
       		if (preprocessor->checkIfStereo())
        	{
            		eightBitwo->captureData("yes-8-bit-stereo.wav");
            		eightBitwo->print();
	            	songs.push_back(new Wav(eightBitwo->getBuffer(),eightBitwo->getHeader(),eightBitwo->getMetadata()));
        	}
        	else
        	{
        	    	eightBitone->captureData("yes-8-bit-mono.wav");
	            	eightBitone->print();
        	    	songs.push_back(new Wav(eightBitone->getBuffer(),eightBitone->getHeader(),eightBitone->getMetadata()));
        	}      
        break;
    	case 2:
        	if (preprocessor->checkIfStereo())
        	{
	            	sixteenBitone->captureData("yes-16-bit-stereo.wav");
        	    	sixteenBitone->print();
            		songs.push_back(new Wav(sixteenBitwo->getBuffer(),sixteenBitwo->getHeader(),sixteenBitwo->getMetadata()));
        	}
        	else
        	{
	            	sixteenBitwo->captureData("yes-16-bit-mono.wav");
        	    	sixteenBitwo->print();
            		songs.push_back(new Wav(sixteenBitone->getBuffer(),sixteenBitone->getHeader(),sixteenBitone->getMetadata()));
        	}
        break;
    default:
        break;
    }

    return 0;
}

