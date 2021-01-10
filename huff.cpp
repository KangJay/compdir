#include <iostream> 
#include <stdlib.h> 
#include "FrequencyTable.h"

using namespace std; 

int main(int argc, char* argv[]) {
  if (argc != 1) {
    cerr << "Invalid argument. Usage: huff <filename>" << endl; 
    exit(EXIT_FAILURE); 
  }
  cerr << "Filename: " << argv[0] << endl;
  FrequencyTable ft("test.txt");
  
  exit(EXIT_SUCCESS); 
}