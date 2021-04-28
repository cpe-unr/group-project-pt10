#include <iostream>
#include "Mono8BitManager.h"

using namespace std;

Mono8BitManager::Mono8BitManager(/* arguments */)
{

}

void Mono8BitManager::captureData(const std::string &fileName) {
    	ifstream file(fileName,binary | in);
    	char* file_content;
    	if(file.is_open()){
        	file.read((char*)&wavheader, sizeof(WavHeader));
        
    	}
}
//Extracting Information
void Mono8BitManager::print(){
    	cout << wavheader.riff_header << endl;
   	cout << wavheader.wav_size << endl;
   	cout << wavheader.fmt_header << endl;
   	cout << wavheader.fmt_chunk_size << endl;
    	cout << wavheader.audio_format << endl;
    	cout << wavheader.num_channels << endl;
}

