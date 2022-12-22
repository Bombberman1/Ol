#include <iostream>
#include <string>
#include "classp.h"
using namespace std;

int main(){
    SportShoesStore sneakersO;
    sneakersO.SortPrice();
    for(int y = 0; y < 5; y++){
        cout << sneakersO.sneakers[y].brand << "\t";
        cout << sneakersO.sneakers[y].size << "\t";
        cout << sneakersO.sneakers[y].color << "\t";
        cout << sneakersO.sneakers[y].price << "\t";
        cout << sneakersO.sneakers[y].quantity << "\t";
        cout << sneakersO.sneakers[y].material << "\t";
        cout << sneakersO.sneakers[y].number << endl;
    }
    cout << endl;
    sneakersO.SortQuantity();
    for(int y = 0; y < 5; y++){
        cout << sneakersO.sneakers[y].brand << "\t";
        cout << sneakersO.sneakers[y].size << "\t";
        cout << sneakersO.sneakers[y].color << "\t";
        cout << sneakersO.sneakers[y].price << "\t";
        cout << sneakersO.sneakers[y].quantity << "\t";
        cout << sneakersO.sneakers[y].material << "\t";
        cout << sneakersO.sneakers[y].number << endl;
    }
    cout << endl;
    sneakersO.SortNumber();
    for(int y = 0; y < 5; y++){
        cout << sneakersO.sneakers[y].brand << "\t";
        cout << sneakersO.sneakers[y].size << "\t";
        cout << sneakersO.sneakers[y].color << "\t";
        cout << sneakersO.sneakers[y].price << "\t";
        cout << sneakersO.sneakers[y].quantity << "\t";
        cout << sneakersO.sneakers[y].material << "\t";
        cout << sneakersO.sneakers[y].number << endl;
    }
}