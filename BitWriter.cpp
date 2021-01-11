#include "BitWriter.h"
#include <iostream>

using namespace std; 
/*
BitWriter::BitWriter(std::ofstream* outputFile) {
  byte = 0; 
  huffFile = outputFile; 
  count = 0;
}*/
int BitWriter::putBit(unsigned int bit) {
  byte <<= 1; 
  if (bit == 1) {
    byte |= bit; 
  } // Else don't do anything. 
  
  if (++count == 8) { //Byte is currently full 
    count = 0; 
    putByte(byte);
  }
  return 0; 
}

int BitWriter::putByte(unsigned char byte) {
  huffFile->put(byte);
  return 0; 
}

void BitWriter::flush() {
  if (count > 0) {
    byte <<= (8 - count); 
    huffFile->put(byte); 
    count = 0;
  } // else do nothing
}