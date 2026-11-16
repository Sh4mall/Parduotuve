#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Product.h"


using namespace std;

void pritaikytiNuolaida(vector<Product>& products) {
    std::string kodas;
    std::cout << "iveskite koda\n";
    std::cin >> kodas;
    if (kodas == "SALE10") {
        for (size_t i = 0; i < products.size(); i++)
        {
            products[i].price = products[i].price * 0.90;
            cout << "10% nuolaidos kodas pritaikytas" << endl;

        }
    }
    else {
        cout << "Neteisingas kodas" << endl;
    }
}
