#include "Preprocessor.h"

Preprocessor::Preprocessor(/* arguments */)
{

}

void Preprocessor::captureData(const std::string &fileName) {
    	std::ifstream file(fileName,std::ios::binary | std::ios::in);
    	if(file.is_open()){
        	file.read((char*)&header, sizeof(Header));        
    	}   
}

bool Preprocessor::checkIfStereo()
{
    	if (header.num_channels == 2)
    	{
        	return true;
    	}
    	else return false;
}

int Preprocessor::processBitrate()
{
    	return ((header.byte_rate / header.num_channels) / header.sample_rate) * 8;
}

int Preprocessor::getBuffer()
{
    	return 0;
}

Header Preprocessor::getHeader()
{
    	return Preprocessor::header;
}

Metadata Preprocessor::getMetadata()
{
    	return Preprocessor::metadata;
}

void Preprocessor::print() {

}
