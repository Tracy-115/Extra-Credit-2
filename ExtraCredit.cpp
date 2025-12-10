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
      cout << p.first << ": ";
      for (int r : p.second) cout << r << " \n";
  }
  int movieCount = 0;
  for (auto &p : movies) {
      movieCount++;
      cout << p.first << ": ";
      for (int r : p.second) cout << r << " ";
      double total = 0;
      for (int r : p.second) total += r;
      double average = total / p.second.size();
      cout << "Average=" << average;
  }
  cout << "Total movies: " << movieCount << "\n\n";

  double highest = 0;
  for (auto &p : movies) {
      double sum = 0;
      for (int r : psecond) sum += r;
      double avg = sum / psecond.size();
      if (avg > highest) highest = avg;
}
