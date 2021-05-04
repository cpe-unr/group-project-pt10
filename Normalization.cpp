#include "normal.h"
#include "Wav.h"

/**
 * @brief void processBuffer to normalize file
 * 
 * @param buffer char pointer to buffer 
 * @param bufferSize size of buffer to use in for loop
 */


void Normal::processBuffer(unsigned char* buffer, int bufferSize){

float maxSize =0;
float normalProp;




for(int i =0;i < bufferSize;i++){

	if( buffer[i] > maxSize){
        if(buffer[i] == 128){
            continue;
        }
    else {
	maxSize = buffer[i];
    }
    	

	}

normalProp = 127/maxSize;

for(int i =0;i < bufferSize;i++){
    buffer[i] =  buffer[i] * normalProp;
}



}
