#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int compare(int k, int l)
{
	if(k > l)
	{
		return 1;
	}
	else if(k == l)
	{
		return 0;
	}
	else if(k < l)
	{
		return -1;
	}
} 

int main()
{
	int randNo, guess, guessNo = 0;
	srand(time(NULL));
	
	randNo = (rand() % 100)+1;
	
	do
	{
		printf ("\n\nPlease enter your guess; ");
    	scanf ("%d",&guess);
	
		int answer = compare(guess,randNo);
		
		if(answer == 1)
		{
			cout << "Your guess is greater than the actual";
			guessNo++;
		}
		else if(answer == 0)
		{
			cout << "Congratulations, you guessed right";
			guessNo++;
			cout << "You used " << guessNo << " guesses";
		}
		else if(answer == -1)
		{
			cout << "Your guess is smaller then the actual";
			guessNo++;
		}
	}while(randNo != guess);
		
	return 0;
}
