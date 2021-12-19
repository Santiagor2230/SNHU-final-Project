#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <stdlib.h>
#include "Groceries.h"

using namespace std;

// this function allows us to read the file that is needed to be open
void GroceryItemPurchased::ReadGroceryItems() {
	ifstream inFS; // allows to read a file
	string items; // its to show the items
	int itemNum; // it shows quantatity of numbers


	inFS.open("frequency.dat"); //open file

	if (!inFS.is_open()) {
		cout << "frequency.dat, doesnt exist" << endl; //exception error if file does not open
	}

	while (!inFS.eof()) { // allows to grab all the files information from string to string
		inFS >> items;
		inFS >> itemNum;

		if (!inFS.fail()) { // sets the neccesary values to the variable items in a vector and numbers
			itemList.push_back(items);
			itemQuantity.push_back(itemNum);

		}
	}


	inFS.close(); // close file

}

//function that shows the main menu
void GroceryItemPurchased::ItemsMenu() {
	cout << "This is the Menu" << endl;
	cout << "if you wish to Display how many items have been sold today type: 1" << endl;
	cout << "if you wish to Display a specific item type: 2" << endl;
	cout << "if you wish to see Display Histogram type: 3" << endl;
	cout << "if you wish to exit type: 4" << endl << endl;
}

//function that creates a histogram out of a file
void GroceryItemPurchased::WriteHisto() {
	int i;
	for (i = 0; i < itemList.size(); ++i) {
		string histo(itemQuantity.at(i), '*');
		system("color 0A"); //changes the color to green
		cout <<left << setw(12) << itemList.at(i) << histo << endl;
	
	}

}
