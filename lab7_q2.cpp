/*
2. Write a C++ program to print all natural numbers between 1 to n using recursion.
*/
//include library

//library
#include<iostream>
using namespace std;
//defining a function
int foo(int i,int n)
  { 
//using if and else condition
    if(i>n)
    return 0;
    else
    {
    cout<<i<<endl;
    i++;
    foo(i,n);
    return 0;
   } }
// main function
int main()
{
   int n;
   cout<< "Enter a natural number: "<<endl;
   cin>>n;
   cout<<"The natural numbers  are: "<<endl;
   foo(1,n);

return 0;
}
 
