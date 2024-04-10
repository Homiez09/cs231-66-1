#include <iostream>
#include <list>

using namespace std;

class Graph {
    private:
    int V;
    list<int> *adj;

    void DFSVisit(int s, bool visited[]) {
        visited[s] = true;
        cout << s << " ";
        
        list<int>::iterator i;
        for (i = adj[s].begin(); i != adj[s].end(); i++) {
            if (!visited[*i]) {
                DFSVisit(*i, visited);
            }
        }
    }

    public:
    Graph(int V) {
        this->V = V;
        adj = new list<int>[V];
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    void DFSInit(int s) {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++) {
            visited[i] = false;
            DFSVisit(s, visited);
        }
    }
};