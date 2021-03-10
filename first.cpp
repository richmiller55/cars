// first.cpp
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int readdata() {
  string str;
  ifstream wheels ( "/home/ec2-user/data/batch001/Wheels.csv" );
  while (getline (wheels, str)) {
    cout << str << "\n";
  }
}

int main() {
  readdata();
  cout << "project to read beam data raw" << endl;
   return 0;
}


