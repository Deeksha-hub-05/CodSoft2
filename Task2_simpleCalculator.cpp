#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char op;
    cout<<"This is a Simple Calculator Program!"<<endl;
    cout<<"Choose the following operation which you want to perform"<<endl;
    cout<<"+ for Addition"<<endl;
    cout<<"- for Subtraction"<<endl;
    cout<<"* for Multiplication"<<endl;
    cout<<"/ for Division"<<endl;

    //taking input from the user
    cout<<"Enter the fist number: ";
    cin>>num1;
    cout<<"Enter the second number :";
    cin>>num2;
    cout<<"Enter the operation(+,-,*,/) :";
    cin>>op;

    //perform the operation
    switch(op)
    {
        case '+':
        cout<<"Result: "<<(num1+num2)<<endl;
        break;

        case '-':
        cout<<"Result: "<<(num1-num2)<<endl;
        break;

        case '*':
        cout<<"Result: "<<(num1*num2)<<endl;
        break;

        case '/':
        if(num2!=0)
        cout<<"Result: "<<(num1/num2)<<endl;
        else
        cout<<"Error: Division by zero is not allowed!"<<endl;
        break; 

        default:
        cout<<"Invalid operation! please enter the correct operation."<<endl;
    }
    return 0;
}