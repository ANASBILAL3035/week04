#include <iostream>
using namespace std;
main()
{
  int numberRose;
  int numberwRose;
  int numberTulip;
  float priceRose = 2;
  float pricewrose = 4.1;
  float priceTulip = 2.5;
  float total;
  cout << "Enter the number of red roses : ";
  cin >> numberRose;
  cout << "Enter the number of white roses : ";
  cin >> numberwRose;
  cout << "Enter the number of tulip : ";
  cin >> noTulip;
  total = numberRose*priceRose + numberwRose*pricewrose + numberTulip*priceTulip;
  
       if(total > 200)
       {
    cout << "The original price is : " << total << endl;
    total = total - total*0.2;
    cout << "The total price is : " << total;
      }
     if(total <= 200)
{
cout << "The total price is : " << total;
}
}