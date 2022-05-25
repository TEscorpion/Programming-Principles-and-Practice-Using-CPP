// Calculate the median of set of tempretures 

// Test cases 
/* 
  Case #1: Even number of temps 
  I/O: 3 5 2 7 1 4 -> 1 2 3 4 5 7 
  O/P: 3.5

  Case #2: Odd number of temps 
  I/O: 3 5 2 7 1 4 10 -> 1 2 3 4 5 7 10
  O/P: 4
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <double> get_temps(vector <double> &temps){
  cout << "Please enter the temperatures and enter symbol (|) to finish\n"; 
  for(double temp; cin >> temp;){
    temps.push_back(temp); 
  }
  return temps; 
}

void print_temps(vector <double> temps){
  for(double x:temps){
    cout << x << " ";
  }
  cout << "\n";
}

double calc_median(vector <double> temps){
  if(temps.size() % 2 != 0){
    return temps[temps.size()/2];
  } else {
    return (temps[temps.size()/2-1] + temps[temps.size()/2]) / 2;   
  }
}

int main() {
  vector <double> temps; 
  
  get_temps(temps); 
  sort(temps.begin(), temps.end());
  cout << "The median of temperaturs is: " << calc_median(temps) << "\n"; 
}
