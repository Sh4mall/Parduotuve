#pragma once
#include <string>
using namespace std;

void AddProduct(vector<Product>& products) {
	string new_product;
	int quantity_new_product;
	double cost_new_product;

	cout << "Add product: ";
	cin >> new_product;
	cout << "Quantity: ";
	cin >> quantity_new_product;
	cout << "Cost: ";
	cin >> cost_new_product;

	products.push_back({ new_product, cost_new_product, quantity_new_product });
}