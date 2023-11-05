// Selection sorting.
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
cout<<"\n Enter the number of elements to be sorted : "; cin>>n;
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
class Selection : public DataArray
{
public:
void SelectionSort(void);
};
void Selection::SelectionSort(void)
{
int large,index,i,j;
for(i=n-1;i>0;i--)
{
 large=a[0];
 index=0;
 for(j=1;j<=i;j++)
 {
 if(a[j]>large)
 {
 large=a[j];
 index=j;
 }
 }
a[index]=a[i]; a[i]=large;
 cout<<"\n Array after iteration "<<n-i<<": ";
 Display();
}
}
int main()
{
Selection S;
clrscr();
S.GetData();
S.SelectionSort();
cout<<"\n\t The Sorted Array";
cout<<"\n\t***************\n";
S.Display();
getch();
return 0;
}
