//Breadth First Search
#include<iostream.h>
#include<conio.h>
class BGraph
{
int a[10][10], n, start;
public:
void getdata();
void bfs_traverse();
};
void BGraph::getdata()
{
cout<<"\n Enter the number of vertices in the graph: ";
cin>>n;
cout<<"\n Enter the adjacency matrix of graph: "<<endl;
for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 cin>>a[i][j];
cout<<"\n Enter the vertex from which you want to traverse: ";
cin>>start;
}
void BGraph::bfs_traverse()
{
int *visited= new int[n];
int queue[10], front= -1, rear=0, i;
for(int j=0;j<n;j++)
visited[j]=0;
cout<<"\n Traversing the graph using breadth first search algorithm : "<<endl;
queue[rear]=start;
visited[start]=1;
while(front!=rear)
{
 cout<<queue[++front]<<endl;
 i=queue[front];
 for(int j=0;j<n;j++)
 {
 if(a[i][j]!=0 && visited[j]!=1)
 {
 queue[++rear]=j;
 visited[j]=1;
 }
 }
}
}
int main()
{
BGraph bfs;
bfs.getdata();
bfs.bfs_traverse();
getch();
return 0;
}
