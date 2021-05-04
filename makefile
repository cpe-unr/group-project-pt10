output: Main.o Preprocessor.o Mono8Bit.o Mono16Bit.o Stereo8Bit.o Stereo16Bit.o
	g++ -std=c++11 -o output Main.o Preprocessor.o Mono8Bit.o

Wav.o: Wav.cpp Wav.h Header.h
	g++ -std=c++11 -c Wav.cpp Header.h

Main.o: main.cpp Preprocessor.h
	g++ -std=c++11 -c main.cpp

Preprocessor.o: Preprocessor.cpp Preprocessor.h AudioProcessor.h  Header.h
	g++ -std=c++11 -c Preprocessor.cpp

Mono8Bit.o: Mono8Bit.cpp Mono8Bit.h AudioProcessor.h
	g++ -std=c++11 -c Mono8Bit.cpp

Mono16Bit.o: Mono16Bit.cpp Mono16Bit.h AudioProcessor.h
	g++ -std=c++11 -c Mono16Bit.cpp

Stereo8Bit.o: Stereo8Bit.cpp Stereo8Bit.h AudioProcessor.h
	g++ -std=c++11 -c Stereo8Bit.cpp

Stereo16Bit.o: Stereo16Bit.cpp Stereo16Bit.h AudioProcessor.h
	g++ -std=c++11 -c Stereo16Bit.cpp

Echo.o: Echo.cpp Echo.h
	g++ -std=c++11 -c Echo.cpp

NoiseGate.0: NoiseGate.cpp NoiseGate.h
	g++ -std=c++11 -c NoiseGate.cpp

Normalization.o: Normalization.cpp Normalization.h
	g++ -std=c++11 -c Normalization.cpp

clean:
	rm output *.o
