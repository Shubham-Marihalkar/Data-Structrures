
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define SIZE 10

char s[SIZE];//stack declaration
int top=-1;
void push(char elem)//function to push char to stack
{
    s[++top]=elem;
}

char pop()//function to pop from stack
{
    return(s[top--]);
}

int pr(char elem)//precedence function
{
    switch(elem)
    {
    case '#': return 0;
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }
}

void main()
{
    char infx[50],pofx[50],ch,elem;
    int i=0,k=0;
    printf("************ INFIX TO POSTFIX CONVERSION *************");
    printf("\nEnter infix expression : ");//input infix expression
    scanf("%s",infx);
    push('#');//push # to determine end while popping out
    while( (ch=infx[i++]) != '\0')
    {
        if( ch == '(')
            push(ch);
        else if(isalnum(ch))
            pofx[k++]=ch;
        else if( ch == ')')
        {
            while( s[top] != '(')
                pofx[k++]=pop();
            elem=pop();
        }
        else
        {
            while( pr(s[top]) >= pr(ch) )
                pofx[k++]=pop();
            push(ch);
        }
    }
    while( s[top] != '#')
        pofx[k++]=pop();
    pofx[k]='\0';//add null character at the end of string
    printf("\n\nGiven Infix Expn: %s  \nPostfix Expn: %s\n",infx,pofx);

}
