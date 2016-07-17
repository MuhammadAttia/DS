#include <iostream>
using namespace std;

struct linkedlist
{
    int data;
    linkedlist* next;
};
linkedlist* head;
void insrt (int x)
{
    linkedlist* current=new linkedlist ();
    current->data=x;
    head=current->next;
    head=current;
}
void print()
{
    linkedlist *temp =head;
    if(head ==NULL)
    {
        cout<<" The list is empty " ;
    }
    else
    {
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
}


int main()
{
    int n,x;
    print();
    cout<<" enter th num of element : ";
    cin>>n;
    cout<<" Enter value : ";
    for(int i=0; i<n; i++)
    {

        cin>>x;
        insrt(x);
        print();
    }


}
