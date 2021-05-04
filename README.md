# CS 202 Semester Project Front Page

**Group Members & Responsibilities :**

Jefrin Jojan - Processing Files including normalization, noise gate and echo

Jose A. Cano Perez - File IO and Metadata extraction

Ian Pettersen - Documentation(UML Diagram and Doxygen)

**Design**

![image](https://user-images.githubusercontent.com/68476473/117068301-f7340c80-acdf-11eb-8a02-c8a453ba7c23.png)


The program begins with the preprocessor class and then depending on the file bit size and mono versus stereo switches between the subclasses to read in the needed metadata. Each class inherits the header, buffer and metadata from the preprocessor class.Then the user has the option to choose which modifications they want to make to the audio files. The AudioProcessor.h file acts as a template with functions that are overridden and used by each of the subtype processor classes which are called Normal, NoiseGate and Echo. Each of these 3 has an inheritance relationship with AudioProcessor as well. 

**Challenges**

One major challenge we encountered was handling the file IO portion of the code. To handle the differences between stereo and mono alongside different bit sizes proved daunting. We used recasting and templates to help overcome this problem. We also faced issues with correctly making use of doxygen as it was not working in VSC and github pages as restricted. Thus we installed doxygen on Linux which was easier to use. 




