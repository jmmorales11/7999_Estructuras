#include <iostream>
#include <stack>
#include <string>

int main() {
  std::stack<int> pila;

  // Esta es la función lambda que se utilizará para realizar las operaciones matemáticas
  // en la pila. Recibe dos operandos y un operador, y devuelve el resultado de la
  // operación.
  auto operar = [](int operando1, int operando2, char operador) {
    switch (operador) {
      case '+': return operando1 + operando2;
      case '-': return operando1 - operando2;
      case '*': return operando1 * operando2;
      case '/': return operando1 / operando2;
    }
  };

  std::string entrada;
  std::cout << "Ingrese la expresión en notación polaca inversa: ";
  std::getline(std::cin, entrada);

  for (const auto &c : entrada) {
    if (std::isdigit(c)) {
      // Si el caracter es un dígito, lo agregamos a la pila como un entero
      pila.push(c - '0');
    } else {
      // Si el caracter no es un dígito, es un operador.
      // Obtenemos los dos operandos de la pila y realizamos la operación
      // utilizando la función lambda "operar"
      int operando2 = pila.top(); pila.pop();
      int operando1 = pila.top(); pila.pop();
      int resultado = operar(operando1, operando2, c);

      // Agregamos el resultado a la pila
      pila.push(resultado);
    }
  }

  // El resultado final debe estar en la cima de la pila
  std::cout << "Resultado: " << pila.top() << std::endl;

  return 0;
}


/*#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Función para evaluar una operación en notación polaca inversa
// utilizando un TDA pila para almacenar los operandos y operadores
int evaluar(string expresion) {
  stack<int> pila;

  // Recorremos cada carácter de la expresión
  for (int i = 0; i < expresion.length(); i++) {
    // Si el carácter es un operando, lo empujamos a la pila
    if (isdigit(expresion[i]))
      pila.push(expresion[i] - '0');

    // Si el carácter es un operador, obtenemos los dos operandos
    // de la pila y realizamos la operación correspondiente
    else {
      int op1 = pila.top(); pila.pop();
      int op2 = pila.top(); pila.pop();

      switch (expresion[i]) {
        case '+': pila.push(op2 + op1); break;
        case '-': pila.push(op2 - op1); break;
        case '*': pila.push(op2 * op1); break;
        case '/': pila.push(op2 / op1); break;
      }
    }
  }

  // Al finalizar, el único valor que queda en la pila es el resultado
  // de la operación en notación polaca inversa
  return pila.top();
}

int main() {
  // Probamos la función con algunas expresiones
  cout << evaluar("12+") << endl;   // imprime 3
  cout << evaluar("23*") << endl;   // imprime 6
  cout << evaluar("23*5+") << endl; // imprime 11
  cout << evaluar("23/") << endl;   // imprime 0
  
  
  return 0;
}*/

