#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>

using namespace std;

int encrypt(string word)
{
	for(int i = 0; i < word.length(); i++)
	{
		int a1 = int(word[i]);
		
		if(a1 > (128 - word.length()))
		{
			a1 = a1 - 128;
		}
		
		char a2 = char(a1 + word.length());
		replace( word.begin(), word.end(), word[i], a2 );
	}
	
  	cout << word << endl;
  	
	return 0;
}

int decrypt(string word)
{
	for(int i = 0; i < word.length(); i++)
	{
		int a1 = int(word[i]);
		
		if(a1 <= word.length())
		{
			a1 = (a1 + 128);
		}
		
		char a2 = char(a1 - word.length());
		replace( word.begin(), word.end(), word[i], a2 );
	}
	
  	cout << word << endl;
  	
	return 0;
}

int main ()
{
	int choice;
	string word;
	

		printf ("Please enter the word you wish to encrypte or decrypte;\n");
		getline(cin, word);
		printf ("Please enter your choice;\n");
		printf ("<1> Encrypt\n");
		printf ("<2> Decrypt\n");

	    scanf ("%d",&choice);
	    
    	if(choice == 1)
	    {
	    	encrypt(word);
	    	word.clear();
		}
		if(choice == 2)
	    {
	    	decrypt(word);
	    	word.clear();
		}
}
