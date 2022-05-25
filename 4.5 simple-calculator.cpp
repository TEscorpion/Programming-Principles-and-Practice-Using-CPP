/*
Simple calculator to calculate four baisc operations (+,-,*,/)

I/P:
  - operand1 
  - operand2
  - operation

O/P:
  - result based on user choosed operation 

*/

#include <iostream>

using namespace std;

void calculate (int number1, int number2, char operation){

    switch(operation) {
      case '+':
        cout << number1 << " + " << number2 << " = " << number1 + number2 << "\n\n";
        break;
      case '-':
        cout << number1 << " - " << number2 << " = " << number1 - number2 << "\n\n";
        break;
      case '*':
        cout << number1 << " * " << number2 << " = " << number1 * number2 << "\n\n";
        break;
      case '/':
        cout << number1 << " / " << number2 << " = " << number1 / number2 << "\n\n";
        break;
      default:
        cout << "Unavailable operation, Please try again\n\n";
  }
}


int main() {
  double operand1 {0}, operand2 {0};
  char operation = ' ';

  cout << "Plase enter two operands followed by operation\n" << 
          "Operations: (+), (-), (*), (/).. Press (|) to finish\n\n";

  while(cin >> operand1 >> operand2 >> operation){
    calculate(operand1, operand2, operation); 
    cout << "Plase enter two operands followed by operation\n" << 
            "Operations: (+), (-), (*), (/).. Press (|) to finish\n\n";
  }

}