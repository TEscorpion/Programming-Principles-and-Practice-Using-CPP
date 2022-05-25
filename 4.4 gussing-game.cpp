/* 
I/P: 
  - Number between 1 and 100 

O/P:
  - Guess a number after asking no more than seven questoins 
  - Number of questions 
*/
#include <iostream>

using namespace std;

void get_number (int &number){
  
  cout << "Please enter a number between 1 and 100\n";
  cin >> number;
   
  while (number < 1 || number > 100){
    cout << "Please enter a number between 1 and 100\n";
    cin >> number;
  }
}

void guess_number(int number){
  int first {0};
  int last {100}; 
  int guess {0};
  int questions_number {0}; 
  bool answer = true; 

  while (first <= last){ 
    guess = (first + last) / 2; 
    if(guess == number){
      cout << "Bingo, the number is " << guess << "\n";
      break; 
    } else {
      cout << "Is the number less than " << guess << "?\n" <<
              "Enter (1 for Yes) or (0 for No)\n";
      cin >> answer;
      questions_number++;
      if(answer){
        last = guess - 1; 
      } else {
        first = guess + 1; 
      }
    }
  }

  cout << "The number of questions: " << questions_number << "\n";
}

int main() {
  int number; 
  get_number(number); 
  guess_number(number);
}