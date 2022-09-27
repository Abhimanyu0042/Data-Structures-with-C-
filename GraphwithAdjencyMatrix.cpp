#include <iostream>
using namespace std;

class Graph
{
public:
    bool **adjmat;
    int n;

    Graph(int n)
    {
        this->n = n;
        adjmat = new bool *[n];
        for (int i = 0; i < n; i++)
        {
            adjmat[i] = new bool[n];
            for (int j = 0; j < n; j++)
            {
                adjmat[i][j] = false;
            }
        }
    }

    void addedge(int i, int j)
    {
        adjmat[i][j] = true;
        adjmat[j][i] = true;
    };

    void removeedge(int i, int j)
    {
        adjmat[i][j] = false;
        adjmat[j][i] = false;
    }

    void printgraph()
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " : ";
            for (int j = 0; j < n; j++)
            {
                cout << adjmat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(4);

    g.addedge(0, 3);
    g.addedge(0, 2);
    g.addedge(2, 2);
    g.addedge(1, 0);
    g.addedge(3, 2);

    g.printgraph();
}