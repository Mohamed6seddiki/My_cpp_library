#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

string ColumSperator(int Counter)
{
	if (Counter < 10)
		return "   |";
	else
		return "  |";
}

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number)
{
	if (Number <= 1)
		return enPrimeNotPrime::NotPrime;

	int M = Number / 2;
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

/*
Note: Perfect Number is = Sum(all divisors)
28 = 1 + 2 + 4 + 7 + 14
6 = 1 + 2 + 3
*/

bool isPerfectNumber(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}

	return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (isPerfectNumber(i))
		{
			cout << i << endl;
		}
	}
}

void PrintDigitsInReversedOrder(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}

int SumOfDigits(int Number)
{
	int Sum = 0, Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Remainder;
	}

	return Sum;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}

void PrintAllDigitsFrequencey(int Number)
{
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;

		DigitFrequency = CountDigitFrequency(i, Number);
		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Frequencey is "
				<< DigitFrequency << " Time(s).\n";
		}
	}
}

void PrintDigits(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}

// Input: 
// 1234  no
// 12321 yes is palindrome 

bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

// Input:   Input: 
// 3    5 

// Output:   Output: 
// 333   55555 
// 22    4444 
// 1    333 
//    22 
//    1 

void PrintInvertedNumberPattern(int Number)
{
	cout << "\n";

	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}

		cout << "\n";
	}
}

// Input:   Input: 
// 3    5 

// Output:   Output: 
// 1    1 
// 22    22 
// 333   333 
// 4444 
// 55555 

void PrintNumberPattern(int Number)
{
	cout << "\n";
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}

// Output:   Output: 
// CCC   EEEEE 
// BB    DDDD 
// A    CCC 
//     BB 
//     A 

void PrintInvertedLetterPattern(int Number)
{
	cout << "\n";
	for (int i = 65 + Number - 1; i >= 65; i--)
	{
		for (int j = 1; j <= Number - (65 + Number - 1); j++)
		{
			cout << char(i);
		}

		cout << "\n";
	}
}

// Input:   Input: 
// 3    5 

// Output:   Output: 
// A    A 
// BB    BB 
// CCC   CCC 
// DDDD 
// EEEEE 

void PrintLetterPattern(int Number)
{
	cout << "\n";

	for (int i = 65; i <= 65 + Number - 1; i++)
	{
		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}

		cout << "\n";
	}
}

// All Words from AAA to ZZZ 

// Output: 
// AAA 
// AAB 
// AAC 
// AAD 
// . 
// . 
// . 
// ZZZ 

void PrintWordsFromAAAtoZZZ()
{
	cout << "\n";
	string word = "";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << word << endl;

				word = "";
			}
		}

		cout << "\n____________________________\n";
	}
}

// Guess a 3-Letter Password 

// Input: 
// AAF 

// Output: 
// Trial[1]: AAA 
// Trial[2]: AAB 
// Trial[3]: AAC 
// Trial[4]: AAD 

// Password is AAD 
// Found after 6 Trial(s) 

string ReadPassword()
{
	string Password;
	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> Password;
	return Password;
}

bool GuessPassword(string OriginalPassword)
{
	string word = "";
	int Counter = 0;

	cout << "\n";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Counter++;

				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << "Trial [" << Counter << "] : " << word
					<< endl;

				if (word == OriginalPassword)
				{

					cout << "\nPassword is " << word << "\n";
					cout << "Found after " << Counter << "Trial(s)\n";
						 
						return true;
				}
				word = "";
			}
		}
	}
	return false;
}

// Encrypt/Decrypt Text 

// Text Before Encryption: Mohammed 
// Text After Encryption: Oqjcoogf 
// Text After Decryption: Mohammed

