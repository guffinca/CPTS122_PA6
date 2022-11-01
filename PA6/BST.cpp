#include "BST.h"

BST::BST(const char newEnglish, const string newMorse)
{
	mpRoot = new BSTNode(newEnglish, newMorse);
}

bool BST::isEmpty()
{
	return this->mpRoot == nullptr;
}


void BST::insert(const char newEnglish, const string newMorse)
{
	insert(this->mpRoot, newEnglish, newMorse);
}



void BST::insert(BSTNode* const pNewRoot, const char newEnglish, const string newMorse)
{
	if (pNewRoot == nullptr)
	{
		this->mpRoot = new BSTNode(newEnglish, newMorse);
	}

 else if (pNewRoot->getEnglish() < newEnglish)
	{
		if (pNewRoot->getRightPtr() != nullptr)
		{
			insert(pNewRoot->getRightPtr(), newEnglish, newMorse);
		}
		else
		{
			pNewRoot->setRightPtr(new BSTNode(newEnglish, newMorse));
		}

	}
	else if (pNewRoot->getEnglish() > newEnglish)
	{
		if (pNewRoot->getLeftPtr() != nullptr)
		{
			insert(pNewRoot->getLeftPtr(), newEnglish, newMorse);
		}
		else
		{
			pNewRoot->setLeftPtr(new BSTNode(newEnglish, newMorse));
		}

	}
	else
	{
		cout << "This has already been inserted: " << newEnglish << endl;
	}
}


BSTNode* BST::search(const char newEnglish)
{
	BSTNode* newRoot = mpRoot;
	return search2(newRoot, newEnglish);
}

BSTNode* BST::search2(BSTNode* const newRoot, const char newEnglish)
{
	if (newRoot != nullptr)
	{
		//checking if there is only 1 root
		if (newRoot->getEnglish() == newEnglish)
		{
			return newRoot;
		}

		//checkinh if the english character is greater or less the the root, then getting the right
		// pointer depending
		if (newEnglish < newRoot->getEnglish())
		{
			return search2(newRoot->getLeftPtr(), newEnglish);
		}
		else if (newEnglish > newRoot->getEnglish())
		{
			return search2(newRoot->getRightPtr(), newEnglish);
		}

	}
}

void BST::deleteTree(BSTNode* const pTree)
{
	//From andy

	if (pTree != nullptr)
	{
		deleteTree(pTree->getLeftPtr());
		deleteTree(pTree->getRightPtr());
		delete pTree; // invokes destructor for a node
	}
}

