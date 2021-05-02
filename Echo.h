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

class Echo : public Processor
{
	int delay;
public:
	Echo() = default;
	Echo(int delay);
    	void processBuffer(unsigned char* buffer, int bufferSize) override;
};

#endif
