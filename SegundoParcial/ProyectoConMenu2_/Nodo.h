#include <string>
#include <unordered_map>
using namespace std;

class Nodo {
	public:
    unordered_map<char, Nodo*> hijos;
    bool finalDePalabra;
    string palabra_;
  };