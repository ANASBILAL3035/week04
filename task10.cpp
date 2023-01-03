#include <iostream>
using namespace std;
void discount(float, string);
main(){
string country;
float price;
cout << "ENTER COUNTRY NAME:";
cin >> country;
cout << "Enter PRICE OF FLIGHT:";
cin >> price;
while(true)

}

void discount(float price,string country)
{
if(country=="Pakistan")
{
 price=price-price*0.05;
cout << "PRICE IS:" << price;
}
if(country=="Ireland")
{
price=price-price*0.1;
cout << "PRICE IS:" << price;
}
if(country=="India")
{
price=price-price*0.2;
cout << "PRICE IS:" << price;
}
if(country=="England")
{
price=price-price*0.3;
cout << "PRICE IS:" << price;
}
if(country=="Canada")
{
price=price-price*0.45;
cout << "PRICE IS:" << price;
}
}
