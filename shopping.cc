#include <iostream>
#include "./shopping.h"

using namespace std;

// Push Goods object to shopping_list_ vector
void Shopping::PushList(Goods object) {
  shopping_list_.push_back(object);
}

// Get Goods object from end of shopping_list_ vector
Goods Shopping::GetLastElement() {
  return shopping_list_.back();
}

// Print shopping_list_ Elements
void Shopping::PrintList() {
  for (vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end(); i++) {
    cout << "Goods #" << i->GetIndex() << " - Price : " <<
    i->GetPrice() << endl;
  }
}

// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() {
// vector<Goods>::iterator p = shopping_list_.begin();
  vector<Goods>::iterator min = shopping_list_.end();
  for (vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end()-1; i++) {
    for (vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
      if (min == shopping_list_.end()) {
        min = j;
        continue;
      }
      if (min->GetPrice() > j->GetPrice()) {
        min = j;
      }
    }
    iter_swap(i, min);
    min = shopping_list_.end();
  }
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortByIndex() {
// vector<Goods>::iterator p = shopping_list_.begin();
  vector<Goods>::iterator min = shopping_list_.end();
  for (vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end()-1; i++) {
    for (vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
      if (min == shopping_list_.end()) {
        min = j;
        continue;
      }
      if (min->GetIndex() > j->GetIndex()) {
        min = j;
      }
    }
    iter_swap(i, min);
    min = shopping_list_.end();
  }
}
