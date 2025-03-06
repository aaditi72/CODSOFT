# CODSOFT

# Take-1 : Guess the Number Game 

A simple number-guessing game written in C++ where the player tries to guess a randomly generated number between 1 and 100.

## Features 
- Generates a random number between 1 and 100.
- Provides hints if the guess is too high or too low.
- Tracks the number of attempts.
- Displays a congratulatory message when the correct number is guessed.

## How to Play 
1. The game will generate a random number between 1 and 100.
2. You will be prompted to enter your guess.
3. If your guess is too low, the game will prompt you to guess higher.
4. If your guess is too high, the game will prompt you to guess lower.
5. Keep guessing until you find the correct number.
6. The game will display the number of attempts taken to guess correctly.

## Example Output 
```bash
Guess the number between 1 and 100!
Enter your guess: 30
Too low! Try again.
Enter your guess: 60
Too high! Try again.
Enter your guess: 45
Too low! Try again.
Enter your guess: 52
Congratulations! You guessed the number 52 in 4 attempts.
```

Note: The output will vary depending on the randomly generated number and the user's guesses.


# Task-2 : Calculator Program

## Description
This is a simple command-line calculator built in C++. It allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Features
- Supports four operations: Addition (+), Subtraction (-), Multiplication (*), and Division (/).
- Handles invalid inputs for operators.
- Prevents division by zero.
- User-friendly interaction.

## How to Use
1. Run the program.
2. Enter the first number.
3. Choose an operator (+, -, *, /).
4. Enter the second number.
5. View the result.

## Example Output 
```bash
Enter first number: 12
Enter an operator (+, -, *, /): *
Enter second number: 4
Result: 48
```
```bash
Enter first number: 10
Enter an operator (+, -, *, /): /
Enter second number: 0
Error: Division by zero is not allowed.
```


# Task-3 : Tic-Tac-Toe Game

## Description
This is a simple console-based Tic-Tac-Toe game implemented in C++. The game allows two players to take turns placing their marks ('X' and 'O') on a 3x3 grid. The game checks for a win, draw, and also provides an option to play again.

## Features
- Two-player mode.
- Validates player moves.
- Checks for win conditions (rows, columns, and diagonals).
- Detects a draw when all spots are filled.
- Option to restart the game.

## How to Play
1. The game starts with Player X.
2. Players take turns entering a number (1-9) corresponding to a grid position.
3. The game updates the board and switches players.
4. The game continues until a player wins or the board is full (draw).
5. Players are given an option to restart the game.

## Example Output
```
 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

Player X, enter a number (1-9): 5

 1 | 2 | 3 
-----------
 4 | X | 6 
-----------
 7 | 8 | 9 

Player O, enter a number (1-9): 1

 O | 2 | 3 
-----------
 4 | X | 6 
-----------
 7 | 8 | 9 

...
Player X wins!
Do you want to play again? (y/n):
```


# Task-4 : To-Do List Manager

## Description
The **To-Do List Manager** is a simple command-line application that allows users to manage their tasks efficiently. Users can add new tasks, view existing tasks, mark tasks as completed, and remove tasks from the list.

## Features
- Add a new task to the list.
- View all tasks with their statuses (Pending/Completed).
- Mark a task as completed.
- Remove a task from the list.
- Simple and user-friendly command-line interface.

## Usage
Upon running the program, you will be presented with the following menu:
```
To-Do List Manager
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 
```
- Choose an option by entering the corresponding number.
- Follow the prompts to add, mark, remove, or view tasks.
- Select option **5** to exit the program.

## Example Output
```
To-Do List Manager
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 1
Enter task description: Finish my C++ project
Task added successfully!

Enter your choice: 2
To-Do List:
1. Finish my C++ project [Pending]

Enter your choice: 3
Enter task number to mark as completed: 1
Task marked as completed!

Enter your choice: 2
To-Do List:
1. Finish my C++ project [Completed]

Enter your choice: 5
Exiting program.
```


# Task-5 : Library Management System

## Description
The **Library Management System** is a simple command-line application for managing books and borrowers. It allows librarians or users to add books, search for books, checkout and return books, and calculate fines for overdue books.

## Features
- **Add Book**: Add new books to the library database.
- **Search Book**: Find books by title, author, or ISBN.
- **Checkout Book**: Borrow a book from the library.
- **Return Book**: Return a borrowed book to the library.
- **Calculate Fine**: Determine the fine for overdue books.
- **Exit**: Close the program.

## Usage
Upon running the program, you will be presented with the following menu:
```
Library Management System
1. Add Book
2. Search Book
3. Checkout Book
4. Return Book
5. Calculate Fine
6. Exit
Enter your choice: 
```
- Choose an option by entering the corresponding number.
- Follow the prompts to add, search, checkout, return, or calculate fines for books.
- Select option **6** to exit the program.

## Example Usage
### Adding a Book:
```
Enter book title: The Great Gatsby
Enter author: F. Scott Fitzgerald
Enter ISBN: 9780743273565
Book added successfully!
```

### Searching for a Book:
```
Enter title, author, or ISBN to search: The Great Gatsby
Found: The Great Gatsby by F. Scott Fitzgerald (9780743273565) - Available
```

### Checking Out a Book:
```
Enter ISBN of book to checkout: 9780743273565
Enter borrower's name: John Doe
Book checked out successfully!
```

### Returning a Book:
```
Enter ISBN of book to return: 9780743273565
Book returned successfully!
```

### Calculating Fine:
```
Enter borrower's name: John Doe
Enter overdue days: 3
Fine amount: Rs. 15
```





