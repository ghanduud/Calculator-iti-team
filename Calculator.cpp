// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double sum(double a, double b) {
    return a + b;
}

int factorial(int a) {

    if(a == 0) return 0;
    if(a == 1) return 1;

    int b=1;

    for(int i = 1; i <= a;i++){
        b *= i;
    }

    return b;
}


int main()
{
    int choice;
    cout<<"1 - Sum two numbers";
    cout<<"2 - Substract two numbers";
    cout<<"3 - Times two numbers";
    cout<<"4 - Devid two numbers";
    cout<<"5 - Number power number";
    cout<<"6 - Reminder of two numbers";
    cout<<"7 - Factorial of a number";
    cout<<"Please choose an operation :";

    cin>>choice;

   if (choice >= 1 && choice <= 6) {

    double a,b,result;
    cout<<"Please enter two numbers separated by space";
    cin>>a>>b;


    switch (choice)
    {
    case 1:
        result = sum(a,b);
        break;
    case 2:
        result = substract(a,b);
        break;
    case 3:
        result = multiply(a,b);
        break;
    case 4:
        result = devid(a,b);
        break;
    case 5:
        result = power(a,b);
        break;
    case 6:
        result = reminder(a,b);
        break;
    default:
        break;
    }

    cout<<"your answer is : "<<result<<endl;
    
} else {
    int a;
    int result;
    cout<<"Please enter the number:";
    cin>>a;
    result = factorial(a);
    cout<<"your answer is : "<<result<<endl;
}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
