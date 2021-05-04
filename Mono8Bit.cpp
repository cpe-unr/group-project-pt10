#include "Mono8Bit.h"

Mono8Bit::Mono8Bit(int)
{

}

void Mono8Bit::captureData(const std::string &fileName) {
    	std::ifstream file(fileName,std::ios::binary | std::ios::in);
    	char* file_content;
    	if(file.is_open()){
        	file.read((char*)&header, sizeof(Header));
		Mono8Bit::buffer = new unsigned char[header.data_bytes];
        	file.read((char*)buffer, header.data_bytes);
        	file.read((char*)&metadata, sizeof(Metadata));
    	}
}

unsigned char* Mono8Bit::getBuffer()
{
    	return Mono8Bit::buffer;
}

Header Mono8Bit::getHeader()
{
    	return Mono8Bit::header;
}

Metadata Mono8Bit::getMetadata()
{
	return Mono8Bit::metadata;
}

void Mono8Bit::print(){
	std::cout << header.riff_header << std::endl;
    	std::cout << header.wav_size << std::endl;
    	std::cout << header.fmt_header << std::endl;
    	std::cout << header.fmt_chunk_size << std::endl;
    	std::cout << header.audio_format << std::endl;
    	std::cout << header.num_channels << std::endl;
    	std::cout << header.byte_rate << std::endl;
    	std::cout << header.sample_rate << std::endl;
    	std::cout << metadata.list_header << std::endl;
    	std::cout << metadata.meta_size << std::endl;
    	std::cout << metadata.info_header << std::endl;
    	std::cout << metadata.meta_sub1 << std::endl;
    	std::cout << metadata.sub1_characters << std::endl;
    	std::cout << metadata.sub1_data << std::endl;

    	for (size_t i = 0; i < 44100; i++)
    	{
        	std::cout << (int)buffer[i] << std::endl;
    	}
}
