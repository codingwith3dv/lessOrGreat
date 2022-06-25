#include "randGen.h"

#include <iostream>

int main() {
  std::cout << "<|> less or great\n";
  std::cout << "Instructions: Enter a range and guess the random number...\n\n";

  std::cout << "Enter a range (min 10): ";

  int maxRange;
  std::cin >> maxRange;
  
  int randomNum = randGen(5, maxRange);

  do {
    std::cout << "Enter your guess: ";

    int guess;
    std::cin >> guess;

    if(guess < randomNum) {
      std::cout << "\nYour guess is less than the actual number :/\n";
    } else if(guess > randomNum) {
      std::cout << "\nYour guess is greater than the actual number :/\n";
    } else if(guess == randomNum) {
      std::cout << "\nWohooooo... You won!!!\n";
      break;
    }
  } while(true);

  std::cout << "\nThank you for playing!\n";

  return 0;
}
