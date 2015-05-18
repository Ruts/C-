#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int randNo;
	srand(1);
	
	for(int i = 0; i < 10 ; i++)
	{
		randNo = (rand() % 10);
		
		cout << randNo << "\n";
	}
	return 0;
}
