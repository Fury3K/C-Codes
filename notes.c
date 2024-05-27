/*
Hi, i am making this program to teach myself how to code. What im doing right now is making a comment. I did this by
typing the characters found before the paragraph im making. I closed down the comment by typing the characters found after 
this paragraph. If testing one of the block of programs in here, please put the other programs in a comment.
*/

/*
This is where you put your C library. Some basic C libraries are which contains a list of specific functions for the program:
assert.h	Program assertion functions
ctype.h	    Character type functions
locale.h	Localization functions
math.h	    Mathematics functions
setjmp.h	Jump functions
signal.h	Signal handling functions
stdarg.h	Variable arguments handling functions
stdio.h	    Standard Input/Output functions
stdlib.h	Standard Utility functions
string.h	String handling functions
time.h	    Date time functions
*/
#include <stdio.h> 
/*
Here, I will be typing the basics of C programming.

A function is a group of statements that together perform a task.
These are the basic funtions specifically in stdio.h (basic utilities/standard functions):

printf()   It is used to print the strings, integer, character etc on the output screen.
scanf()    It reads the character, string, integer etc from the keyboard.
getc()     It reads the character from the file.
putc()     It writes the character to the file.
fopen()    It opens the file and all file handling functions are defined in stdio.h header file.
fclose()   It closes the opened file.
remove()   It deletes the file.
fflush()   It flushes the file.                                                                              
*/
int main()
{
   
    /*
    PRINTF:
    printf(""); is a function that tells the program to basically write something. Note: \n means to insert a new line.
    */
    printf("Basic printf paragraph: \n");
    
    printf("\nHello, my name is Seth.\n");
    printf("I am 19 years old.\n");
    printf("Seth is my name given by my parents.\n");
    printf("I am existing for 19 years already.\n");
    
    /*
    VARIABLES:
    Variables are container wherein we can store "data" such as numbers, letters, characters, etc. and be able to modify them.
    This is a list of basic variables in C with their :

    char    	Single-character variable; stores one character of information.         e.g. char grade = 'A'
                For multiple characters/string,                                         e.g  char phrase[] "My grade is A."
    int     	Integer variable; stores integer (whole number) values.                 e.g. int age = 40
    float   	Floating-point variable; stores real numbers.                           e.g. float num = 40.00000  
    double      Floating-point variable; stores very large or very small real numbers.  e.g. double num = 40.00032

    FORMAT SPECIFIERS:
    Format specifiers define the type of data to be printed on standard output. You need to use format specifiers whether you're 
    printing formatted output with printf() or  accepting input with scanf().
    
    Format specifiers:

    %c	                Character
    %d	                Signed integer
    %e or %E	        Scientific notation of floats
    %f	                Float values
    %g or %G	        Similar as %e or %E
    %hi	                Signed integer (short)
    %hu	                Unsigned Integer (short)
    %i	                Unsigned integer
    %l or %ld or %li	Long
    %lf         	    Double
    %Lf	                Long double
    %lu	                Unsigned int or unsigned long
    %lli or %lld	    Long long
    %llu	            Unsigned long long
    %o	                Octal representation
    %p	                Pointer
    %s	                String
    %u	                Unsigned int
    %x or %X	        Hexadecimal representation
    %n	                Prints nothing
    %%	                Prints % character
    
    VARIABLES AND THEIR DESCRIPTIVE NAMES:
    We know that variables are containers and it requires descriptive names such as "age", "name", "phrase", "num", etc. These 
    descriptive names can depend on the user's preference. After putting descriptive names, you have to assign a value to this variable.
    */
    int age = 19;
    char name[20] = "Seth";
    double gpa = 99;
    char grade = 'A';
    float ans = 10.0;

    printf("\nPrintf with variables involved: \n");
... (61 lines left)