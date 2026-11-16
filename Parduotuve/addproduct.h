#pragma once
#include <string>
#include <iostream>

using namespace std;

void AddProduct(vector<Product>& products) {
	string new_product;
	int quantity_new_product;
	double cost_new_product;

	cout << "Add product: ";
	getline(cin, new_product);
	cin.ignore(4092, '\n');
	cout << "Quantity: ";
	cin >> quantity_new_product;
	cout << "Cost: ";
	cin >> cost_new_product;

	products.push_back({ new_product, cost_new_product, quantity_new_product });
}
