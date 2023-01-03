#include <iostream>
#include <windows.h>
using namespace std;
void a();
void b();
void c();
void d();
void gotoxy(int x,int y);


main(){

a();
b();
c();
d();

}
void a()
{
gotoxy(40,1);
cout << "        ##        "  ;
gotoxy(40,2);
cout << "      ##  ##        " ;
gotoxy(40,3);
cout << "     ##    ##        "  ;
gotoxy(40,4);
cout << "    ##      ##        "  ;
gotoxy(40,5);
cout << "   ##        ##        "  ;
gotoxy(40,6);
cout << "  ##############        "  ;
gotoxy(40,7);
cout << " ##            ##        " ;
gotoxy(40,8);
cout << "##              ##        " ;
}
void b()
{
gotoxy(40,9);
cout << "###      ##                 " << endl;
gotoxy(40,10);
cout << "####     ##                " << endl;
gotoxy(40,11);
cout << "## ##    ##               " << endl;
gotoxy(40,12);
cout << "##  ##   ##                " << endl;
gotoxy(40,12);
cout << "##   ##  ##                 " << endl;
gotoxy(40,13);
cout << "##    ## ##                      " << endl;
gotoxy(40,14);
cout << "##     ####                  " << endl;
gotoxy(40,14);
cout << "##      ###                     " << endl;
}


void c()
{
gotoxy(40,15);
cout << "        ##        " << endl;
gotoxy(40,16);
cout << "      ##  ##        " << endl;
gotoxy(40,16);
cout << "     ##    ##        " << endl;
gotoxy(40,17);
cout << "    ##      ##        " << endl;
gotoxy(40,18);
cout << "   ##        ##        " << endl;
gotoxy(40,19);
cout << "  ##############        " << endl;
gotoxy(40,20);
cout << " ##            ##        " << endl;
gotoxy(40,21);
cout << "##              ##        " << endl;
}
void d()
{
gotoxy(40,22);
cout << "        ##                              " << endl;
gotoxy(40,23);
cout << "     ##    ##                          " << endl;
gotoxy(40,24);
cout << "     ##                            " << endl;
gotoxy(40,25);
cout << "     ###                             " << endl;
gotoxy(40,26);
cout << "        ##                          " << endl;
gotoxy(40,27);
cout << "    ##    ##                               " << endl;
gotoxy(40,28);
cout << "     ##     ##                             " << endl;
gotoxy(40,29);
cout << "        #####                       " << endl;
}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates .X = x;
coordinates .Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


    



