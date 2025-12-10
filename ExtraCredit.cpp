#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
  map<string, vector<int>> movies;
  ifstream file("210-xc2-FA25.txt");
  string name;
  int rating;

  while (file >> name >> rating) {
      movies[name].push_back(rating);
  }
  for (auto &p : movies) {
      cout << pfirst << ": ";
      for (int r : psecond) cout << r << " \n";
  }

  
}
