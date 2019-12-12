#include <iostream>
using namespace std;
int stack[100],n, x,top=0;
void push() {
   if(top>n-1)
      cout<<"Stack Overflow"<<endl;
   else
    {
      cout<<"Enter a value to be pushed:"<<endl;
      cin>>x;
      top++;
      stack[top]=x;
   }
}
void pop() {
   if(top<=0)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>0) {
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>0; i--)
         cout<<stack[i]<<" "<<endl;
      cout<<"press next choice"<<endl;
   }
   else
      cout<<"Stack is empty";
}
int main() {
   int choice, val;
   cout<<"Enter the size of stack[MAX=100]:"<<endl;
   cin>>n;
   cout<<"STACK OPERATIONS USING ARRAY"<<endl;
   cout<<"----------------------------"<<endl;
   cout<<"1) Push"<<endl<<"2) Pop"<<endl<<"3) Display"<<endl<<"4) Exit"<<endl;
   do {
      cout<<"Enter the choice:"<<endl;
      cin>>choice;
      switch(choice) {
         case 1: {
            push();
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
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
