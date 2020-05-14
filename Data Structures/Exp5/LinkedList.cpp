#include<iostream>
using namespace std;
struct Node{   //Declare the structure Node
    int data;
    Node *next; //pointer pointing to Node structure
};

class linkedlist{ //Declare class linked list

    Node *head,*tail;
public :
    linkedlist() //Constructor to make head and tail to NULL initially
    {
        head = NULL;
        tail = NULL;
    }

    void addnode(int n) // Declare add node function
    {
        Node *temp = new Node;   //Create a new node by structure Node
        temp->data = n;//store data
        temp->next = NULL;//make next location address as NULL

        if(head == NULL)//if no node exist make the node as head node
        {
            head = temp;
            tail = temp;
        }
        else{//append the new node at the end of linked list
            tail->next = temp;//point tail to new node
            tail = tail->next;//update tail to new nodes next position
        }
    }

    void delnode()  //Delete Node
    {
        int n;
        Node *prev = new Node;      //Previous node tracer
        Node *curr = new Node;      //Current node under value comparision
        prev = NULL;
        curr = head;
        cout<<"Enter the value to be deleted : ";
        cin>>n;
        while(curr != NULL)//traverse through the linked list
        {
            if(curr->data == n)//compare the entered value with data part of each element of linked list
            {
                prev->next = curr->next; //Skip the address of node to be deleted by giving address of next node
                prev = prev->next;
                return;
            }
            prev = curr;//previous will become current
            curr = curr->next;//current will point to next node
        }
    }

    void searchnode()  //Search a node in linked list by value
    {
        int n,c=0;
        Node *temp = new Node;//for traversing through linked list
        temp = head;//points to head
        cout<<"Enter the value to be searched :";
        cin>>n;//input the value
        while(temp != NULL)//traverse till end of linked list
        {
            if(temp->data == n)//compare the entered value with data part of each element of linked list
            {
                cout<<"The element found at position "<<c<<endl;
            }
            temp = temp->next;  //point to node for traversal
            c = c + 1;//position increment
        }
    }
    void insertnode() //Insert node inserts node at the beginning of linked list
    {
        Node *temp = new Node;//temporary node which will be made as head node
        int n;//to take data value
        cout<<"Enter the value :";
        cin>>n;//input data value
        temp->data = n;//put n in data part of temp node
        temp->next = NULL;//point next to NULL address
        temp->next = head;//now point next to head address
        head = temp;//make temp as head
    }

    void display()  //Display function
    {
        cout<<"\nLinked lit is : \n";
        Node *temp = new Node;//for traversal through linked list
        temp = head;//point temp to head node
        while(temp!=NULL)//till end of linked list
        {
            cout<<temp->data<<"  -->  ";//display data part of each node
            temp = temp->next;////point temp to next node
        }
        cout<<endl;
    }

};

int main()
{
    cout<<"**** L I N K E D    L I S T ****"<<endl;
    linkedlist L;  //Instantiate L as object of linked list class
    int choice,n;
    while(1)
    {
        cout<<"\n  1_Add\t2_Delete\t3_Search\t4_Insert\t5_Display\t6_Exit\nEnter the choice:";
        cin>>choice;//input choice
        switch(choice)
        {
            case 1 ://add node
                    cout<<"Enter the value : ";
                    cin>>n;//input data part of node being added
                    L.addnode(n);
                    break;
            case 2 ://delete node
                    L.delnode();
                    break;
            case 3 ://search for node location depending on data stored
                    L.searchnode();
                    break;
            case 4 ://insert node
                    L.insertnode();
                    break;
            case 5 ://display linked list
                    L.display();
                    break;
            case 6:return(0);
            default :
                cout<<"Enter correct choice\n";
        }//end switch
    }//end while
}//end main
