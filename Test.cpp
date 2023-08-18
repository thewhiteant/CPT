#include <bits/stdc++.h>
using namespace std;
vector<int> graph[100];
int visited[100];

void dfs(int x)
{
    visited[x] = 1;
    cout << x << " ";
    for (int a : graph[x])
    {
        if (!visited[a])
            dfs(a);
    }
}

void addEdge(int x, int y)
{
    graph[x].push_back(y);
}

int main()
{

    addEdge(10, 25);
    addEdge(25, 30);
    addEdge(30, 25);
    addEdge(25, 30);
    addEdge(10, 25);
    addEdge(25, 30);
    addEdge(10, 25);
    addEdge(25, 30);
    addEdge(10, 25);
    addEdge(25, 30);
    addEdge(10, 25);
    addEdge(25, 30);

    dfs(10);

    return 0;
}