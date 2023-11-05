// Sequential Search
#include <iostream.h>
#include <conio.h>
class Sequential
{
private:
int a[100],n,key;
public:
void GetData(void);
void SequentialSearch(void);
};
void Sequential::GetData(void)
{
cout<<"\nEnter the size of the list to be searched : ";
cin>>n;
cout<<"\nEnter the elements of the list : ";
for(int i=0;i<n;i++)
{
 cin>>a[i];
}
cout<<"Enter the key value to be searched in the above list : ";
cin>>key;
}
void Sequential::SequentialSearch(void)
{
for(int i=0;i<n;i++)
{
 if(a[i]==key)
 {
 cout<<"The key value "<<key<<" is present at location "<<i+1;
 return;
 }
}
cout<<"The key value "<<key<<" is not present in the above list";
}
int main()
{
Sequential S;
clrscr();
S.GetData();
S.SequentialSearch();
getch();
return 0;
}
