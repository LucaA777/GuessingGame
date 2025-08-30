/*
  This is a simple game where the computer will randomly generate a number
  between 1 and 100. Then the player has to guess that number in as few
  attempts as possible. After each guess, the computer will tell the player
  whether their guess was too high or too low.

  Author: Luca Ardanaz
  Last update: 8/29/2025
*/

/*
THE THREE RULES OF C++

1. NO GLOBAL VARIABLES

2. NO STRINGS

3. USE include <iostream> INSTEAD OF stdio
*/

#include <iostream>

using namespace std;

int main() {

  //show introductory message
  cout << endl << endl << endl << "Welcome to the guessing game!" << endl;
  cout << "The computer will randomly pick a number between 0 and 100." << endl;
  cout << "Your job is to guess it in as few attempts as possible." << endl;
  
  char playAgain = 'n'; //variable for replaying game

  //game loop
  do {

    //generates a random number
    srand(time(NULL));
    int randNum = rand() % 101;
    cout << endl <<endl << endl << "Starting a new round." << endl << endl;

    int guess = -1; //variable stores player's guess
    int guessCount = 0; //variable counts player guesses
    
    //guess loop
    while (guess != randNum) {

      //asks for player guess
      cout << "Enter your guess:" << endl;
      cin >> guess;

      guessCount++; //updates the guess count

      //compares guess to random number and gives feedback
      if (guess < randNum) {
	cout << endl << "Your number is too small, try again." << endl << endl;
      }
      else if (guess > randNum) {
	cout << endl << "Your number is too large, try again." << endl << endl;
      }
      else {
	//since the two numbers are equal, the player wins!
	cout << endl << "That's correct!" << endl;
	cout << "You guessed it in " << guessCount << " tries." << endl << endl << endl;
      }

    }

    

    //ask if the player wants to play again
    cout << "Would you like to play again? (y/n)" << endl;
    cin >> playAgain;

  } while (playAgain == 'y');

  return 0;

}
