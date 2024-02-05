#include<iostream>
using namespace std;

class Graph
{
	private:
		int adj[5][5]; //n x n matrix
	public:
		 void addedge(int i, int j, int w)
		 {
		 	if((i>=0 && i<5) && (j>=0 && j<5))
		 	{
		 		adj[i][j] = w;
		 		adj[j][i] = w;
			}
			else
			  cout<<"Invalid pair of edges";
		 }
		 void initialize()
		 {
		 	for(int i=0;i<5;i++)
		 	{
		 		for(int j=0;j<5;j++)
		 		{
		 			adj[i][j] = 0;
				 }
			 }
		 }
		 void print()
		 {
		 	for(int i=0;i<5;i++)
		 	{
		 		for(int j=0;j<5;j++)
		 		{
		 			cout<<adj[i][j]<<" \t";
				 }
				 cout<<endl;
			 }
		 }
};

int main()
{
	Graph g;
	g.initialize();
	g.addedge(0,1,2);
	g.addedge(0,2,3);
	g.addedge(1,0,2);
	g.addedge(1,2,15);
	g.addedge(1,3,2);
	g.addedge(2,0,3);
	g.addedge(2,1,15);
	g.addedge(2,4,13);
	g.addedge(3,1,2);
	g.addedge(3,4,9);
	g.addedge(4,2,13);
	g.addedge(4,3,9);
	g.print();
}

