#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char ch;
    cout<<"\n Welcome to the Simple Calculator! \n";
    cout<<"..................................\n";
    //Get the first number
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter an operater(+,-,*,/):";
    cin>>ch;
    // Get the second number
    cout<<"Enter second number:";
    cin>>num2;
    switch(ch)
{
    case '+':
    cout<<"Result:"<<num1+num2<<"\n";
    break;
    case '-':
    cout<<"Result:"<<num1-num2<<"\n";
    break;
    case '*':
    cout<<"Result:"<<num1*num2<<"\n";
    break;
    case '/':
    if(num2 !=0){
    cout<<"Result:"<<num1/num2<<"\n";
    }else{
        cout<<"Enter: Division by zero is not allowed.\n";
}
break;
default:
cout<<"Invalid operater.\n";
break;
}
return 0;
}
