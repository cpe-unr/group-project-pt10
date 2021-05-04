/*
        Programing Assignment 3
        Jose A. Cano Perez
        Keith Lancaster
        CS 202 Section 1001
        23 March 2021
*/

#include <iostream>
#include "Echo.h"

using namespace std;

Echo::Echo(int delay)
{
    Echo::delay = delay;
}

/**
 * @brief void Echo to add echo effect
 * 
 * @param buffer char pointer to buffer 
 * @param bufferSize size of buffer to use in for loop
 */

void Echo::processBuffer(unsigned char* buffer, int bufferSize)
{
    uintmax_t sample[bufferSize]; //unsigned integral max bits.
    uintmax_t delayed[bufferSize];

    for (int j = 0; j < bufferSize; j++)
    {
        sample[j] = buffer[j];
        if (j >= Echo::delay + (-1))
        {
           delayed[j] = buffer[j - Echo::delay - 1] * 0.5;
        }
    }
    for (int j = Echo::delay - 1; j < bufferSize; j++)
    {
        buffer[j] = sample[j] + delayed[j];
    }
    
}

