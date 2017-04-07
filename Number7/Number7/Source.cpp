//Chance Daily//
//Assignment 2.4, Problem #7 4-5-2017// 

#include <iostream>

int main(){

	double americanDollars, britishPounds, mexicanPesos, japaneseYen;

	std::cout << "How many American dollars do you have? ";
	std::cin >> americanDollars;

	britishPounds = americanDollars * .6318;
	mexicanPesos = americanDollars * 12.8863;
	japaneseYen = americanDollars * 82.34;

	std::cout << "You have " << britishPounds << " British Pounds" << std::endl;
	std::cout << "You have " << mexicanPesos << " Mexican Pesos" << std::endl;
	std::cout << "You have " << japaneseYen << " Japanese Yen" << std::endl;

}