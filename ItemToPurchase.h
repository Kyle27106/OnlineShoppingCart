#ifndef SHOPPINGCART_ITEMTOPURCHASE_H
#define SHOPPINGCART_ITEMTOPURCHASE_H
#include <string>

#include <string>

using namespace std;

// Base class definition
class ItemToPurchase {
public:
  ItemToPurchase();
  ItemToPurchase(string, string, int, int);
  void SetName(string resitemName);
  string GetName();

  void SetPrice(int resitemPrice);
  int GetPrice();

  void SetQuantity(int resitemQuantity);
  int GetQuantity();

  void SetDescription(string);
  string GetDescription();
  void PrintItemDescription();
  void PrintItemCost();

  string itemName;
  int itemPrice;
  int itemQuantity;
  string itemDescription;
};

#endif
