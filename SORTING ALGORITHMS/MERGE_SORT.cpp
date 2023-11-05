// Merge sorting. 
#include<iostream.h> 
#include<conio.h> 
class DataArray
{
protected:
int a[100],n;
public:
int Getn(void)
{
return n;
}
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
class Merging : public DataArray
{
public:
void Merge(int low, int high, int mid);
void MergeSort(int low, int high);
void MergeDisplay(int l,int h);
};
void Merging::MergeSort(int low, int high)
{
int mid;
if(low<high)
{
 mid=(low+high)/2;
