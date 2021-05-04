#include "Stereo16Bit.h"
/**
 * @brief default constructor for stereo 16 bit files
 *
 */
Stereo16Bit::Stereo16Bit(int)
{
}

/**
 * @brief function to capture data for stereo 16 bit files
 * 
 * @param fileName - pointer of filename 
 */

void Stereo16Bit::captureData(const std::string &fileName) {
    std::ifstream file(fileName,std::ios::binary | std::ios::in);
    if(file.is_open()){
        file.read((char*)&header, sizeof(Header));
        Stereo16Bit::buffer = new short[header.data_bytes];
        file.read((char*)buffer, header.data_bytes);
        file.read((char*)&metadata, sizeof(Metadata));
    }
}


/**
 * @brief function to get  buffer for stereo 16 bit files
 * 
 */

short* Stereo16Bit::getBuffer()
{
    return Stereo16Bit::buffer;
}

/**
 * @brief function to get header for stereo 16 bit files
 * 
 */

Header Stereo16Bit::getHeader()
{
    return Stereo16Bit::header;
}

/**
 * @brief function to get metadata for stereo 16 bit files
 * 
 */

Metadata Stereo16Bit::getMetadata()
{
    return Stereo16Bit::metadata;
}

/**
 * @brief function to print info for stereo 16 bit files
 * 
 */

void Stereo16Bit::print(){
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
}
