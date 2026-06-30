// WORD GUESSING GAME (A mini project using arrays, strings and functions)

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Initialize the guessing word with dashes ('-')
void initialword(char guessWord[], int length)
{
    for (int i=0; i<length; i++)
    {
        guessWord[i] = '-';
    }
    guessWord[length] = '\0';
}

// Display the current status of the guessed word and the remaining lives
void display(char guessWord[] , int length, int lives)
{
    cout << "Word is : ";
    for (int i=0; i<length; i++)
    {
        cout << guessWord[i] << " ";
    }
    cout << "\n\nLives left : " << lives << endl;
}

// Update the guessed word if guessed letter is in the random word
bool check(char guessWord[], int length, char letter, string randomWord)
{
    bool found = 0;

    for (int i=0; i<length; i++)
    {
        if (tolower(randomWord[i]) == tolower(letter))
        {
            guessWord[i] = letter;
            found = 1;
        }
    }
    return found;
}

int main()
{
    // List of words for the game
    string Wordlist[10] = {"Earth" , "Computer" , "Energy" , "Machine" , "Program" , "Galaxy", "Binary" , "Flower" , "Summary" , "Software"};

    // Random word generator by random index 
    srand(time(0));
    int randomIndex = rand() % 10;
    string randomWord = Wordlist[randomIndex];

    int length = randomWord.length();
    int lives = 10;
    char guessWord[20];
    char letter;

    // Fill the guessing word with dashes ('-')
    initialword(guessWord, length);

    // Welcome screen interface
    cout << "----------------------------------------------------------------------\n";
    cout << "                   WELCOME TO GUESS THE WORD GAME                     \n";
    cout << "----------------------------------------------------------------------\n";

    while (lives > 0)
    {
        // Show current status of guessed word
        display(guessWord, length, lives);

        cout << "Enter a letter to guess : ";
        cin >> letter;

        // Verify the guess
        if (check(guessWord, length, letter, randomWord))
        {
            cout << "Correct Guess !\n\n";
        }
        else
        {
            cout << "Wrong guess !\n\n";
        }
        lives--;    // Reduce lives after each guess

        // Check if player has won the game
        bool won = 1;

        for (int i=0; i<length; i++)
        {
            if (guessWord[i] == '-')
            {
                won = 0;
                break;
            }
        }

        if (won)
        {
            cout << "CONGRATULATIONS ! You guessed the word: " << randomWord << endl;
            return 0;
        }
    }

    // End the game if user is out of lives
    cout << "GAME OVER! You ran out of lives.\n";
    cout << "The correct word was : " << randomWord << endl;

    return 0;

}