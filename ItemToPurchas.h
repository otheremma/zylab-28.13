#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;
class ItemToPurchase {

private:
string itemName; //Initialized in default constructor to "none"
int itemPrice; // Initialized in default constructor to 0
int itemQuantity; // Initialized in default constructor to 0

public:
void SetName(string userName);
void SetPrice(int userPrice);
void SetQuantity(int userQ);
string GetName();
int GetPrice();
int GetQuantity();}



#endif
