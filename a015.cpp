#include <iostream>
#include <cstdlib>

using namespace std ;

int main(void){

	int x,y ; 

	while(cin >> x >> y)
	{
		int array[x][y] ;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				cin >> array[i][j] ;
			}
		}

		for(int i=0;i<y;i++)
		{
			for(int j=0;j<x;j++)
			{
				cout << array[j][i] << " " ; 
			}
			cout << endl;
		}
	}
	return 0 ;
}