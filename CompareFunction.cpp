#include <cstdlib>
#include <iostream>

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
	int i, j;
	
	printf ("Please enter First number: ");
    scanf ("%d",&i);
    
    printf ("Please enter Second number: ");
    scanf ("%d",&j);
	
	int answer = compare(i,j);
	
	if(answer == 1)
	{
		cout << "Retuned = "<< answer << "  the first number is greater";
	}
	else if(answer == 0)
	{
		cout << "Retuned = "<< answer << "  the numbers are equal";
	}
	else if(answer == -1)
	{
		cout << "Retuned = "<< answer << "  the second number is greater";
	}
	
	return 0;
}
