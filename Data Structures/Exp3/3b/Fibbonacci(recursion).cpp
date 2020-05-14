#include<iostream>
using namespace std;


int fib(int n)   //recursive fibonnacci function
{
    if(n<=1)//exit condition of the function
    {
        return(n);
    }
    else //recursive function call till exit condition gets true
        return((fib(n-1)+fib(n-2)));
}

int main()
{
    int n,i=0;
    cout<<"**** F I B O N A C C I ****\n";
    cout<<"\nEnter the number of terms for Fibonacci series:";
    cin>>n;//input n value
    cout<<"\nFibonacci sequence is as follows : \n";
    while(i<n)//display the fibonacci of i till n
    {
        cout<<" "<<fib(i);
        i++;//increment i
    }
    return 0;
}

