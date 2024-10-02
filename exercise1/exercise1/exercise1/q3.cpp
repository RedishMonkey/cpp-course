#include <iostream>
using namespace std;

char** SeperateString(const char* input, int& numUpper, int& numLower, int& num)
{
	// array on 0 is lower case letters
	// array on 1 is upper case characters
	// array on 2 is numbers

	char** arrays = new char* [3];
	char* numLowerArr = new char[numUpper];
	char* numUpperArr = new char[numUpper];
	char* numArr = new char[num];
	int lowerCount = 0;
	int upperCount = 0;
	int numCount = 0;

	for (int i = 0; i != numUpper + numLower + num; i++)
	{
		int asciRep = input[i];
		char character = input[i];
		if (asciRep >= 97 && asciRep <= 122)
		{
			numLowerArr[lowerCount] = input[lowerCount];
			lowerCount++;
		}
		else if (asciRep >= 65 && asciRep <= 90)
		{
			numUpperArr[i] = input[i];
			upperCount++;
		}

		else
		{
			numArr[i] = input[i];
			numCount++;
		}
	}

	arrays[0] = numLowerArr;
	arrays[1] = numUpper;
	arrays[2] = numArr;
}

int main()
{	
	
	
	
	return 0;
}