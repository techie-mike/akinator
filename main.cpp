#include <stdio.h>
#include "MyTree.h"
int main() {
    Tree akinator;
    akinator.readTreeFromFile("test.txt");
    akinator.play();
    akinator.dump();
    akinator.writeTreeInFile("test.txt");
    return 0;
}