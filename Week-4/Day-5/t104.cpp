#include <iostream>
using namespace std;

// Program to create quiz challenge
int main()
{
    string questions[5] = { 
        "1.  Who is credited with inventing the C++ programming language?",
        "2.  Which of the following is the correct symbol used for single-line comments in C++?",
        "3.  Which of the following functions serves as the mandatory entry point for execution in any standard C++ program?",
        "4.  What is the size of a standard char data type in C++?",
        "5.  Which header file must be included to use standard input and output streams like cin and cout?",
    };

    string options[5][4] = {
        {"A) Dennis Ritchie", "B) Ken Thompson", "C) Bjarne Stroustrup", "D) Linus Torvalds"},
        {"A)  /*", "B)  //", "C)  #", "D)  <!--"},
        {"A) start()", "B) init()", "C) main()", "D) program()"},
        {"A) 1 byte", "B) 2 bytes", "C) 4 bytes", "D) 8 bytes"},
        {"A) <conio.h>", "B) <stdio.h>", "C) <iostream>", "D) <string>"},
    };

    char answers[5] = {'C', 'B', 'C', 'A', 'C'};

    int score = 0;
    char ans;

    cout << "\t\t\t\t\t\tQUIZ CHALLENGE\t\t\t\t\t\t" << endl << endl;
    
    for (int i=0; i<5; i++)
    {
        cout << questions[i] << endl;
        
        for (int j=0; j<4; j++)
        {
            cout << options[i][j] << endl;
        }

        cout << "Enter your option (A,B,C,D) : ";
        cin >> ans;

        if ( toupper(ans) == answers[i] )
        {
            score ++;
            cout << "\tCORRECT ANSWER\t" << endl << endl;
        }

        else
        {
            cout << "\tWRONG ANSWER\t" << endl;
            cout << "Correct answer is " << answers[i] << endl << endl;
        }

    }

    cout << "\t\t\t\t\tYOUR SCORE IS " << score << "/5";

    return 0;

}
