#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int a;
 while (cin >> a){
 if((a%4==0)&&(a%100!=0)||(a%400==0)){ 
 cout  <<"閏年"  <<"\n" ;
 }else{
 cout  <<"平年" <<"\n" ;
 }
}
    //system("PAUSE");
    return EXIT_SUCCESS;
}