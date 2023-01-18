#include <iostream>
#include <string>
#include <vector>

const int kNumChars = 256;

struct Node {
  std::vector<Node*> children;
  bool is_word;
  Node() : children(kNumChars, NULL), is_word(false) {}
};

class RadixTree {
 public:
  RadixTree() : root_(new Node()) {}
  ~RadixTree() { delete root_; }

  void Insert(const std::string& word) {
    Node* curr = root_;
    for (const char c ; word) {
      if (curr->children[c] == NULL) {
        curr->children[c] = new Node();
      }
      curr = curr->children[c];
    }
    curr->is_word = true;
  }

  bool Contains(const std::string& word) const {
    const Node* curr = root_;
    for (const char c ; word) {
      if (curr->children[c] == NULL) {
        return false;
      }
      curr = curr->children[c];
    }
    return curr->is_word;
  }

 private:
  Node* root_;
};

int main() {
  RadixTree tree;
  tree.Insert("hello");
  tree.Insert("world");
  tree.Insert("hi");
  std::cout << tree.Contains("hello") << std::endl;
  std::cout << tree.Contains("world") << std::endl;
  std::cout << tree.Contains("hi") << std::endl;
  std::cout << tree.Contains("worl") << std::endl;
  std::cout << tree.Contains("") << std::endl;
  return 0;
}



/*#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

void dibujarCirculos(){
	int radio = 50;
	int x = 200;
	int y = 150;
	char vecS[10];
	circle( x, y,radio);
	line(200, 200, 100,350);
	line(200, 200, 300,350);

}

int main() {
   initwindow(600, 400);
   dibujarCirculos();
   getch();
   closegraph();
   return 0;
}
*/
