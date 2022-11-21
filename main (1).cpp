// Kyle Younce
// University of Arizona Global Campus
// INT302
// Professor: Dr. Joshua Reichard
// 5/9/2022

// header files
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
#include "SpecialItem.h"
#include <iostream>
#include <string>
using namespace std;

// AddItem
void AddItem(ShoppingCart &cart) {
  ItemToPurchase addItem;
  string addItemName;
  string addItemDescription;
  int addItemPrice;
  int addItemQuantity;
  cout << "ADD ITEM TO CART" << endl;
  cout << "Enter the item name:" << endl;
  cin.ignore();
  getline(cin, addItemName);
  addItem.SetName(addItemName);
  cout << "Enter the item description:" << endl;
  getline(cin, addItemDescription);
  addItem.SetDescription(addItemDescription);
  cout << "Enter the item price:" << endl;
  cin >> addItemPrice;
  addItem.SetPrice(addItemPrice);
  cout << "Enter the item quantity:" << endl;
  cin >> addItemQuantity;
  addItem.SetQuantity(addItemQuantity);
  cart.AddItem(addItem);
}

// AddSpecialItem()
void AddSpecialItem(ShoppingCart &cart) {
  SpecialItem addItem;
  string addItemName;
  string addItemDescription;
  int addItemPrice;
  int addItemQuantity;
  int addItemType;
  cout << "ADD ITEM TO CART" << endl;
  cout << "Enter the item name:" << endl;
  cin.ignore();
  getline(cin, addItemName);
  addItem.SetName(addItemName);
  cout << "Enter the item description:" << endl;
  getline(cin, addItemDescription);
  addItem.SetDescription(addItemDescription);
  cout << "Enter the item price:" << endl;
  cin >> addItemPrice;
  addItem.SetPrice(addItemPrice);
  cout << "Enter the item quantity:" << endl;
  cin >> addItemQuantity;
  addItem.SetQuantity(addItemQuantity);
  cout << "Enter the item type:" << endl;
  cin >> addItemType;
  cart.AddItem(addItem);
}
// RemoveItem()
void RemoveItem(ShoppingCart &cart) {
  string removeItem;

  cout << endl << "REMOVE ITEM FROM CART" << endl;
  cout << "Enter name of item to remove:" << endl;
  cin.ignore();
  getline(cin, removeItem);
  cart.RemoveItem(removeItem);
}

// ChangeItemQuantity()
void ChangeItemQuantity(ShoppingCart &cart) {
  string changeQuantityItem;
  int changeQuantityNumber;
  ItemToPurchase updateItem;
  cout << "CHANGE ITEM QUANTITY" << endl;
  cout << "Enter the item name:" << endl;
  cin.ignore();
  getline(cin, changeQuantityItem);
  updateItem.SetName(changeQuantityItem);
  cout << "Enter the new quantity:" << endl;
  cin >> changeQuantityNumber;
  updateItem.SetQuantity(changeQuantityNumber);
  cart.ModifyItem(updateItem);
}

// OutputItemsDescriptions()
void OutputItemsDescriptions(ShoppingCart cart, string customerName,
                             string todaysDate) {
  cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
  cout << customerName << "'s Shopping Cart - " << todaysDate << endl;
  cout << endl;
  cart.PrintDescriptions();
}

// OutputShoppingCart()
void OutputShoppingCart(ShoppingCart cart, string customerName,
                        string todaysDate) {
  cout << endl << "OUTPUT SHOPPING CART";
  cout << endl << customerName << "'s Shopping Cart - " << todaysDate;
  cout << endl;
  cart.PrintTotal();
}

// PrintMenu()
void PrintMenu(ShoppingCart cart) {
  // declare local variables
  string customerName;
  string todaysDate;
  char userOption = '1';
  cout << "Enter customer's name:" << endl;
  getline(cin, customerName);
  cout << "Enter today's date:" << endl;
  getline(cin, todaysDate);
  cout << endl << "Customer name: " << customerName;
  cout << endl << "Today's date: " << todaysDate << endl;
  do {
    cout << endl
         << "MENU" << endl
         << "a - Add item to cart" << endl
         << "d - Remove item from cart" << endl
         << "c - Change item quantity" << endl
         << "i - Output items\' descriptions" << endl
         << "o - Output shopping cart" << endl
         << "s - Insert clearance item"

         << endl
         << "q - Quit" << endl;
    do {
      cout << endl << "Choose an option:";
      cin >> userOption;
      if (cin.fail()) {
        cin.clear();
        cin.ignore('\n', 1000);
        return;
      }
    } while (userOption != 'a' && userOption != 'd' && userOption != 'c' &&
             userOption != 'i' && userOption != 'o' && userOption != 'q');
    if (userOption == 'a') {
      AddItem(cart);
    } else if (userOption == 'd') {
      RemoveItem(cart);
    } else if (userOption == 'c') {
      ChangeItemQuantity(cart);
    } else if (userOption == 'i') {
      OutputItemsDescriptions(cart, customerName, todaysDate);
    } else if (userOption == 'o') {
      OutputShoppingCart(cart, customerName, todaysDate);
    } else if (userOption == 's') {
      AddSpecialItem(cart);
    }
  } while (userOption != 'q');

  cout << endl;
}

// declare main
int main() {
  // Create object for the class Shopping cart
  ShoppingCart cart;
  // call the method with the object
  PrintMenu(cart);
  return 0;
}
