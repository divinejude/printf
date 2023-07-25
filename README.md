Project: Custom Printf Function
Description
In this group project, our objective is to create a custom printf function in C, which will produce output according to a given format. The function will be able to handle specific conversion specifiers for characters (c), strings (s), and the percentage symbol (%). Additionally, we will extend its capabilities to handle decimal (d) and integer (i) conversion specifiers.

Team Members
Julien Barbier (Co-founder & CEO)
Zineb RAFI
Divine Okeke
Project Schedule
Project Start: Jul 21, 2023, 8:00 AM
Checker Release: Jul 22, 2023, 2:00 PM
Project End: Jul 26, 2023, 8:00 AM
Auto Review Launch: Jul 26, 2023, 8:00 AM
Concepts Covered
During the development of this project, we will be focusing on the following concepts:

Group Projects
Pair Programming - How To
Flowcharts
Technical Writing
Requirements
General
Allowed Editors: vi, vim, emacs
Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
All files must end with a new line
A README.md file, at the root of the project folder, is mandatory
Code should adhere to the Betty style, and it will be checked using betty-style.pl and betty-doc.pl
Usage of global variables is not allowed
Each file should contain no more than 5 functions
The function prototypes should be included in the main.h header file
All header files should be include guarded
Do not include a main function in the root directory of your project
Authorized Functions and Macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Tasks
Task 0: I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Create a function with the following prototype:

c
Copy code
int _printf(const char *format, ...);
This function will produce output according to the given format string. It should handle conversion specifiers for characters (c), strings (s), and the percentage symbol (%). The function should return the number of characters printed (excluding the null byte used to end output to strings).

Task 1: Education is when you read the fine print. Experience is what you get if you don't
Extend the custom printf function to handle conversion specifiers for decimal (d) and integer (i) values.

GitHub Repository
The project should have a GitHub repository with a proper README.md file explaining the purpose, tasks, and any relevant information about the implementation of the custom printf function.

With this project, we aim to develop a fully functional custom printf function that can handle various conversion specifiers while adhering to the specified requirements and constraints. We will collaborate as a team, and we strongly encourage working together on creating an extensive set of tests to ensure the accuracy and robustness of the custom printf function. Plagiarism is strictly forbidden, and we will ensure the originality and authenticity of our work.
