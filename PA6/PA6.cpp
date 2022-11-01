#include "PA6.h"

void run()
{
	
	string Morse; //plug into morse for functions
	char English = 0; //plug into english for functions

	ifstream convert;
	convert.open("convert.tct");

	ifstream MorseTable;
	MorseTable.open("MorseTable.txt");


	if (MorseTable)
	{


		//Getting english char then line of morse
		MorseTable.get(English);
		getline(MorseTable, Morse);
		
		
		BST Tree(English, Morse);

		insertTable(Tree, MorseTable);

		printMorse(Tree, convert);



	}

	cout << endl;
	MorseTable.close();
	convert.close();



}



void insertTable(BST& Tree, ifstream& morseTable)
{
	char english = 0;
	string morse;
	while (morseTable)
	{
		// Collects and stores the morse into the tree.
		morseTable.get(english);
		getline(morseTable, morse);
		getline(morseTable, morse);
		
		
		Tree.insert(english, morse);

		
	}
}

void printMorse(BST& Tree, ifstream& convert)
{
	char english = 0;
	string morse;
	while (convert)
	{

		convert.get(english);

		// found on https://beginnersbook.com/2017/12/cpp-program-to-convert-lowercase-to-uppercase/
		if (english >= 'a' && english <= 'z')
			english -= 32;

		// found auto on https://learn.microsoft.com/en-us/cpp/cpp/auto-cpp?view=msvc-170
		auto node = Tree.search(english);
		if (node)
			cout << node->getmorse();
		else
			cout << english;
	}
}





