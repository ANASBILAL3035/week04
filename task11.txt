#include <iostream>
using namespace std;
void traffic(int);
main(){
  int speed;
  cout << "Enter the speed please:";
  cin >> speed;
  traffic(speed);
}

void traffic(int speed)
{
  if(speed >= 100)
       {
    cout << "HALT..YOU WILL BE CHALLANGED";
      }
  if(speed < 100)
      {
    cout << "You are going good";
       }
}