#include "SpecialItem.h"
#include "ItemToPurchase.h"

using namespace std;

SpecialItem::SpecialItem() : ItemToPurchase() { type = "None"; }

void SpecialItem::SetType(string addItemType) { type = addItemType; }

string SpecialItem::GetType() { return type; }
