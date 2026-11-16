#pragma once
#include <vector>
#include <algorithm>
#include "product.h"

using namespace std;

// helper function so sort() can work with our custom structure of Product
struct {
	bool operator()(const Product& a, const Product& b) const { return a.quantity < b.quantity; }
} cmp;

void sortByQuantity(vector<Product>& products){
	if(products.size() > 0) sort(products.begin(), products.end(), cmp);
}
