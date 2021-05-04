/*
        Programing Assignment 3
        Jose A. Cano Perez
        Keith Lancaster
        CS 202 Section 1001
        23 March 2021
*/

#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "Processor.h"

class NoiseGate : public Processor
{
/**
 * NoiseGate default constructor and paramterized consturctor
 * @param buffer for wavfile  processing
 * @param bufferSize size of wavfile for normalization function
 * 
 */
    	float threshold;
public:
	NoiseGate() = default;
    	NoiseGate(float threshold);
    
    	void processBuffer(unsigned char* buffer, int bufferSize) override;
};

#endif

