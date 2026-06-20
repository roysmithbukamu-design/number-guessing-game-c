# Number Guessing Game in C

## Overview

The Number Guessing Game is a simple command-line application developed in C. The program generates a random number between 1 and 100, and the user attempts to guess it. After each guess, the program provides feedback indicating whether the guess is too high or too low until the correct number is found.

---

## Features

* Random number generation
* User input handling
* Feedback for incorrect guesses
* Guess attempt counter
* Simple and interactive command-line interface

---

## Technologies Used

* C Programming Language
* Standard C Libraries:

  * `stdio.h`
  * `stdlib.h`
  * `time.h`

---

## Program Flow

1. Initialize the random number generator.
2. Generate a random number between 1 and 100.
3. Prompt the user to enter a guess.
4. Compare the guess with the generated number.
5. Display:

   * "Too high" if the guess is larger.
   * "Too low" if the guess is smaller.
6. Repeat until the correct number is guessed.
7. Display the total number of attempts.

---

## Sample Output

```text
🎮 Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.

Enter your guess: 50
Too low! Try again.

Enter your guess: 75
Too high! Try again.

Enter your guess: 63
🎉 Congratulations! You guessed it in 3 tries!
```

---

## Concepts Demonstrated

This project demonstrates:

* Variables and data types
* Loops (`do...while`)
* Conditional statements (`if`, `else if`, `else`)
* Random number generation
* User input and output
* Program logic and problem-solving

---

## Future Improvements

Potential enhancements include:

* Difficulty levels (Easy, Medium, Hard)
* Limited number of attempts
* High-score tracking
* Replay option
* Graphical user interface (GUI)
* Multiplayer mode

---

## Author

**Roysmith Bukamu**

Software Engineering Student
Murang'a University of Technology

GitHub: https://github.com/roysmithbukamu-design
