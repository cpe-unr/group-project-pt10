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
    virtual void captureData(const std::string &fileName) = 0;
    virtual T getBuffer() = 0;
    virtual Header getHeader() = 0;
    virtual Metadata getMetadata() = 0;
    virtual void print() = 0;
};


#endif // AUDIOPROCESSOR_H
