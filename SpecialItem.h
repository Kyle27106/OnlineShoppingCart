#pragma once
#include <string>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
#include<string>

class SpecialItem:  public ItemToPurchase{

private: 
    string type;

public: 
    SpecialItem();
    void SetType(string addItemType);
    string GetType();
};

