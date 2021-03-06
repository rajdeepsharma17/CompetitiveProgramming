/// https://drive.google.com/open?id=1Gcd1qHTb-JgSmLrG5MjQ_2zyKuX2zA5Y
/// https://drive.google.com/open?id=124i_iPsmqCO0hT5r4ryGjQDdWZznRLwp
#include<bits/stdc++.h>
using namespace std;
class Graph{

 private:
    int no_of_vertices;
    vector<list<int> > adjList;

 public:
     Graph(int no_of_vertices);
     void addEdge(int V1,int V2);
     void printAdjList();
};
Graph::Graph(int no_of_vertices)
{
   adjList=vector<list<int> >(no_of_vertices);
}
void Graph::addEdge(int V1,int V2)
{
    /// Undirected graph so add V1 in adjacency list of V2 and vice versa
    adjList[V1].push_back(V2);
    adjList[V2].push_back(V1);
}
void Graph::printAdjList()
{
    for(int i=0;i<adjList.size();i++)
    {
        cout<<i<<"-->";
        for(auto it=adjList[i].begin();it!=adjList[i].end();it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
  int number_of_vertices;
  cout<<"Enter number of vertices"<<endl;
  cin>>number_of_vertices;
  Graph g(number_of_vertices);
  int number_of_edges;
  cout<<"Enter number of edges"<<endl;
  cin>>number_of_edges;
  for(int i=0;i<number_of_edges;i++)
  {
      cout<<"Enter vertex 1 and vertex 2"<<endl;
      int vertex1,vertex2;
      cin>>vertex1>>vertex2;
      g.addEdge(vertex1,vertex2);
  }
  g.printAdjList();
}
