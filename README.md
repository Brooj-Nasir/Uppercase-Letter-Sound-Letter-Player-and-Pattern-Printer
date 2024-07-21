# Uppercase Letter Sound Player and Pattern Printer

## Overview

Welcome to the **Uppercase Letter Sound Player and Pattern Printer**! This interactive C++ console application allows you to enter an uppercase letter and experience both an auditory and visual representation of the letter. For each letter from A to Z, the program plays a unique sound and displays a specific pattern on the console.

## Features

- **Sound Playback**: Each uppercase letter corresponds to a unique sound file (e.g., `A.wav`, `B.wav`).
- **Pattern Display**: For each letter, a distinct ASCII art pattern is displayed on the console.
- **Interactive Input**: User-friendly console input prompts for entering the uppercase letter.

## How to Use

1. **Run the Program**: Execute the compiled program in your preferred C++ development environment or compile and run it using your terminal/command prompt.
2. **Enter an Uppercase Letter**: When prompted, enter an uppercase letter (A-Z).
3. **Experience the Output**: The program will play the corresponding sound and display the pattern for the entered letter.
4. **Exit**: After the pattern is displayed, the program will end with a farewell message.

## Code File

You can view the code for this application [here](main.cpp).

## Requirements

- C++ compiler
- Standard C++ library
- `<windows.h>` and `<mmsystem.h>` for sound functions (Windows-specific)

## Installation

1. **Clone the repository**:
    ```bash
    git clone https://github.com/Brooj-Nasir/Console-Based-Scientific-Calculator.git
    cd Console-Based-Scientific-Calculator
    ```
2. **Compile the program**:
    ```bash
    g++ -o letter_sound_player main.cpp -lwinmm
    ```
3. **Run the program**:
    ```bash
    ./letter_sound_player
    ```

## Contributions

Contributions are welcome! Please fork this repository and create a pull request with your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Sample Code

Here's a snippet of the main functionality:

```cpp
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

int main(int argc, char** argv) {
    char ch;
    cout << "Enter upper case letter: ";
    cin >> ch;
    switch(ch) {
        case 'A': {
            PlaySound(TEXT("A.wav"), NULL, SND_SYNC);
            cout << "    A   \n";
            cout << "A      A\n";
            cout << "A       A\n";
            cout << "AAAAAAAAA\n";
            cout << "A       A\n";
            cout << "A       A\n";
            break;
        }
        case 'B': {
            PlaySound(TEXT("B.wav"), NULL, SND_SYNC);
            cout << "BBBBB" << endl;
            cout << "B    B" << endl;
            cout << "BBBBB" << endl;
            cout << "B   B" << endl;
            cout << "BBBB" << endl;
            break;
        }
        // Add cases for C to Z
        default:
            cout << "Invalid input! Please enter an uppercase letter A-Z." << endl;
    }
    cout << "BYE!";
    return 0;
}
