//Linear Search
#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,x,i,flag=0;
    cout<<"How many elements ?";
    cin>>n;//input number of element
    cout<<"\nEnter elements of the array\n";
    for(i=0;i<n;++i)//input the element
        cin>>arr[i];
    cout<<"\nEnter element to search:";
    cin>>x;//input the search element
    for(i=0;i<n;++i)//travel and search in the array
    {
         if(arr[i]==x)//compare and update the flag
        {
            flag=1;
            break;
        }
    }
    if(flag)//depending on the flag give result
        cout<<"\nElement is found at position "<<i+1;
    else
        cout<<"\nElement not found";
    return 0;
}
