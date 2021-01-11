#include "FrequencyTable.h"
#include <cstddef>

using namespace std; 

FrequencyTable::FrequencyTable(string filename) { 
  ifstream file(filename, ios::binary); 
  char input;
  unsigned char index; 
  while(file.get(input)) {
    char_freqs[(unsigned char)input]++;
    totalBytes++; 
  }
  file.close();
}