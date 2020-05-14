#include<iostream>
using namespace std;

int fact(int n)     //recursive factorial function
{
    if(n == 1)//exit condition of function
    {
        return(1);
    }
    else
        return(n*fact(n-1));//recursive call of the function
}

int main()
{
    cout<<"**** F A C T O R I A L *****\n";
    int n,ans;
    cout<<"Enter the number : ";
    cin>>n;//input the number whose factorial has to be found
    ans = fact(n);//call factorial function on that number
    cout<<"The factorial of "<<n<<" is : "<<ans<<endl;//Display the result
}
