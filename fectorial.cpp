#include<iostream>
using namespace std;
int fact (int n1){
if(n1==0)
return 1;

else 
return n1*fact(n1-1);

}
int main(){
int n1,f;

cout<<"enter value of f";
cin>>n1;

f=fact(n1);

cout<<"fectorial of given number is "<<f<<endl;


    return 0;
}