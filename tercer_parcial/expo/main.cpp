#include <iostream>
#include <stack>
#include <string>

using namespace std;

int sumar_posfija(string expresion) {
    stack<int> pila;
    for (int i = 0; i < expresion.length(); i++) {
        char c = expresion[i];
        if (c >= '0' && c <= '9') {
            // Si el carácter es un dígito, lo agregamos a la pila
            pila.push(c - '0');
        } else {
            // Si el carácter es un operador, sacamos los dos últimos números de la pila
            int b = pila.top();
            pila.pop();
            int a = pila.top();
            pila.pop();
            // Realizamos la operación y agregamos el resultado a la pila
            if (c == '+') {
                pila.push(a + b);
            } else if (c == '-') {
                pila.push(a - b);
            } else if (c == '*') {
                pila.push(a * b);
            } else if (c == '/') {
                pila.push(a / b);
            }
        }
    }
    // El resultado final estará en la cima de la pila
    return pila.top();
}

int main() {
    string expresion = "23+";
    int resultado = sumar_posfija(expresion);
    cout << "El resultado de la expresion " << expresion << " es: " << resultado << endl;
    return 0;
}



/*#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph {
    int V; 
    vector< list<int> > adj; 

public:
    Graph(int V);
    void insertarVertice();
    void insertarArista(int v, int w);
    void imprimir();
    void eliminarArista(int v, int w);
    void eliminarVertice(int v);
};
    Graph::Graph(int V) { 
        this->V = V;
        adj.resize(V);
    }

    void Graph::insertarVertice() { 
        ++V;
        adj.resize(V);
    }
    void Graph::insertarArista(int v, int w) { 
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    void Graph::imprimir() { 
        for (int i = 0; i < V; ++i) {
            cout << "Vertice " << i << ": ";
            for (auto j = adj[i].begin(); j != adj[i].end(); ++j)
                cout << *j << " ";
            cout << endl;
        }
    }
    void Graph::eliminarArista(int v, int w) { 
        adj[v].remove(w);
        adj[w].remove(v);
    }
    void Graph::eliminarVertice(int v) { 
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
            adj[*i].remove(v);
        adj.erase(adj.begin() + v);
        V--;
    }

int main() {
    Graph g(4); 
    // añadir las aristas
    g.insertarArista(0, 1);
    g.insertarArista(0, 2);
    g.insertarArista(1, 2);
    g.insertarArista(2, 3);
    // imprimir el grafo
    cout << "Grafo cuatro aristas" << endl;
    g.imprimir();
    // añadir un vértice
    g.insertarVertice();
    // imprimir el grafo actualizado
    cout << "Grafo insertado un nuevo vertice" << endl;
    g.imprimir();
    // eliminar una arista
    g.eliminarArista(1, 2);
    cout << "Grafo eliminado una arista" << endl;
    g.imprimir();
    // eliminar un vértice
    g.eliminarVertice(1);
    cout << "Grafo eliminar vertice" << endl;
    g.imprimir();
    return 0;
}
*/