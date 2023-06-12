#include <iostream>
using namespace std;
int main()
{
	int doors[101];
    for (int j = 1; j <= 100; j++) {
        for (int i = j; i <= 100; i +=j) {
            if (doors[i] == 0)      
            {
                doors[i] = 1;     
            }
            else
            {
                doors[i] = 0;       
            }
        }
    }

  
	for (int i = 0; i <= 100; i++) {
		if (doors[i]==0) {
			cout << i<<" ";
		}
	}
}

