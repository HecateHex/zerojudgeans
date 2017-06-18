#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int m,d,s;
cin >> m ;
cin >> d ;
s=(m*2+d)%3;

if(s==0){
 cout << "普通"<<"\n"; 
}else{
 if (s==1){
      cout << "吉"<<"\n"; 
        }else{
   cout  << "大吉"<<"\n";
                   }
}
    return EXIT_SUCCESS;
}