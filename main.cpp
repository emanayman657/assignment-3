#include <iostream>
using namespace std;
#include <cmath>

void diamond(int size)
{
    int row, space, star;
    for(row = 1; row <= size; row++){	 	//top half
        for(space = 1; space <= size - row; space++)
            cout << " ";
        for(star = 1; star <= 2 * row - 1; star++)
            cout << "*";
        cout << endl ;
	}
    for(row = size -1; row >= 1; row--){       //bottom half
        for (space = 1; space <= size - row; space++)
            cout << " ";
        for (star = 1; star <= 2 * row - 1; star++)
            cout << "*";
        cout << endl ;
	}

}
