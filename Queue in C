#include<stdio.h>
int queue[100],choice,n,rear,front,x,i;
void insert();
void delete();
void display();
int main()
{
    rear=-1;
    printf("\n Enter the size of queue[MAX=100]:");
    scanf("%d",&n);
    printf("\n \t Queue OPERATIONS USING ARRAY");
    printf("\n \t -----------------------------");
    printf("\n \t 1.Insert \n \t 2.Delete \n \t 3.Display \n \t 4.Exit");
    do
    {
        printf("\n Enter the choice :");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            {
                insert();
                break;
            }
        case 2:
            {
                delete();
                break;
            }
        case 3:
            {
              display();
              break;
            }
        case 4:
            {
                printf("\n \t Exit the Point");
                break;
            }
        default:
            {
                printf("\n\t please enter a valid choice (1/2/3/4)");
            }
        }
    }
    while(choice!=4);
    return 0;
}
void insert()
{
    if(rear==n-1)
    {
        printf("\n\t Queue is overflow\n");
    }
    else
    {
        if(front==-1);
        front=0;
        {
            printf("Insert the element in queue:");
        }

        scanf("%d",&x);
        rear=rear+1;
        queue[rear]=x;
    }
}
void delete()
{
    if(front==-1|| front>rear)
    {
        printf("\n\t Queue is under flow");
    }
    else
        {
        printf("\n\t The delete elements is %d",queue[front]);
        front=front+1;

    }
}
void display()
{
    if(front==-1)
    {
        printf("\n Queue is empty \n");
    }
    else
    {
        printf("\n The elements in Queue;\n");
        for(i=front;i<=rear;i++)
        {
            printf("\n %d", queue[i]);
        }
        printf("\n press next choice");
    }

    }



