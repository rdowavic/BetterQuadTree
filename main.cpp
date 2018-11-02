#include <iostream>
#include <fstream>
#include <sstream>
#include "node.h"
#include "quadtree.h"
#include "bitmult.h"

int main() {

    std::ifstream file;
    file.open("../Matrix/matrix.txt");

    if (file) {
       std::string matrix;
       std::stringstream ss;
       ss << file.rdbuf();
       matrix = ss.str();
    
   //  std::cout << "Node size: " << sizeof(Node) << ", Link size: " << sizeof(Link) << "\n";
       Quadtree q = Quadtree::Construct(matrix);
       Quadtree product = q * q;
       std::cout << product << "\n";
     //  std::cout << Node::maxUsage * sizeof(Node)<< "\n";
    }

    file.close();
}
