#pragma once
// Header files
#include "ItemToPurchase.h"
#include "SpecialItem.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// declare class
class ShoppingCart {
  // declare data members
private:
  string customerName;
  string currentDate;
  vector<ItemToPurchase> cartItems;

public:
  // Declare member functions that can access private data members
  ShoppingCart();
  ShoppingCart(string name, string date);
  string GetCustomerName();
  string GetDate();
  void AddItem(ItemToPurchase item);
  void RemoveItem(string itemName);
  void ModifyItem(ItemToPurchase item);
  int GetNumItemsInCart();
  int GetCostOfCart();
  void PrintTotal();
  void PrintDescriptions();
};

