#ifndef NORMAL_H
#define NORMAL_H

#include "Processor.h"

class Normal: public Processor {
/**
 * 
 * @param buffer for wavfile  processing
 * @param bufferSize size of wavfile for normalization function
 * 
 */

void processBuffer(unsigned char* buffer, int bufferSize);


};



#endif