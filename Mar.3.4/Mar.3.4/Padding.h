#ifndef PADDING_H
#define PADDING_H
#include <iostream>
using namespace std;

class Padding
{
private:
	double padPrice;
public:
	Padding(double p);
	double getPadPrice();
};
Padding::Padding(double p)
{
	padPrice = p;
}
double Padding::getPadPrice()
{
	return padPrice;
}

#endif // !PADDING_H