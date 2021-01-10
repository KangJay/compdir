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
  cout <<bit;
  return 0; 
}

int BitWriter::putByte(unsigned char byte) {
  cout << byte;
  return 0; 
}

void BitWriter::flush() {

}