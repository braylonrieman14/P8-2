/*
* File: P8.1.cpp
* Author : Braylon Rieman
* Date : 10 / 24 / 2024
*
* Description : Vowel Counter
*
*/

#include <iostream>
#include <string>
using namespace std;

//function prototypes
int countWords(string str);

int main(void)
{	
	cout << "Word count: " << countWords("test hi what");
}

int countWords(string str)
{
	int wordTotal = 1;
	char currentChar;

	for (int i = 0; i < str.length(); i++)
	{
		currentChar = str[i];
		if (currentChar == ' ' && str[i + 1] != ' ')
			wordTotal++;
	}

	return(wordTotal);
}
