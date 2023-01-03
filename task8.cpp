#include <iostream>
using namespace std;
int num1;
int num2;
void equal(int,int);
main(){
cout << "Enter First number";
cin >> num1;
cout << "Enter 2nd number";
cin >> num2;
equal(num1,num2); 



}
void equal(int x,int y){
  if(x==y)
{
cout << "TRUE";
}

if(x!=y)
{
cout << "FALSE";
}  
}