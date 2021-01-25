// Krystelle Borja
// CIS-5 Online
// 1-18-2021
// Assignment 6A: Math Tutor with Functions

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


// <function prototypes>
const void addition();
const void subtraction();
const void multiplication();
const void division();
const int static displayMenu(string);
const bool isValid(char);
const void static numTries(int, int, int);



// <main method>
int main()
{
    // <variable declarations>
    string name = "";
    int studentChoice;
    char select;
    srand(time(0));

    const string ERROR = "Invalid choice. Please choose a given option.";
    const string QUIT_1 = "Thank you, ";
    const string QUIT_2 =
            ", for using this program!\nPlease use it again if you need anymore practice!\n\n";


    // welcome message
    cout << "Please enter your name.\n";
    getline(cin, name);

    do
    {
       studentChoice = displayMenu(name);
        // checking for valid entry
        while (studentChoice > 5 || studentChoice < 1)
        {
            cout << ERROR << endl;
            // choice value gets changed again
            studentChoice = displayMenu(name);
        }

        switch (studentChoice)
        {   //Addition choice
            case 1:
                addition();
                break;

                //Subtraction Choice
            case 2:
                subtraction();
                break;

                // Multiplication
            case 3:
                multiplication();
                break;

            case 4:
                division();
                break;

            case 5:
                cout << QUIT_1 << name << QUIT_2 << endl << endl;
                break;

            default:
                cout << ERROR << endl;
                break;
        }

        if (studentChoice != 5) {
            cout << "Would you like to solve another problem? y/n\n";
            cin >> select;
            if (select == 'n') {
                cout << QUIT_1 << name << QUIT_2 << endl << endl;
                break;
            }
        }


    } while (studentChoice != 5);
    // system("pause");

    return 0;

} // End of main method.



// <Function Declarations>

const void addition() {
    // function variables
    int min, max, num1, num2, result, answer;
    int attempts = 0;
    // top number between 2 and 500
    min = 2;
    max = 500;

    // addition random numbers and total
    num1 = (rand() % max) + min;

    // bottom number between 1 and 99
    min = 1;
    max = 99;
    num2 = (rand() % max) + min;
    result = num1 + num2;


    cout << "You've selected Addition" << endl << endl;
    cout << "Input your answer." << endl;
    cout << setw(5) << num1 << endl;
    cout << "+  " << num2 << endl;
    cout << "______" << endl;
    //
    numTries(result, attempts, answer);

}

//
//
//

const void subtraction()
{
    // <function variables>
    int min, max, num1, num2, result, answer;
    int attempts = 0;

    // top number between 2 and 500
    min = 2;
    max = 500;

    // addition random numbers and total
    num1 = (rand() % max) + min;

    // bottom number between 1 and 99
    min = 1;
    max = 99;
    num2 = (rand() % max) + min;
    //
    result = num1 - num2;


    cout << "You've selected Subtraction" << endl << endl;
    cout << "Input your answer." << endl;
    cout << setw(5) << num1 << endl;
    cout << "-  " << num2 << endl;
    cout << " = ______" << endl;
    //
    numTries(result, attempts, answer);

}

//
//
//

const void multiplication()
{
    int min, max, num1, num2, result, answer;
    int attempts = 0;
    // top number between 2 and 500
    min = 2;
    max = 500;

    // addition random numbers and total
    num1 = (rand() % max) + min;

    // bottom number between 1 and 99
    min = 1;
    max = 99;
    num2 = (rand() % max) + min;
    //
    result = num1 * num2;


    // user inputs an answer
    cout << "You've selected Multiplication" << endl << endl;
    cout << "Input your answer." << endl;
    cout << setw(5) << num1 << endl;
    cout << "x  " << num2 << endl;
    cout << " = ______" << endl;
    //
    numTries(result, attempts, answer);

}

//
//
//

const void division()
{
    int min, max, num1, num2, result, answer;
    int attempts = 0;
    // top number between 2 and 500
    min = 10;
    max = 999;

    // addition random numbers and total
    num1 = (rand() % max) + min;

    // bottom number between 1 and 9
    min = 1;
    max = 9;
    num2 = (rand() % max) + min;
    //
    result = num1 / num2;


    // user inputs an answer
    cout << "You've selected Division" << endl << endl;
    cout << "Input your answer." << endl;
    cout << setw(5) << num1 << endl;
    cout << " / " << num2 << " = ";
    //
    numTries(result, attempts, answer);

}

//
//
//

const int static displayMenu(string name) {
    // <function variables>
    int choice;

    // display menu choices
    cout << "Welcome, " << name <<
         " to Math Tutor!\nPlease select one of the following options.\n";
    cout << "1. Addition" << endl << "2. Subtraction" << endl
         << "3. Multiplication" << endl;
    cout << "4. Division" << endl << "5. Quit" << endl << endl;
    cin >> choice;

    // return char
    return choice;
}

//
//
//

// isValid return the true if choice is valid
const bool isValid(char choice) {

    // return bool
    return (choice > 0 && choice < 6) ? true : false;

}

//
//
//

const void numTries(int result, int attempts, int answer) {
    // 3 chances
    while (attempts != 3)
    {
        cin >> answer;
        // test for correct answer
        if(answer == result) // if user is correct
        {
            cout << "\nExcellent! You are correct. \n\n";
            cout << "Attempts: " << attempts + 1 << endl; // loop ends
            break;
        }
        if (answer != result)// if user is incorrect
        {
            ++attempts;
            cout << "Sorry that is not correct. Please try again." << endl;
            cout << "You have " << 3 - attempts << " attempts left." << endl;
        }
        if((3 - attempts) == 0) // if user runs out of attempts
        {
            cout << "The correct answer was " << result <<
                 "\nReview your notes and try again." << endl << endl;
            attempts++;
            break;

        }
    }
}
// end of all function declarations