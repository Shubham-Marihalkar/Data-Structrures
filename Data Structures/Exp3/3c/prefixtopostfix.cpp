#include<iostream>
#include<stack>

using namespace std;

//Declare strings for prefix and postfix expressions
string prefix;
string postfix;

//Declare a stack of type string using stack library function
stack<string> s;

bool isoperator(char ch)//checks if character is a operator
{
    switch(ch)
    {
    case '+' :
    case '-' :
    case '*' :
    case '/' :
        return true;
    }
    return false;
}

void convert(int i)
{
    if(i<0)//exit condition after completion of conversion
    {
        postfix = s.top();s.pop();
        cout<<"\nPostfix expression :"<<postfix<<endl;  //print postfix expression
        return;
    }
        if(isoperator(prefix[i]))
        {
            //if it is an operator pop the strings and concatinate
            string p1 = s.top();s.pop();
            string p2 = s.top();s.pop();

            string temp = p1+p2+prefix[i];

            s.push(temp);
        }
        else{
            s.push(string(1,prefix[i])); //push in stack if not an operator
        }
    i = i - 1;//controls the exit condition
    convert(i);//recursive call
}

int main()
{
    cout<<"**** P R E F I X     T O    P O S T F I X****\n ";
    cout<<"enter the prefix expression : ";
    cin>>prefix;//input prefix expression
    int l = prefix.size();//get length of prefix expression and store in L
    convert(l-1);//convert the expression to postfix
}
