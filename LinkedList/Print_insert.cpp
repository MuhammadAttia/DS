#include <iostream>
using namespace std;
struct linkedlist
{
    int data;
    linkedlist* next;
};
linkedlist* head;

void Insert (int x )
{
    linkedlist* current = new linkedlist ();
    current->data=x;
    head=current->next;
    head=current;
}
void print ()
{
    linkedlist* current = head;
    if(head==NULL)
    {
        cout <<"this list is empty :";
    }
    else
    {
        while (head!=NULL)
        {
            cout<<current->data<<"->";
            head=current->next;
        }
    }
}

int main ()
{
    int n,x;
    cout<<"Enter the num of value yo want insert in linkedlist : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(int i=0; i<n; i++)
    {
        cin>>x;
        Insert(x);
        print();
    }
}
