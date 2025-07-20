A comprehensive C++ header library containing essential algorithms, mathematical functions, and utility operations commonly used in programming exercises and competitive programming.<br>
📋 Features<br>
##
Number Theory & Mathematics<br><br>

Prime Number Detection - Efficient algorithm to check if a number is prime<br>
Perfect Numbers - Find and validate perfect numbers (numbers equal to sum of their divisors)<br>
Palindrome Numbers - Check if numbers read the same forwards and backwards<br>
Digit Manipulation - Extract, reverse, sum, and analyze individual digits<br>
Frequency Analysis - Count occurrences of specific digits in numbers<br><br>
##
Pattern Generation<br><br>

Number Patterns - Generate triangular number patterns (normal and inverted)<br>
Letter Patterns - Create alphabetical triangular patterns (A, BB, CCC, etc.)<br>
Password Generation - Generate random passwords and encryption keys<br>
Word Generation - Generate all possible 3-letter combinations (AAA to ZZZ)<br>
##
Cryptography & Security<br><br>

Text Encryption/Decryption - Simple character-shift cipher implementation<br>
Password Guessing - Brute force password cracking simulation<br>
Random Key Generation - Generate formatted license keys (XXXX-XXXX-XXXX-XXXX)<br><br>
##
Array Operations<br><br>

Basic Operations - Fill, print, copy, and manipulate arrays<br>
Statistical Functions - Calculate min, max, sum, and average of arrays<br>
Filtering - Extract prime numbers, odd/even numbers, and distinct elements<br>
Array Analysis - Check for palindrome arrays, count specific types of numbers<br>
Sorting & Shuffling - Randomize array order and reverse arrays<br><br>
##
Mathematical Utilities<br><br>

Custom Math Functions - Implementations of abs, round, floor, ceil, and sqrt<br>
Random Number Generation - Generate random numbers within specified ranges<br>
Character Generation - Random character generation by type (letters, digits, symbols)<br><br>
##
Input/Output Helpers<br><br>

User Input Validation - Safe positive number input with validation<br>
Formatted Output - Column separators and structured data display<br>
Interactive Arrays - Dynamic array input from users<br><br>
##
📚 Function Categories<br><br>

🔢 Number Theory & Mathematics<br>
| Subcategory | Functions | Description |<br>
|-------------|-----------|-------------|<br>
| **Prime Numbers** | `CheckPrime()`, `CopyPrimeNumbers()` | Check primality and filter prime numbers |<br>
| **Perfect Numbers** | `isPerfectNumber()`, `PrintPerfectNumbersFrom1ToN()` | Find perfect numbers (sum of divisors = number) |<br>
| **Palindrome Check** | `IsPalindromeNumber()`, `IsPalindromeArray()` | Check if numbers/arrays read same forwards/backwards |<br><br>

🧮 Digit Manipulation<br>
| Function | Purpose |<br>
|----------|---------|<br>
| `PrintDigitsInReversedOrder()` | Print digits in reverse order |<br>
| `SumOfDigits()` | Calculate sum of all digits |<br>
| `ReverseNumber()` | Reverse the entire number |<br>
| `CountDigitFrequency()` | Count frequency of specific digit |<br>
| `PrintAllDigitsFrequencey()` | Show frequency of all digits (0-9) |<br>
| `PrintDigits()` | Print each digit separately |<br><br>

🎨 Pattern Generation<br>
| Pattern Type | Functions |<br>
|--------------|-----------|
| **Number Patterns** | `PrintNumberPattern()`, `PrintInvertedNumberPattern()` |<br>
| **Letter Patterns** | `PrintLetterPattern()`, `PrintInvertedLetterPattern()` |<br>
| **Word Generation** | `PrintWordsFromAAAtoZZZ()` |<br><br>

🔐 Security & Cryptography<br>
| Feature | Functions | Usage |<br>
|---------|-----------|-------|<br>
| **Text Encryption** | `EncryptText()`, `DecryptText()` | Simple character-shift cipher |<br>
| **Password Tools** | `ReadPassword()`, `GuessPassword()` | Password input and brute force simulation |<br>
| **Key Generation** | `GenerateWord()`, `GenerateKey()`, `GenerateKeys()` | Generate random passwords and license keys |<br><br>

🎲 Random Generation<br>
| Type | Functions | Output |<br>
|------|-----------|--------|
| **Numbers** | `RandomNumber()` | Random integers in range |<br>
| **Characters** | `GetRandomCharacter()` | Random chars by type (letter/digit/symbol) |<br>
| **Arrays** | `FillArrayWithRandomNumbers()`, `ShuffleArray()` | Fill/shuffle arrays randomly |<br><br>

📊 Array Operations<br><br>

Basic Operations<br>
| Function | Purpose |<br>
|----------|---------|<br>
| `ReadArray()` | Input array from user |<br>
| `PrintArray()` | Display array elements |<br>
| `FillArrayWith1toN()` | Fill array with consecutive numbers |<br>
| `CopyArray()` | Copy entire array |<br>
| `CopyArrayInReverseOrder()` | Copy array in reverse order |<br><br>

Analysis & Statistics<br>
| Function | Returns |<br>
|----------|---------|<br>
| `MaxNumberInArray()` | Maximum value |<br>
| `MinNumberInArray()` | Minimum value |<br>
| `SumArray()` | Sum of all elements |<br>
| `ArrayAverage()` | Average of elements |<br>
| `TimesRepeated()` | Frequency of specific number |<br><br>

Filtering & Searching<br>
| Function | Purpose |<br>
|----------|---------|<br>
| `CopyOnlyPrimeNumbers()` | Extract only prime numbers |<br>
| `CopyOddNumbers()` | Extr<br>
##
🚀 Usage<br><br>

Simply include the header file in your C++ project:<br>

#include "Header.h"<br><br>

int main() {<br>
    // Example: Check if a number is prime<br>
    if (CheckPrime(17) == Prime) <br>
    {<br>
        cout << "17 is prime!" << endl;<br>
    }<br><br>
    
   //Example: Generate random keys<br>
    GenerateKeys(5);<br><br>
    
   //Example: Work with arrays<br>
    int arr[100];<br>
    int length = 0;<br>
    FillArrayWithRandomNumbers(arr, length);<br>
    PrintArray(arr, length);<br><br>
    
   return 0;<br>
}<br>

