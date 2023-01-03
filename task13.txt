#include <iostream>
using namespace std;
main(){
  int holidays, workingDays, pTime, hours, min;
  float temp1, temp2, differance;
  cout << "Enter the holidays : ";
  cin >> holidays;
  workingDays = 365 - holidays;
  pTime = workingDays*63 + holidays*127;
  differance = 30000 - pTime;
  if(diff > 0)
{   
    cout << "Tom will run away" << endl;
    temp1 = diff / 60;
    hours = temp1;
    temp2 = hours;
    min = (temp1 - temp2) * 60;
    cout << hours << " Hours " << min << "  minutes he spend less to play.";
}
  if(diff <= 0)
  {
cout << "Tom sleeps well" << endl;
diff = -diff;
temp1 = diff / 60;
    hours = temp1;
    temp2 = hours;
    min = (temp1 - temp2) * 60;
 cout << hours << " Hours " << min << " minutes more to play";
}
}