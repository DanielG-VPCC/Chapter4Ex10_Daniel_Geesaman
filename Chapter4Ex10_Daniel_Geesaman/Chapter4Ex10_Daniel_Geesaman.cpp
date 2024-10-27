/*
Title:Chapter 4 Exercise 10 - Days in a Month
File name:Chapter4Ex10_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:10/26/2024
Requirements:

Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12)
and the year. The program should then display the number of days in that month. Use the following criteria to identify
leap years:

1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400.
For example, 2000 is a leap year but 2100 is not.

2. If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4. For example, 2008 is a leap year but 2009 is not.

Sample run of the program

    Enter a month (1-12): 2
    Enter a year: 2008
    29 days
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int month;
    int year;

        cout << "Enter a month (1-12): ";
        cin >> month;
        cout << "Enter a year: ";
        cin >> year;

        switch (month)
        {
        case 1:
            cout << "31 days";
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0)
            {
                cout << "29 days";
            }
            else if (year % 400 == 0)
            {
                cout << "29 days";
            }
            else
            {
                cout << "28 days";
            }
            break;
        case 3:
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12:
            cout << "31 days";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;
        default:
            cout << "enter a valid response";
            break;
        }

}

