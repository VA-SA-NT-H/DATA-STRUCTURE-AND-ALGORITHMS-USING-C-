// Bubble sorting. 
#include<iostream.h> 
#include<conio.h> 
class DataArray
{
protected:
int a[100],n;
public:
void GetData(void);
void Display(void);
};
void DataArray::GetData(void)
{
cout<<"\n Enter the number of elements to be sorted : ";
cin>>n;
for(int i=0;i<n;i++)
{
 cout<<" Enter element no. "<<i+1<< " :";
 cin>>a[i];
}
}
void DataArray::Display(void)
{
for(int i=0;i<n;i++)
 cout<<" "<<a[i];
cout<<endl;
}
class Bubble : public DataArray
{
public:
void BubbleSort(void);
};
void Bubble::BubbleSort(void)
{
int flag=1,i,j,temp;
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 flag=0;
 }
cout<<"\n Array after iteration "<<i<<": ";
Display();
if(flag)
 break;
else
 flag=1;
}
}
int main()
{
Bubble B;
clrscr();
B.GetData();
B.BubbleSort();
cout<<"\n\t The Sorted Array";
cout<<"\n\t **************\n";
B.Display();
getch();
return 0;
}
