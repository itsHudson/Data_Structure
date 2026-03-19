// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Import required libraries for input/output,
//           random number generation, and time functions.
// ==========================================================

#include <iostream>  
// Allows the program to use input and output functions such as cout and cin

#include <cstdlib>   
// Provides functions for random number generation like rand() and srand()

#include <ctime>     
// Provides time-related functions such as time(), used to create random seeds



// ==========================================================
// CATEGORY: Namespace Usage
// Purpose : Allow use of standard library functions without
//           writing std:: before every function.
// ==========================================================

using namespace std; 
// Allows direct usage of cout, cin, endl without writing std::



// ==========================================================
// CATEGORY: Main Program Execution
// Purpose : The entry point where the program starts running.
// ==========================================================

int main()
{
    
    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store the secret number, user guess,
    //           and the guessing range boundaries.
    // ======================================================

    int SecretRandomNumber;  
    // Stores the randomly generated secret number that the user must guess

    int UserGuessNumber;     
    // Stores the number entered by the user as their guess

    int MinimumGuessRange = 1;   
    // Stores the current minimum range the user should guess from

    int MaximumGuessRange = 100; 
    // Stores the current maximum range the user should guess from



    // ======================================================
    // CATEGORY: Random Number Generator Initialization
    // Purpose : Initialize the random number generator so
    //           different random numbers are produced each run.
    // ======================================================

    srand(time(0));  
    // Sets the seed for random number generation using the current time



    // ======================================================
    // CATEGORY: Secret Number Generation
    // Purpose : Generate a random number between 1 and 100.
    // ======================================================

    SecretRandomNumber = rand() % 100 + 1;  
    // rand() generates a random number
    // % 100 limits it to 0–99
    // +1 shifts the range to 1–100



    // ======================================================
    // CATEGORY: Game Introduction Message
    // Purpose : Display the starting message of the game.
    // ======================================================

    cout << "Guess Number Game Started Now!" << endl;  
    // Print message to inform the player that the game has started



    // ======================================================
    // CATEGORY: Game Loop
    // Purpose : Continuously allow the user to guess until
    //           the correct number is entered.
    // ======================================================

    while (true)  
    // Infinite loop that keeps the game running until the user wins
    {

        cout << "--------------------------------" << endl;  
        // Print a visual separator line for better console readability


        // ==================================================
        // CATEGORY: Display Current Guess Range
        // Purpose : Show the user the updated guessing range.
        // ==================================================

        cout << "Guess Number between "
             << MinimumGuessRange << " to "
             << MaximumGuessRange << endl;  
        // Display the current guessing range to guide the player


        // ==================================================
        // CATEGORY: User Input
        // Purpose : Ask the player to enter their guess.
        // ==================================================

        cout << "Your answer: ";  
        // Prompt message asking the user to input a guess

        cin >> UserGuessNumber;  
        // Read the user's guess from the keyboard and store it



        // ==================================================
        // CATEGORY: Correct Guess Check
        // Purpose : Determine if the user's guess matches
        //           the secret random number.
        // ==================================================

        if (UserGuessNumber == SecretRandomNumber)  
        // Check if the user's guess is exactly the secret number
        {

            cout << endl;  
            // Print an empty line for cleaner console formatting

            cout << "Congratulation! You won!" << endl;  
            // Inform the user they guessed the correct number

            break;  
            // Exit the game loop because the player has won
        }


        // ==================================================
        // CATEGORY: Guess Too High
        // Purpose : Update the maximum range if the guess
        //           is larger than the secret number.
        // ==================================================

        else if (UserGuessNumber > SecretRandomNumber)  
        // Check if the user's guess is higher than the secret number
        {
            MaximumGuessRange = UserGuessNumber;  
            // Update the maximum range to the user's guess
        }


        // ==================================================
        // CATEGORY: Guess Too Low
        // Purpose : Update the minimum range if the guess
        //           is smaller than the secret number.
        // ==================================================

        else  
        {
            MinimumGuessRange = UserGuessNumber;  
            // Update the minimum range to the user's guess
        }
    }



    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End the program successfully.
    // ======================================================

    return 0;  
    // Return 0 to indicate the program ended without errors
}
