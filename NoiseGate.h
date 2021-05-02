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
    	float threshold;
public:
	NoiseGate() = default;
    	NoiseGate(float threshold);
    
    	void processBuffer(unsigned char* buffer, int bufferSize) override;
};

#endif

