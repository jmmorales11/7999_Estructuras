#include <iostream>
#include <functional>
#include <vector>

// Define el TDA para el número complejo
struct ComplexNumber {
  float real;
  float imaginary;
};
// Define la función lambda que suma dos números complejos
  auto sum_complex = [](const ComplexNumber& x, const ComplexNumber& y) {
    return ComplexNumber{x.real + y.real, x.imaginary + y.imaginary};
  };
int main() {
  

  // Define un vector de números complejos
  std::vector<ComplexNumber> complex_numbers{{1, 2}, {3, 4}, {5, 6}};

  // Usa la función lambda para sumar todos los números complejos en el vector
  ComplexNumber result{0, 0};
  for (const auto& n : complex_numbers) {
    result = sum_complex(result, n);
  }

  std::cout << result.real << " + " << result.imaginary << "i" << std::endl;  // Output: 9 + 12i

  return 0;
}
