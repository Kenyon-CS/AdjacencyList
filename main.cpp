#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge in an undirected graph
void addEdge(vector<vector<int>>& adj, int u, int v) {
    if (u >= adj.size() || v >= adj.size()) {
        cerr << "Error: Vertex out of bounds.\n";
        return;
    }
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// Function to print the adjacency list representation of the graph
void printGraph(const vector<vector<int>>& adj) {
    cout << "Adjacency List of Graph:\n";
    for (size_t v = 0; v < adj.size(); ++v) {
        cout << "Vertex " << v << " -> ";
        for (auto x : adj[v]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

// Driver code
int main() {
    int V = 5;
    vector<vector<int>> adj(V);  // Adjacency list for V vertices

    // Add edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list of the graph
    printGraph(adj);

    return 0;
}