string ReadText()
{
	string Text;
	cout << "Please enter Text?\n";
	getline(cin, Text);
	return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

// Random 3 numbers from 1 to 10 

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

// Output: 
 
// i 
// G 
// $ 
// 7 

enum enCharType { SamallLetter = 1, CapitalLetter = 2, 
SpecialCharacter = 3, Digit = 4 }; 
 
char GetRandomCharacter(enCharType CharType) 
{ 
 switch (CharType) 
 { 
  case enCharType::SamallLetter: 
  { 
   return char(RandomNumber(97, 122)); 
   break; 
  } 
  case enCharType::CapitalLetter: 
  {  
   return char(RandomNumber(65, 90)); 
   break; 
  } 
  case enCharType::SpecialCharacter: 
  { 
   return char(RandomNumber(33, 47)); 
   break; 
  } 
  case enCharType::Digit: 
  { 
   return char(RandomNumber(48, 57)); 
   break; 
  } 
 } 
}

// Generate Keys 
// Output: 
// Key [1]: TQST-MAKQ-ZJSD-QSKW 
// Key [2]: XVIF-RBDD-TASQ-RKRZ 
// Key [3]: TOOY-HXMH-HSWZ-ELQO 
// Key [4]: IXZE-UIYB-HKAZ-AUOU

string GenerateWord(enCharType CharType, short Length)
{
	string Word;
	for (int i = 1; i <= Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
	return Key;
}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}

void ReadArray(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	cout << "\nEnter array elements: \n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (Number == arr[i])
		{
			count++;
		}
	}
	return count;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

int MaxNumberInArray(int arr[100], int arrLength)
{
	int Max = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}

int MinNumberInArray(int arr[100], int arrLength)
{
	int Min = 0;
	Min = arr[0];

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	return Min;
}

int SumArray(int arr[100], int arrLength)
{
	int Sum = 0;

	for (int i = 0; i < arrLength; i++)
	{
		Sum += arr[i];
	}

	return Sum;
}

float ArrayAverage(int arr[100], int arrLength)
{
	return (float)SumArray(arr, arrLength) / arrLength;
}

void CopyArray(int arrSource[100], int arrDestination[100], int
	arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arrDestination[i] = arrSource[i];
}

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100],	int arrLength, int& arr2Lenght)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}
	}
	arr2Lenght = --Counter;
}

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{ 
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}

void SwapNumbers(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}
void FillArrayWith1toN(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}
void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		SwapNumbers(arr[RandomNumber(1, arrLength) - 1],arr[RandomNumber(1, arrLength) - 1]);
	}
}

void CopyArrayInReverseOrder(int arrSource[100], int
	arrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arrDestination[i] = arrSource[arrLength - 1 - i];
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;
	}
	//if you reached here, this means the number is not found 
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1 
	arrLength++;
	arr[arrLength - 1] = Number;
}
void InputUserNumbersInArray(int arr[100], int& arrLength)
{
	bool AddMore = true;
	do
	{
		 
			AddArrayElement(ReadPositiveNumber("Enter a Number : "), arr, arrLength);
		cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
			cin >> AddMore;
	} while (AddMore);
}

void CopyOddNumbers(int arrSource[100], int arrDestination[100], int
	arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		if (arrSource[i] % 2 != 0)
		{
			AddArrayElement(arrSource[i], arrDestination,arrDestinationLength);
		}
}

void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int
	arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			AddArrayElement(arrSource[i], arrDestination,arrDestinationLength);
		}
}

void CopyDistinctNumbersToArray(int arrSource[100], int
	arrDestination[100], int SourceLength, int& DestinationLength)
{
	for (int i = 0; i < SourceLength; i++)
	{
		if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
		{
			AddArrayElement(arrSource[i], arrDestination,DestinationLength);
		}
	};
}

bool IsPalindromeArray(int arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		if (arr[i] != arr[Length - i - 1])
		{
			return false;
		}
	};
	return true;
}

int OddCount(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 != 0)
		{
			Counter++;
		}
	}
	return Counter;
}

int EvenCount(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 == 0)
		{
			Counter++;
		}
	}
	return Counter;
}

int PositiveCount(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] >= 0)
		{
			Counter++;
		}
	}
	return Counter;
}

int NegativeCount(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < 0)
		{
			Counter++;
		}
	}
	return Counter;
}

float MyABS(float Number)
{
	if (Number > 0)
		return Number;
	else
		return Number * -1;
}

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);

	float FractionsPart = GetFractionPart(Number);

	if (FractionsPart >= .5)
	{
		if (Number > 0)
		{
			return ++IntPart;
		}
		else
		{
			return --IntPart;
		}
	}
	else
	{
		return IntPart;
	}
}

int MyFloor(float Number)
{
		if (Number > 0)
			return int(Number);
		else
			return int(Number) - 1;
}

int MyCeil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
	{
		return int(Number);
	}
}

int MySqrt(float Number)
{
	return pow(Number, 0.5);
}