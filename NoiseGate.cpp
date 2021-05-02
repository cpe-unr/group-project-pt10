/*
        Programing Assignment 3
        Jose A. Cano Perez
        Keith Lancaster
        CS 202 Section 1001
        23 March 2021
*/

#include <iostream>
#include "NoiseGate.h"

using namespace std;

NoiseGate::NoiseGate(float threshold)
{
    NoiseGate::threshold = threshold / 100.;
}

void NoiseGate::processBuffer(unsigned char* buffer, int bufferSize)
{
    int upperBound = NoiseGate::threshold * 255;
    int lowerBound = upperBound - 130;

    for (int j = 0; j < bufferSize; j++)
    {
        if ((int)buffer[j] <= upperBound && (int)buffer[j] >= lowerBound)
        {
            buffer[j] = 130;
        }       
    }   
}

