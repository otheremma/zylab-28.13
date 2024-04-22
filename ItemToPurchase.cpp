#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ItemsToPurchase::ItemsToPurchase() : itemName("none"), itemPrice(0), itemQuantity(0) {
}

ItemsToPurchase::ItemsToPurchase(const string& itemName, int itemPrice, int itemQuantity)
    : itemName(itemName), itemPrice(itemPrice), itemQuantity(itemQuantity) {

ItemsToPurchase::ItemsToPurchase(string itemName, int itemPrice, int itemQuantity) {
    this->itemName = itemName;
    this->itemPrice = itemPrice;
    this->itemQuantity = itemQuantity;

void ItemsToPurchase::SetName(string& name) {
  itemName = name;
}

string ItemsToPurchase::GetName() {
  return itemName;
}

void ItemsToPurchase::SetPrice(int price) {
  itemPrice = price;
}

int ItemsToPurchase::GetPrice() {
  return itemPrice;
}

void ItemsToPurchase::SetQuantity(int quantity) {
  itemQuantity = quantity;
}

int ItemsToPurchase::GetQuantity() {
  return itemQuantity;
}
