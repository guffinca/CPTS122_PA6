#include "BSTNode.h"



BSTNode::BSTNode(char newEnglish, string newMorse)
{
	this->english = newEnglish;
	this->morse = newMorse;
	this->mpLeft = this->mpRight = nullptr;


}





char BSTNode::getEnglish() const
{
	return this->english;

}



string BSTNode::getmorse() const
{
	return this->morse;
}



BSTNode* BSTNode::getLeftPtr()
{
	return this->mpLeft;
}



BSTNode* BSTNode::getRightPtr()
{
	return this->mpRight;
}



void BSTNode::setEnglish(char newEnglish)
{
	english = newEnglish;
}



void BSTNode::setMorse(string newMorse)
{
	morse = newMorse;
}



void BSTNode::setRightPtr(BSTNode* const pNewRightptr)
{
	mpRight = pNewRightptr;
}


void BSTNode::setLeftPtr(BSTNode* const pNewLeftPtr)
{
	mpLeft = pNewLeftPtr;
}


