#include <unistd.h>

int _putchar(char c)
{
  return write(1, &c, 1);
}

int _islower(int c)
{
  return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
  return (n < 0 ? -n : n);
}

int _isupper(int c)
{
  return (c >= 'A' && c <= 'Z');
}
Compile the source file as a shared library:
csharp
Copy code
$ gcc -shared -o libdynamic.so dynamic.c
The libdynamic.so file should now be created in the current directory. You can test the library by creating a new file called main.c with the following code:
c
Copy code
#include <stdio.h>
#include "dynamic.h"

int main()
{
  printf("%d\n", _putchar('a'));
  printf("%d\n", _islower('a'));
  printf("%d\n", _isalpha('a'));
  printf("%d\n", _abs(-5));
  printf("%d\n", _isupper('A'));

  return 0;
}
Compile the main.c file and link it with the libdynamic.so library:
css
Copy code
$ gcc -o main main.c -L. -ldynamic
Run the main executable to test the library:
shell
Copy code
$ ./main
The output should be:

css
Copy code
a
1
1
5
1
Note that the header file dynamic.h should be created with the function declarations and included in both the dynamic.c file and the main.c file.




ilieas300@gmail.com
how do i edit in VI
VI is a popular command-line text editor in Unix-like operating systems. Here are the basic steps to edit a file in VI:

Open the terminal and navigate to the directory where the file you want to edit is located.

Type vi followed by the name of the file you want to edit:

Copy code
vi filename.txt
Once the file is open, you'll be in the "command mode". In this mode, you can use keyboard shortcuts to perform actions like moving the cursor, deleting text, copying and pasting text, etc.

To start editing, switch to "insert mode" by pressing the i key. You can then type or paste text as needed.

When you're done editing, press the Esc key to switch back to command mode.

To save your changes and exit VI, type :wq (write and quit) and press Enter. If you want to exit without saving changes, type :q! and press Enter.

If you want to save changes without quitting, you can type :w and press Enter.

These are just the basic steps for editing in VI. There are many other keyboard shortcuts and commands you can use to navigate and edit text in VI. You can find more information on these by typing :help in command mode.




