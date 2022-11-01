#include "BST.h"
#include <iostream>
#include <fstream>
#include <string>

void run();
void insertTable(BST& Tree, ifstream& morseTable);
void printMorse(BST& Tree, ifstream& convert);