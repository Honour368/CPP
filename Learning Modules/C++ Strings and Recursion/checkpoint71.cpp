#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main() {
  vector<string> temperature;
  string input, values;

  ifstream fin;
  fin.open("temperature.txt");
  if (fin.fail()) {
    cout << "Error in opening file" << endl;
    exit(1);
  }
  else {
    ofstream fout;
    fout.open("average.txt", ios::app);
    if (fout.fail()) {
      cout << "Error in opening file" << endl;
      exit(1);
    }
    while(getline(fin, input)) {
      istringstream iss(input);
      while (iss >> values) {
        temperature.push_back(values);
      }
      double sum=0;
      for (int i=1; i<temperature.size(); i++){
        sum+= stod(temperature[i]);
      }
      double avgTemp = sum/(temperature.size()-1);
      fout << temperature[0] << " " << fixed << setprecision(1) << avgTemp << endl;
      temperature.clear();
    }
  }
  fin.close();

  return 0;
}
