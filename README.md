# Problem-Solving-3
# Random Character Generator

This program generates random characters based on the specified type. It uses the `rand()` function to generate random numbers and maps them to corresponding ASCII values for different character types.

## Features

- **Random Character Generation**: Generates random characters of the following types:
  - Special Characters
  - Numbers
  - Small Letters
  - Capital Letters

- **Enum-Based Character Type Selection**: Uses an `enum` to define character types for better readability and maintainability.

## Code Overview

1. **Enum Definition**:
   - `DigitType` is an enumeration that defines the following character types:
     - `SpcialChar` (Special Characters)
     - `Number` (Digits)
     - `SmallLetter` (Lowercase Letters)
     - `CapitalLetter` (Uppercase Letters)

2. **RandomDigit Function**:
   - Accepts a range (`from` and `to`) and generates a random character within that range using the `rand()` function.

3. **PrintDigit Function**:
   - Accepts a `DigitType` and prints a random character of the specified type by calling `RandomDigit` with appropriate ASCII ranges:
     - Special Characters: ASCII 21–47
     - Numbers: ASCII 48–57
     - Capital Letters: ASCII 65–90
     - Small Letters: ASCII 97–122

4. **Main Function**:
   - Initializes the random number generator using `srand()`.
   - Calls `PrintDigit` for each character type to display random characters.

## How to Run

1. Compile the code using a C++ compiler (e.g., `g++`):
   ```bash
   g++ -o RandomCharacterGenerator Solve.cpp

#No Input 

#Examble Output 
A
z
$
5
