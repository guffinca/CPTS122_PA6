
#




#include <fstream>
#include <string>



using std::endl;

using std::ifstream;
using std::ofstream;
using std::fstream;

using std::string;



class BSTNode
{
	public:
		BSTNode(char newEnglish,  string newMorse);
	

		~BSTNode() {};;

		 char getEnglish() const ;
		string getmorse() const;

		BSTNode* getLeftPtr() ;
		BSTNode* getRightPtr() ;


		void setEnglish(char newEnglish);
		void setMorse(string newMore);
		void setRightPtr(BSTNode *const pNewRightptr);
		void setLeftPtr(BSTNode *const pNewLeftPtr);

		

private:
	 char english; //Char, but using template
	string morse; //string, but using template

	BSTNode * mpLeft;
	BSTNode * mpRight;
};

