//Student Name: Robert Woolard

//Instructor: Dr. Tyson McMillan

//COSC-1437-58002

//Date 05/04/2022

//Recursion definition: When a function is called within a function until a condition is met

#include <iostream>
#include "Input_Validation_Extended.h"


void tower(int n, char a, char b, char c) {
  if(n > 0) {
    tower(n-1, a, c, b);
    std::cout << "Disk " << n << " has been moved from " << a <<      " to " << c << std::endl;
    tower(n-1, b, a, c);
  }
}

int factorialR(int num) {
  if(num <= 0) {
    return 1;
  }
  else {
    return num * factorialR(num - 1);
  }
}

int main() {
  int disks; //number of disks from user
  int fact; //number for factorial from user
  std::cout << "Please enter number of disks. ";
  disks = validateInt(disks);

  tower(disks, 'a', 'b', 'c');
  cout << endl;

  std::cout << "Please enter an integer greater than 0 to calculate the factorial.\n";
  fact = validateInt(fact);

  std::cout << "The factorial of " << fact << " is " << factorialR(fact) << endl;

  return 0;
   
}