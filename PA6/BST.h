#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "BSTNode.h"

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;
using std::ofstream;
using std::fstream;

using std::string;







class BST
{
	
public:
	BST(const char newEnglish, const string newMorse);

	bool isEmpty();
	void insert(const char newEnglish, const string newMorse);

	BSTNode* search(const char newEnglish);
	
	



private:
	
	BSTNode  *mpRoot;
	BSTNode* search2(BSTNode * const newRoot, const char newEnglish);
	void setmpRoot(char newEnglish, string newMorse);
	BSTNode *getRoot() const;
	void insert(BSTNode* const pNewRoot, const char newEnglish, const string newMorse);
		void deleteTree(BSTNode* const pTree);
};

