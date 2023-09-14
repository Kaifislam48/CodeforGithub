/* Seema is learning about void pointers and their applications. Help her to write a program that takes an integer and a character. The program should check the following:


    If the integer is positive, negative, or zero.
    If the character is an alphabet, number, or not.


Display appropriate messages for everything.


Note: This is a sample question asked in an IBM interview.
Input format :

The first line of input consists of an integer, n.

The second line of input consists of a character, c.
Output format :

The first line of output consists of one of the following:

    If the integer is a positive integer, the output prints "The number is positive.".
    If the integer is a negative integer, the output prints "The number is negative.".
    If the integer is zero, the output prints "The number is zero.".

The second line of output consists of one of the following.

    If the character is an alphabet, the output prints "The character is an alphabet.".
    If the character is a number, the output prints "The character is a number.".
    If the character is neither an alphabet nor a number, the output prints "The character is not a number or an alphabet.".

Code constraints :

-105 < n < 105
Sample test cases :
Input 1 :

22
C

Output 1 :

The number is positive.
The character is an alphabet.

Input 2 :

-5
2

Output 2 :

The number is negative.
The character is a number.

Input 3 :

0
@

Output 3 :

The number is zero.
The character is not a number or an alphabet.

Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.  */

#include <iostream>
using namespace std;

int main() {
    int n;
    char c;

    // Input an integer and a character
    cin >> n >> c;

    // Check if the integer is positive, negative, or zero
    if (n > 0) {
        cout << "The number is positive." << endl;
    } else if (n < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // Check if the character is an alphabet, a number, or neither
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << "The character is an alphabet." << endl;
    } else if (c >= '0' && c <= '9') {
        cout << "The character is a number." << endl;
    } else {
        cout << "The character is not a number or an alphabet." << endl;
    }

    return 0;
}
