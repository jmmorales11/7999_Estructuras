#include <string>
#include <unordered_map>
using namespace std;
/**
class Nodo {
	public:
    unordered_map<char, Nodo*> hijos;
    bool finalDePalabra;
    string palabra_;
  };
  */
  

class Nodo {
private:
    unordered_map<char, Nodo*> hijos;	
	
public:
    unordered_map<char, Nodo*> getHijos();
    void setHijos(unordered_map<char, Nodo*> newHijos);

};
