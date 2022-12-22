#include <iostream>
#include <string>
using namespace std;

class Sneakers{
    public:
    string brand;
    double size;
    string color;
    double price;
    int quantity;
    string material;
    int number;
    Sneakers(string brand, double size, string color, double price, int quantity, string material, int number){
        this -> brand = brand;
        this -> size = size;
        this -> color = color;
        this -> price = price;
        this -> quantity = quantity;
        this -> material = material;
        this -> number = number;
    }
};
class SportShoesStore{
    public:
    Sneakers sneakers[5] = {
    Sneakers("Nike", 41, "red", 4070.50, 2500, "leather", 40000),
    Sneakers("Adidas", 43, "black", 3000, 4200, "textile", 90000),
    Sneakers("Gucci", 40, "white", 20000, 2100, "leather", 65000),
    Sneakers("O-White", 41, "green", 18750, 2000, "leather", 78000),
    Sneakers("Puma", 39, "gray", 2500, 4100, "textile", 87000)
    };
    double SortPrice(){
	    for(int i = 1; i < 5; i++){
		    int j = i - 1;
		    while(j >= 0 && sneakers[j].price > sneakers[j + 1].price){
			    swap(sneakers[j], sneakers[j + 1]);
			    j--;
		    }
	    }
    }
    int SortQuantity(){
	    for(int i = 1; i < 5; i++){
		    int j = i - 1;
		    while(j >= 0 && sneakers[j].quantity < sneakers[j + 1].quantity){
			    swap(sneakers[j], sneakers[j + 1]);
			    j--;
		    }
	    }
    }
    int SortNumber(){
	    for(int i = 1; i < 5; i++){
		    int j = i - 1;
		    while(j >= 0 && sneakers[j].number < sneakers[j + 1].number){
			    swap(sneakers[j], sneakers[j + 1]);
			    j--;
		    }
	    }
    }
};