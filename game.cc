#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 10
    int secretNumber = rand() % 10 + 1;

    // Set the number of guesses to zero
    int numGuesses = 0;

    // Set the maximum number of allowed guesses
    int maxGuesses = 3;

    // Start the game loop
    while (numGuesses < maxGuesses)
    {
        // Get the player's guess
        int guess;
        cout << "Enter a guess: ";
        cin >> guess;

        // Increment the number of guesses
        numGuesses++;

        // Check if the guess is correct
        if (guess == secretNumber)
        {
            // If the guess is correct, end the game
            cout << "You guessed it! The secret number was " << secretNumber << endl;
            cout << "You took " << numGuesses << " guesses." << endl;
            break;
        }
        else
        {
            // If the guess is incorrect, let the player know if they are too high or too low
            if (guess > secretNumber)
            {
                cout << "Your guess is too high." << endl;
            }
            else
            {
                cout << "Your guess is too low." << endl;
            }
        }
    }

    // If the player has made the maximum number of allowed guesses, let them know the game is over
    if (numGuesses == maxGuesses)
    {
        cout << "The game is over. You did not guess the secret number." << endl;
        cout << "The secret number was " << secretNumber << endl;
    }

    return 0;
}
