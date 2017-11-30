/** Luke Deegan,
 *  Exercise 2,
 *  Factorial Calculator - While Loop,
 *  23/9/17
 */

/** Preprocessor directives */
#include <iostream>

using namespace std;

int main()
{
    /** This program is to calculate the factorial of a user inputted number */
    cout << "\n\n" << "This program is to calculate the factorial of an integer value" << "\n\n" << endl;

    /** Declare integer variables */
    int userinput;
    int long factorial = 1;

    /** Intruct user to enter integer value */
    cout << "Please enter an integer value:" << endl;
    cin >> userinput;

    /** Check that the value entered is an integer */
    while(userinput<0)
    {
        cout << "\n" << "Enter an integer value: " << "\n" << endl;
        cin >> userinput;
    }

    /** Inserting for loop to calculate factorial value */
    while  (userinput>0)
    {
        factorial = factorial*userinput;
        userinput--;
    }

    /** Diplsy result to the user */
    cout << "Factorial is: " << factorial << endl;

    return 0;
}
