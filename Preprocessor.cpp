#include "Preprocessor.h"

/**
 * constructor take input
 * 
 */
Preprocessor::Preprocessor(int)
{

}

/**
 * function to captureData
 * @param const filename pointer 
 * 
 */

void Preprocessor::captureData(const std::string &fileName) {
    	std::ifstream file(fileName,std::ios::binary | std::ios::in);
    	if(file.is_open()){
        	file.read((char*)&header, sizeof(Header));        
    	}   
}

/**
 * function to ccheck if Stereo
 * 
 */
bool Preprocessor::checkIfStereo()
{
    	if (header.num_channels == 2)
    	{
        	return true;
    	}
    	else return false;
}

/**
 * function to processs Bitrate
 * 
 */
int Preprocessor::processBitrate()
{
    	return ((header.byte_rate / header.num_channels) / header.sample_rate) * 8;
}

/**
 * function for getting Buffer
 * 
 */

int Preprocessor::getBuffer()
{
    	return 0;
}

/**
 * function to get header
 * 
 */
Header Preprocessor::getHeader()
{
    	return Preprocessor::header;
}
/**
 * function to get Metadata
 * 
 */
Metadata Preprocessor::getMetadata()
{
    	return Preprocessor::metadata;
}

/**
 * function to print info
 * 
 */
void Preprocessor::print() {

}
