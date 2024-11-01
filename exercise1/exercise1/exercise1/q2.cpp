#include <iostream>
#include <string>
#include <cstring>

using namespace std;


void q2a(char* words[], int* numbers[], int size) {
	

	char* temp = new char[20];
	for (int i = 0; i < size; i++)
	{
		string str;
		cout << "enter a word: ";
		cin >> str;
		cout << "\n";
		char* tempStr = new char[str.length() + 1];


		for (int j = 0;j < str.length(); j++)
		{
			tempStr[j] = str[j];
		}
		tempStr[str.length()] = '\0';
		words[i] = tempStr;
		/////////////////////////////// enter the word array

		int num;
		cout << "enter a number: ";
		cin >> num;
		cout << '\n';
		int digitCount = 0;
		int tempNum = num;
		
		while (tempNum != 0)
		{
			tempNum /= 10;
			digitCount++;
		}
		
		int* tempNumArr = new int[digitCount + 1];
		
		tempNum = num;

		for (int j = 0; j < digitCount; j++)
		{
			tempNumArr[digitCount - 1 - j] = tempNum % 10;
			tempNum /= 10;
		}
		tempNumArr[digitCount] = -1;

		numbers[i] = tempNumArr;
	}
}


//////////////////////////////////////////////////////////////////////


bool StringEqual(char* str1, char* str2)
{
	int i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
		{
			return true;
		}
		i++;
	}
	return false;
}

int GetWordCount(char* words[], char word[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (StringEqual(words[i], word))
		{
			count++;
		}
	}

	return count;
}



int GetDigitCount(int* numbers[], int number, int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; (numbers[i])[j] != -1; j++)
		{
			if ((numbers[i])[j] == number)
			{
				count++;
			}
		}
	}

	return count;
}


void q2b(char* words[], int* numbers[], int size)
{
	int maxWordCount = 0;
	int maxWordIndex = 0;
	int currWordCount = 0;
	int currWordIndex = 0;

	for (int i = 0; i < size; i++)
	{
		currWordCount = GetWordCount(words, words[currWordIndex], size);
		if (maxWordCount < currWordCount)
		{
			maxWordCount = currWordCount;
			maxWordIndex = currWordIndex;
		}
	}
	cout << "most repitted word is: " << words[maxWordIndex] << '\n';

	int maxDigitCount = 0;
	int maxDigit = 0;
	int currDigitCount = 0;
	int currDigit = 0;

	for (int i = 0; i <= 9; i++)
	{
		currDigit = i;
		currWordCount = GetDigitCount(numbers, currDigit, size);
		if (maxDigitCount < currDigitCount)
		{
			maxDigitCount = currDigitCount;
			maxDigit = currDigit;
		}
	}
	cout << "most repitted digit is: " << maxDigit << '\n';
}



void ReleaseAll(char* words[], int* numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		delete[] words[i];
		delete[] numbers[i];
	}

	delete words;
	delete numbers;
}

//
//int main() {
//
//    const int size = 3;
//	char* words[size];
//	int* numbers[size];
//	
//	
//	// q2a check ----------------------------------
//	//q2a(words, numbers, size);
//
//	//for (int i = 0; i < size; i++)
//	//{
//	//	cout << "word " << i << ": " << words[i] << "\n";
//	//	cout << "number " << i << ": ";
//	//	
//	//	for (int j = 0; ((numbers[i])[j]) != -1; j++)
//	//	{
//	//		cout << (numbers[i])[j] << " ";
//	//		int tempNumber = (numbers[i])[j];
//	//	}
//	//	cout << "\n";
//	//}
//	//
//	// ----------------------------------------------
//
//	//int* nums[2];
//	//int digits[4];
//	//
//	//for (int i = 0; i < 2; i++)
//	//{
//	//	digits[i] = i;
//	//}
//	//digits[4] = -1;
//	//nums[0] = digits;
//
//	//cout << GetWordCount(str, str4, 3);
//
//
//    return 0;
//}