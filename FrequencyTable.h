#pragma once
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <climits>

class FrequencyTable {
public:
  FrequencyTable(std::string filename); 
  unsigned int &operator[](int index) { return char_freqs[index]; }
  unsigned long long getTotalBytes() { return totalBytes; } //TODO: Format the size based on magnitude. Eg. Instead of 1600 B, print out ~1.5 MB instead. 
private:
  unsigned int char_freqs[UCHAR_MAX + 1] = {0}; // 256 possible characters with extended ASCII
  unsigned long long totalBytes; 
};