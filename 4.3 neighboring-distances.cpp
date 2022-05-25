/*
I/P:
  - Set of distances between two cities 

O/P:
  - Total distance (sum of all distances)
  - Smallest distance 
  - Greatest distance
  - Mean distance 

Test Case
I/P: 
  - 5.5 , 6 , 8 , 12.5

O/P:
  - 32
  - 5.5
  - 12.5
  - 8
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <double> get_distances (vector <double> &distances){
  cout << "Please enter distances between two cities along a given route,\n" <<
          "Enter symbol (|) to finish\n";

  for(double distance; cin >> distance;){
    distances.push_back(distance);
  }

  return distances;
}

double calc_total(vector <double> distances){
  double total_distances{0};
  for(double x:distances){
    total_distances += x;
  }

  return total_distances;
}

void calc_smallest_greatest(vector <double> distances){
  double smallest {distances[0]};
  double greatest {distances[0]};

  for(double x:distances){
    if(x < smallest){
      smallest = x;
    } else if (x > greatest) {
      greatest = x;
    }
  }

  cout << "The smallest distance is: " << smallest << "\n";
  cout << "The greatest distance is: " << greatest << "\n";
}

double calc_mean(vector <double> distances){
  return calc_total(distances) / distances.size();
}

int main() {
  vector <double> distances;
  get_distances(distances);

  cout << "The total distance is: " << calc_total(distances) << "\n";
  calc_smallest_greatest(distances);
  cout << "The average distance is: " << calc_mean(distances) << "\n";
}