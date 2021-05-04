#ifndef AUDIOPROCESSOR_H
#define AUDIOPROCESSOR_H

#include "Header.h"
#include "Metadata.h"
#include <string>
#include <fstream>
#include <iostream>

template <class T>
class AudioProcessor
{
protected:
    Header header;
    Metadata metadata;

public:
    /**
     * @brief Virtual Functions to be overided by each subtype processor class
     * 
     * @param captureData for metadata extraction
     * @param getBuffer acess auido file buffer
     * @param getHeader get header of wavfile
     * @param getMetadata gets metadata from file
     * @param print print info
     */
    virtual void captureData(const std::string &fileName) = 0;
    virtual T getBuffer() = 0;
    virtual Header getHeader() = 0;
    virtual Metadata getMetadata() = 0;
    virtual void print() = 0;
};


#endif // AUDIOPROCESSOR_H
