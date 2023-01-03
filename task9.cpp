#include <iostream>
using namespace std;
string num1;

void convert(string);
main(){
cout << "Enter WORD";
cin >> num1;

convert(num1); 



}
void convert(string x){
  if(x=="TRUE")
{
cout << "FALSE";
}

if(x=="FALSE")
{
cout << "TRUE";
}  
}