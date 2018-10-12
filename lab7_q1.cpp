/*
1. Write a C++ program to find power of any number using recursion.
*/
//include library
#include<iostream>
using namespace std;
//defining function 
int exponent(int i,int j)
{ // using 'if' and 'else' condition 
  if(j==0)
  {
    return 1;
  }
   else
   {
     return i*exponent(i,j-1);
   }
}
//main function
int main()
{
/*Defining
a is for base;  b is for exponential*/
int a,b;
cout<<"Enter base and exponential :";
cin>>a>>b;
exponent(a,b);
cout<<"a^b is :"<<exponent(a,b)<<endl;
return 0;
} 

