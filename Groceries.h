#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#ifndef GROCERIES_
#define GROCERIES_


using namespace std;
//create the Class GroceryItemPurchased in order to store our public and private variable as well as our getters and setters
class GroceryItemPurchased {
public:
	void WriteHisto();
	void ReadGroceryItems();// it reads an allocated the data into a vector
	void ItemsMenu();


private:
	vector<string> itemList; // stores into a vector items into the class GroceryItemPurchased
	vector<int> itemQuantity;

};
#endif
