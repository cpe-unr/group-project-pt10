#ifndef METADATA_H
#define METADATA_H

#include <string>
// For Wav Files
typedef struct Metadata
{
    // Meta header
    char list_header[4]; // Contains LIST
    int meta_size;
    char info_header[4]; // Contains INFO

    // Sub Chunk 1
    char meta_sub1[4];
    int sub1_characters;
    char sub1_data[50];
} Metadata;

#endif // METADATA_H
