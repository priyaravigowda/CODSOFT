//Task 2
/* Develop a simple calculator program that performs basic arithmatic operations such as addition, subtraction, multiplication, and division
Allow the users to input two numbers and choose an operation to perform.*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int i;
    do
    {
        long long  a, b;
        long long op;
        cout << "Enter two number seperated by spaces : ";
        cin >> a;
        cin >> b;
        cout << "\n-----------------------------------------------------------------------------\n" << endl;
        cout << "Press 1 for Addition (+) >>>" << endl;
        cout << "Press 2 for Subtraction (-) >>>" << endl;
        cout << "Press 3 for Multiplication (*) >>>" << endl;
        cout << "Press 4 for Division-Quotient (/) >>>" << endl;
        cout << "Press 5 for D-Remainder (%) >>>" << endl;
        cout << "Press 6 for Power (^) >>>" << endl;
        cout << "\nSelect any Operation : ";
        cin >> op;
        cout << "\nYour Answer is : ";

        switch (op)
        {
        case 1:
            cout << (a + b) << endl;
            break;
        case 2:
            cout << (a - b) << endl;
            break;
        case 3:
            cout << (a * b) << endl;
            break;
        case 4:
            cout << (a / b) << endl;
            break;
        case 5:
            cout << (a % b) << endl;
            break;
        case 6:
            cout << pow(a , b) << endl;
            break;
        default:

            cout << "Operation not Found...! Please Try Again...\n";
            break;
        }
        cout << "\n-----------------------------------------------------------------------------\n" << endl;
        cout << "To continue press 1" << endl;
        cout << "To end press 0" << endl;
        cout << "\nDo You want to Continue? (1/0) : ";
        cin >> i;
    }
    while (i);

    return 0;
}