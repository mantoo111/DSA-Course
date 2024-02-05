#include<iostream>
using namespace std;

class Graph
{
	private:
		int a[4][4];
	public:
		void addedge(int i, int j)
		{
			if((i>=0 && i<4 ) && (j>=0 && j<4) )
			{
				a[i][j] = 1;
			}
			else
			cout<<"invalid pair of edges";
		}
		void initialize()
		{
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
				    a[i][j] = 0;
			}
		}
		void print_matrix()
		{
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
				    cout<<a[i][j]<<" ";
			 cout<<endl;
			}
		}
};

int main()
{
	Graph g;
	g.initialize();
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(2,1);
	g.addedge(3,1);
	g.print_matrix();
}
