#include <iostream>
#include "Genstack.h"
#include <string>
#include <fstream>
#include "FileReader.h"
using namespace std;

int main(int argc, char** argv) {
  if(argc > 1) {
    string fileName = argv[1];
    FileReader file(fileName);
  }
  else {
    cout << "No file entered on command line!" << endl;
  }
}
