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
    	AudioProcessor<unsigned char*> *8Bitone = new Mono8Bit();
    	AudioProcessor<short*> *16Bitone = new Mono16Bit();
    	AudioProcessor<unsigned char*> *8Bitwo = new Stereo8Bit();
    	AudioProcessor<short*> *16Bitwo = new Stereo16Bit();
    	vector<Wav*> songs;
    	preprocessor->captureData("yes-8-bit-stereo.wav");
    	int bitRate = preprocessor->processBitrate();
    	switch (bitRate)
    	{
    	case 1:
       		if (preprocessor->checkIfStereo())
        	{
            		8Bitwo->captureData("yes-8-bit-stereo.wav");
            		8Bitwo->print();
	            	songs.push_back(new Wav(8Bitwo->getBuffer(),8Bitwo->getHeader(),8Bitwo->getMetadata()));
        	}
        	else
        	{
        	    	8Bitone->captureData("yes-8-bit-mono.wav");
	            	8Bitone->print();
        	    	songs.push_back(new Wav(8Bitone->getBuffer(),8Bitone->getHeader(),8Bitone->getMetadata()));
        	}      
        break;
    	case 2:
        	if (preprocessor->checkIfStereo())
        	{
	            	16Bitone->captureData("yes-16-bit-stereo.wav");
        	    	16Bitone->print();
            		songs.push_back(new Wav(16Bitwo->getBuffer(),16Bitwo->getHeader(),16Bitwo->getMetadata()));
        	}
        	else
        	{
	            	16Bitwo->captureData("yes-16-bit-mono.wav");
        	    	16Bitwo->print();
            		songs.push_back(new Wav(16Bitone->getBuffer(),16Bitone->getHeader(),16Bitone->getMetadata()));
        	}
        break;
    default:
        break;
    }

    return 0;
}

