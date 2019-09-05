#include<stdio.h>
#include<string.h>
int insert();
int delete();
int traverse();
int queue[10];
int front=0,rear=0;
  int val,choice;
int main()
{
  char str[10];
  while(1)
  {
    printf("\n Enter yes to continue and no to stop \n");
    scanf("%s",str);
    if(strcmp(str,"no")==0)
    break;
    else
    {
      printf("\nEnter 1 for insertion \n 2 for traverse \n 3 for deletion\n");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        insert();
        break;
        case 2:
        traverse();
        break;
        case 3:
        delete();
        break;
        default:
        printf("\n Wrong choice made\n");
      }
    }
  }
}
int insert()
{
  printf("\n Enter a value to be inserted \n");
  scanf("%d",&val);
  if(rear==10)
  {
    printf("Queue is full \n");
  }
  else
  {
    queue[rear]=val;
  }
  rear++;
}
int traverse()
{
  if(front==rear)
  {
    printf("\n Queue is empty\n");
  }
  else
  {
    for(int i=front;i<rear;i++)
    {
      printf("%d\n",queue[i]);
    }
  }
}
int delete()
{
  if(front==rear)
  {
    printf("\n Queue is empty\n");
  }
  else
  {
    printf("\n Element deleted is %d",queue[front]);
    for(int i=0;i<rear-1;i++)
    {
      queue[i]=queue[i+1];
    }
    rear--;
  }
}
