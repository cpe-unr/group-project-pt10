/*
        Programing Assignment 3
        Jose A. Cano Perez
        Keith Lancaster
        CS 202 Section 1001
        23 March 2021
*/

#ifndef ECHO_H
#define ECHO_H

#include "Processor.h"

/**
 * 
 * @param delay for wavfile echo processing
 * Echo default is default constructor
 * function procebuffer used to add echo effect
 * 
 */

class Echo : public Processor
{
	int delay;
public:
	Echo() = default;
	Echo(int);
    	void processBuffer(unsigned char* buffer, int bufferSize) override;
};

#endif
