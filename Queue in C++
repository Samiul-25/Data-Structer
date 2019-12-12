#include <iostream>
using namespace std;
int queue[100],n,front=-1,x,rear=-1;
void Insert() {
   if(rear==n-1)
      cout<<"Queue Overflow"<<endl;
   else
    {
        if(front==-1)
            front=0;
            cout<<"Insert the element in queue:"<<endl;
      cin>>x;
      rear++;
      queue[rear]=x;
   }
}
void Delete()
{
   if(front==-1 || front>rear)
      {
          cout<<"Queue Underflow"<<endl;
      }

   else
    {
      cout<<"The delete element is "<< queue[front] <<endl;
      front++;
   }
}
void Display() {
   if(front==-1)
    {
        cout<<"Queue is empty"<<endl;
   }
   else
   {
       cout<<"Queue elements are:"<<endl;
      for(int i=front; i<=rear; i++)
         cout<<queue[i]<<" "<<endl;
      cout<<"press next choice"<<endl;
   }

}
int main() {
   int choice;
   cout<<"Enter the size of queue[MAX=100]:"<<endl;
   cin>>n;
   cout<<"QUEUE OPERATIONS USING ARRAY"<<endl;
   cout<<"----------------------------"<<endl;
   cout<<"1) Insert"<<endl<<"2) Delete"<<endl<<"3) Display"<<endl<<"4) Exit"<<endl;
   do {
      cout<<"Enter the choice:"<<endl;
      cin>>choice;
      switch(choice) {
         case 1: {
            Insert();
            break;
         }
         case 2: {
            Delete();
            break;
         }
         case 3: {
            Display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"please enter a valid Choice(1/2/3/4)"<<endl;
         }
      }
   }
   while(choice!=4);
      return 0;
}
