// grafos - Lista de adjacência 


#include <iostream>
#include <list>
#include <algorithm> // função find

using namespace std;

class Grafo
{
private:
	int V; // número de vértices
	list<int> *adj; // ponteiro para um array contendo as listas de adjacências

public:
	Grafo(int V); // construtor
	void adicionarAresta(int, int); // adiciona uma aresta no grafo

	// obtém o grau de saída de um dado vértice
	// grau de saída é o número de arcos que saem de "v"
	int obterGrauDeSaida(int);

	bool existeVizinho(int, int ); // verifica se v2 é vizinho de v1
};

Grafo::Grafo(int v)
{
	this->adj = new list<int>[v];
	this->V = v;
}

void Grafo::adicionarAresta(int v1, int v2)
{
	this->adj[v1].push_back(v2);
}

int Grafo::obterGrauDeSaida(int v)
{
	list<int> vert = this->adj[v];
	
	return vert.size();
}

bool Grafo::existeVizinho(v1, v2)
{
	
}

int main()
{
    Grafo g(4);
	g.adicionarAresta(0, 1);
	g.adicionarAresta(0, 2);
	g.adicionarAresta(0, 3);

	cout << g.obterGrauDeSaida(0);
}
