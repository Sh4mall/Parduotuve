#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "product.h"

void showProducts(const std::vector<Product>& products) {

	std::string lowQuantity = "";

    for (size_t i = 0; i < products.size(); i++) {
		if(products[i].quantity != 0 && products[i].quantity < 5) lowQuantity = " MAZAI";
        std::cout << i + 1 << ". "
            << std::left << std::setw(10) << products[i].name 
            << std::fixed << std::setprecision(2) << products[i].price << " EUR"
            << "   quantity: " << (products[i].quantity == 0 ? "IŠPARDUOTA" : std::to_string(products[i].quantity)) << lowQuantity << "\n";
		lowQuantity = "";
    }
}

int main() {
    std::vector<Product> products = {
        { "Pienas", 1.20, 30 },
        { "Duona", 0.95, 4 },
        { "Suris", 4.50, 0 }
    };

    int choice = -1;
    while (choice != 0) {
        std::cout << "\n=== Parduotuve ===\n";
        std::cout << "1. Show products\n";
        std::cout << "0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            showProducts(products);
            break;
        case 0:
            std::cout << "Bye!\n";
            break;
        default:
            std::cout << "Unknown option.\n";
        }
    }
    return 0;
}
