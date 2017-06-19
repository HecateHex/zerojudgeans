#include <cstdlib>
#include <iostream>

using namespace std ;

int main(void)
{
	int x; 
	int array[5] ;
	while(cin >> x )
	{
		for(int i=1 ;i<=x ;i++)
		{
			for(int j=0 ;j<4;j++)
			{
				cin >> array[j] ; 
			}
			if((array[1]-array[0])==(array[2]-array[1]))
			{
				array[4] = array[3]+(array[1]-array[0]) ;
			}
			else
			{
				array[4] = array[3]*(array[2]/array[1]) ;
			}
			for(int z = 0 ;z<5;z++)
			{
				cout << array[z] <<" " ;
			}
			cout << endl; 
		}
	}

	return 0 ;
}