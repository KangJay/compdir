#pragma once
#include <fstream> 

class BitWriter{
public: 
  BitWriter() : byte(0), count(0) {} // Never used. To satisfy the compiler 
  BitWriter(std::ofstream* outputFile) : byte(0), huffFile(outputFile), count(0) {}
  int putBit(unsigned int bit); 
  int putByte(unsigned char byte); 
  void flush();

private: 
  unsigned char byte; 
  std::ofstream* huffFile; 
  int count; 
};