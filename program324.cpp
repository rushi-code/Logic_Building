//Queue (MenuDriven)

#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        node *next;

        node (int value)
        {
            data = value;
            next = NULL;
        }

}NODE,*PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Enqueue(int no);      //InsertLast
        int Dequeue();              //DeleteFirst
        void Display();
        int Count();
        
};
Queue:: Queue()
{
    First = NULL;
    iCount = 0;
}
void Queue::Enqueue(int no)
{
    PNODE newn = new NODE(no);
    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}     
int Queue::Dequeue()
{
    int Value = 0;
    if(iCount == 0)
    {
        cout<<"Queue is empty\n";
        return-1;
    }
    else if(iCount == 1)
    {
        Value = First->data;
        delete First;
        First = NULL;
    }
    else
    {
       Value = First->data;
       PNODE temp = First;
       First = First->next;

       delete temp;
    }
    iCount--;
    return Value;
}             
void Queue::Display()
{
    if(First == NULL)
    {
        cout<<"Nothing to display as Queue is empty\n";
        return;
    }
    
    cout<<"Elements of Queue are : \n";
    PNODE temp = First;
    for(int iCnt = 1; iCnt<=iCount;iCnt++)
    {
        cout<<temp->data<<'\n';
        temp = temp->next;
    }

}
int Queue::Count()
{
    return iCount;
}
int main()
{
    int iChoice = 1;
    int Value = 0;
    int iRet = 0;

    Queue obj;

    cout<<"--------------------------------------\n";
    cout<<"Dynamic implemnetation of queue\n";
    cout<<"--------------------------------------\n";
    while(iChoice!=0)
    {
        cout<<"----------------------------------\n";
        

        cout<<"1: insert element into Queue\n";
        cout<<"2: remove element from Queue\n";
        cout<<"3: Display element from Queue\n";
        cout<<"4: Count number of elements\n";
        cout<<"0: Terminate the Application\n";
        cout<<"----------------------------------\n";

        cout<<"Plz enter option\n";
        cin>>iChoice;


        switch(iChoice)
        {
            case 1: 
                cout<<"Enter element that you want to push\n";
                cin>>Value;
                obj.Enqueue(Value);
                break;
            
            case 2:
                iRet = obj.Dequeue();
                if(iRet != -1)
                {
                    cout<<"remove element from queue is "<<iRet<<"\n";
                }
                break;

            case 3:
                obj.Display();
                break;
            case 4:
                iRet = obj.Count();
                cout<<"No of elements are "<<iRet<<'\n';
                break;

            case 0:
                cout<<"Thanks for using application\n";
                break;

            default:
                cout<<"Plz enter valid option\n";
        }//End of switch
    }//End of while
    return 0;
}//End of main