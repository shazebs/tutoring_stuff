// Krystelle Borja
// CIS-5 Online
// 1-18-2021
// Assignment 5B: Math Tutor with Loops
// This program is designed to practice random number generation within a range, nested logic, if/else statements, and the switch statement. Division is Later

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // declare variables
    int min, max; // shazEdit
    
    int num1, num2, result, answer, minValue, maxValue;
    char studentChoice;
    string name;
    const string ERROR = "Invalid choice. Please choose a given option.";
    const string QUIT_1 = "Thank you, ", QUIT_2 = ", for using this program! Please use it again if you need anymore practice!\n\n";
    int seed = time(0);
    
    srand(seed); // shazEdit
    
    // get user's name -- shazEdit
    cout << "Please enter your name.\n"; 
    getline(cin, name);

    do
    {
        // welcome message
        /*
        cout << "Please enter your name.\n";
        getline(cin, name);
         */ 
         
        cout << "Welcome, " << name << " to Math Tutor! \nPlease select one of the following options.\n";
        cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl;
        cout << "4. Division" << endl << "5. Quit" << endl << endl;
        cin >> studentChoice;
        
        switch (studentChoice)
        {   //Addition choice
            case '1':
                // range of addition number, top number between 2 and 500
                min = 2;
                max = 500;
                
                // addition random numbers and total
                // num1 = (rand() % (max - min + 1)) + min;
                num1 = (rand() % max) + min; // shazEdit
                
                // bottom number between 1 and 99
                min = 1;
                max = 99;
                // num2 = (rand() % (max - min + 1)) + min;
                num2 = (rand() % max) + min; 
                
                result = num1 + num2; 
                
                
                // user inputs an answer
                cout << "You've selected Addition" << endl << endl;
                cout << "Input your answer." << endl;
                cout << setw(5) << num1 << endl;
                cout << "+  " << num2 << endl;
                cout << "= ______" << endl; // shazEdit
                cin >> answer;
                
                //test for correct answer
                if(answer == result)
                {
                    cout << "\nExcellent, " << name << "! You are correct. \n\n";
                    
                }
                else if(answer != result)
                {
                    cout << "\nNope. That's not correct, " << name << ". The correct answer is " << result << "\nReview your notes and try again." << endl << endl;
                }
                
                break;
                
            //Subtraction Choice
            case '2':  // range of addition number, top number between 2 and 500
                min = 2;
                max = 500;
                
                // addition random numbers and total
                // num1 = (rand() % (max - min + 1)) + min;
                num1 = (rand() % max) + min; // shazEdit
                
                // bottom number between 1 and 99
                min = 1;
                max = 99;
                // num2 = (rand() % (max - min + 1)) + min;
                num2 = (rand() % max) + min; // shazEdit
                result = num1 - num2;
                
                // user inputs an answer
                cout << "You've selected Subtraction" << endl << endl;
                cout << "Input your answer." << endl;
                cout << setw(5) << num1 << endl;
                cout << "-  " << num2 << endl;
                cout << " = ______" << endl; // shazEdit
                cin >> answer;
                
                //test for correct answer
                if(answer == result)
                {
                    cout << "\nExcellent, " << name << "! You are correct. \n\n";
                    
                }
                else if(answer != result)
                {
                    cout << "\nNope. That's not correct, " << name << ". The correct answer is " << result << "\nReview your notes and try again." << endl << endl;
                }
                
                break;
                
            // Multiplication
            case '3':  // range of addition number, top number between 2 and 500
                min = 2;
                max = 500;
                
                // addition random numbers and total
                //num1 = (rand() % (max - min + 1)) + min;
                num1 = (rand() % max) + min; // shazEdit
                
                // bottom number between 1 and 99
                min = 1;
                max = 99;
                // num2 = (rand() % (max - min + 1)) + min;
                num2 = (rand() % max) + min; // shazEdit
                result = num1 * num2;
                
                // user inputs an answer
                cout << "You've selected Multiplication" << endl << endl;
                cout << "Input your answer." << endl;
                cout << setw(5) << num1 << endl;
                cout << "x  " << num2 << endl;
                cout << " = ______" << endl; // shazEdit
                cin >> answer;
                
                //test for correct answer
                if(answer == result)
                {
                    cout << "\nExcellent, " << name << "! You are correct. \n\n";
                    
                }
                else if(answer != result)
                {
                    cout << "\nNope. That's not correct, " << name << ". The correct answer is " << result << "\nReview your notes and try again." << endl << endl;
                }
                
                break;
                
            case '4': // Division
                // top number between 10 and 999
                min = 10;
                max = 999;
                
                // addition random numbers and total
                num1 = (rand() % (max - min + 1)) + min;
                // num1 = (rand() % max) + min; // shazEdit
                
                // bottom number between 1 and 9
                min = 1;
                max = 9;
                num2 = (rand() % (max - min + 1)) + min;
                // num2 = (rand() % max) + min; 
                result = num1 / num2;
                
                // user inputs an answer
                cout << "You've selected Division" << endl << endl;
                cout << "Input your answer." << endl;
                cout << setw(5) << num1 << endl;
                cout << " / " << num2 << " = ";
                cin >> answer;
                
                //test for correct answer
                if(answer == result)
                {
                    cout << "\nExcellent, " << name << "! You are correct. \n\n";
                    
                }
                else if(answer != result)
                {
                    cout << "\nNope. That's not correct, " << name << ". The correct answer is " << result << "\nReview your notes and try again." << endl << endl;
                }
                break;
                
            case '5':
                cout << "\nYou chose to quit the program. " << endl << endl;
                break;
                
            default:
                cout << ERROR << endl;
                break;
        }
        
        cout << "Would you like to solve another problem? y/n\n";
        cin >> studentChoice;
    

    }
    while (studentChoice == 'y' || studentChoice == 'Y');
    
    // Print out last statements -- shazeEdit
    cout << QUIT_1 << name << endl << QUIT_2 << endl;
    // system("pause"); // shazEdit
    
    return 0;
}
