//Queue Operation
#include<iostream.h>
#include<conio.h>
class Queue
{
int QueueData[100], size, front, rear;
public:
Queue()
{
front=0;
rear=0;
}
void SetSize(int n)
{
size=n;
}
void Enque(int);
int Deque(void);
void View(void);
};
void Queue::Enque(int x)
{
if((rear-front+1)>size)
{
 cout<<"\n\t\tQueue is over flow...";
}
else
{
 QueueData[rear]=x;
 cout<<"\n\t\t"<<x<<" is added.\n";
 rear++;
}
}
int Queue::Deque(void)
{
int x;
if(front>=rear)
{
 cout<<"\n\t\tQueue is under flow...";
 return -9999;
}
else
{
 x=QueueData[front];
 front++;
 return x;
}
}
void Queue::View()
{
int i=front, j=rear;
if(i>=j)
{
cout<<"\n\t\tQueue is empty...";
}
else
{
 cout<<"\n\n\tData in Queue :";
 for(i;i<=j-1;i++)
 cout<<" "<<QueueData[i];
}
}
int main()
{
clrscr();
int n;
cout<<"\n Enter the size of Queue [MAX=100] : ";
cin>>n;
Queue Q;
Q.SetSize(n);
int choice;
do
{
 clrscr();
 cout<<"\n\t\t Queue Operation";
 cout<<"\n\t\t***************";
 cout<<"\n\n\t 1.INSERT\n\t 2.DELETE\n\t 3.VIEW\n\t 4.EXIT";
 cout<<"\n\n Enter your choice : ";
 cin>>choice;
 int x;
 switch(choice)
 {
 case 1:
cout<<"\n Enter a value : ";
cin>>x;
Q.Enque(x);
Q.View();
break;
 case 2:
x=Q.Deque();
if (x!=-9999)
cout<<"\n\n\t"<<x<<" is deleted.\n\n";
Q.View();
break;
 case 3:
Q.View();
break;
 case 4:
cout<<"\n\n\t\t Exit...";
break;
 }
 getch();
}while(choice!=4);
return 0;
}
