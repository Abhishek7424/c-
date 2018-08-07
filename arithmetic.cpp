#include<iostream>
#include<math.h>
using namespace std;
int main(){

int num1,num2;
float f;
char c;

cout<<"enter value of num1 and num2";
cin>>num1>>num2;

cout<<"enter your choice +,-,*,/,o/o,^ \n";
cin>>c;

switch(c){
    case '+':
        f=num1+num2;
            break;
    case '-':
        f=num1-num2;
            break;
    case '*':
        f=num1*num2;
            break;
    case '/':
        f=num1/num2;
             break;
    case '%':
        f=num1%num2;
             break;
    case '^':
         f=pow(num1,num2);
            break;
    default:
    cout<<"given input is wrong";
}
cout<<"result is "<<f;
return 0;
}