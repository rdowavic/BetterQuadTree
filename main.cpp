#include <iostream>
#include <fstream>
#include <sstream>
#include "node.h"
#include "quadtree.h"
#include "bitmult.h"

int main() {

    std::ifstream file;
    file.open("/Users/racheldowavic/BetterQuadTreeBits/matrix.txt");

    if (file) {
       std::string matrix;
       std::stringstream ss;
       ss << file.rdbuf();
       matrix = ss.str();

       Quadtree q = Quadtree::Construct(matrix);
       Quadtree product = q * q;
   //  std::cout << product << "\n";
       std::cout << "Max nodes allocated at any one time: " << Node::maxUsage << "\n";
    }

    file.close();
}
