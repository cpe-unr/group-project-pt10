#include "Mono8Bit.h"
/**
 * @brief default constructor for mono 8 bit files
 *
 */

Mono8Bit::Mono8Bit(int)
{

}

/**
 * @brief function to capture data for mono 8 bit files
 * 
 * @param fileName - pointer of filename 
 */

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

/**
 * @brief function to get  buffer for mono 8 bit files
 * 
 */
unsigned char* Mono8Bit::getBuffer()
{
    	return Mono8Bit::buffer;
}

/**
 * @brief function to get header for mono 8 bit files
 * 
 */

Header Mono8Bit::getHeader()
{
    	return Mono8Bit::header;
}

/**
 * @brief function to get metadata for mono 8 bit files
 * 
 */

Metadata Mono8Bit::getMetadata()
{
	return Mono8Bit::metadata;
}
/**
 * @brief function to print info for mono 8 bit files
 * 
 */
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

