// Binary Search 
#include <iostream.h>
#include <conio.h>
class Binary
{
private:
int a[100],n,key;
public:
void GetData(void);
void Sort(void);
void Display(void);
void BinarySearch(void);
};
void Binary::GetData(void)
{
cout<<"\nEnter the size of the list to be searched : ";
cin>>n;
cout<<"\nEnter the elements of the list :";
for(int i=0;i<n;i++)
{
 cin>>a[i];
}
cout<<"Enter the key value to be searched in the above list : ";
cin>>key;
}
void Binary::Sort(void)
{
for(int i=0;i<n-1;i++)
{
 for(int j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
 int temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
}
}
void Binary::Display(void)
{
for(int i=0;i<n;i++)
{
 cout<<" Element "<< i+1 <<" is " << a[i]<<endl;
}
}
void Binary::BinarySearch(void)
{
int high,low,mid; high=n-1; low=0;
while (low<=high)
{
 mid=(low+high)/2;
 if(a[mid]==key)
 {
 cout<<"\n The key value "<< key <<" is present at location " <<mid+1;
 return;
 }
 else
 {
 if (key<a[mid])
 {
 high=mid-1;
 }
 else
 {
 low=mid+1;
 }
 }
}
cout<<"\n The key value "<< key<<" is not present in the above list";
}
int main()
{
Binary B;
clrscr();
B.GetData();
B.Sort();
cout<<"\n The Sorted List \n";
cout<<"**************\n";
B.Display();
B.BinarySearch();
getch();
return 0;
}
