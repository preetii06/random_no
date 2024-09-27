#include <iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;    

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." <<endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
        }
    }

    return 0;
}
