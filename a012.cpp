#include <iostream>
#include <cstdlib>

using namespace std ; 

int main(void)
{

long long int x,y ; 

while(cin >> x >> y)
{
  if(x>y)
   {
    cout << x-y << endl ; 
   } 
    else
    cout << y-x<< endl ;   
}

return 0 ;
}