#include "normal.h"
#include "Wav.h"


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
