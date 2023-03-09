/*  C++ Program to Swap Two Numbers without using third variable  */

#include<iostream>
using namespace std;

int main()
{
    
    int a,b;
    
    cout<<"\n Enter the first number  a = ";
    cin>>a;
    
    cout<<"\n Enter the second number b =";
    cin>>b;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"\n After swapping a = "<<a;
    cout<<"\n After swapping b = "<<b;
    
    return 0;
    
}
