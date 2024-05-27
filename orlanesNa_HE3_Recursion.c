# include <stdio.h>
# include <stdlib.h>

int iterativeFactorial (int input);
int recursiveFactorial (int input);
int iterativeFibonacci (int input);
int recursiveFibonacci (int input);
int iterativeSum (int input);
int recursiveSum (int input);


int main()
{
    int choice = 0;
    while (choice != 4)
    {
        printf ("\n\nChoose a mathematical problem solver:\n[1]Factorial series\n[2]Fibonacci series\n[3]Sum series\n[4]Exit\n");
        printf("Your Choice:    ");
        scanf ("%d", &choice);
        int input = 0, outputIterative = 0, outputRecursive = 0;
        switch (choice)
        {
            case 1:
                printf("\n\nFACTORIAL SERIES\n");
                printf("Enter number:   ");
                scanf("%d", &input);
                outputIterative = iterativeFactorial(input);
                outputRecursive = recursiveFactorial(input);
                printf("\nIterative Factorial Function:\t%d! = %d", input, outputIterative);
                printf("\nRecursive Factorial Function:\t%d! = %d\n", input, outputRecursive);
                break;
            case 2:
                printf("\n\nFIBONACCI SERIES\n");
                printf("Enter the nth Fibonacci series:\t");
                scanf("%d", &input);
                outputIterative = iterativeFibonacci(input);
                outputRecursive = recursiveFibonacci(input);
                printf("\nIterative Fibonacci Function:\t%d number is = %d", input, outputIterative);
                printf("\nRecursive Fibonacci Function:\t%d number is = %d\n", input, outputRecursive);
                break;
            case 3:
                printf("\n\nSUM SERIES\n");
                printf("Enter the nth number for Sum series\t:\t");
                scanf("%d", &input);
                outputIterative = iterativeSum(input);
                outputRecursive = recursiveSum(input);
                printf("\nIterative Sum Series Function:\tThe Sum series of %d is %d", input, outputIterative);
                printf("\nRecursive Sum Series Function:\tThe Sum series of %d is %d\n", input, outputRecursive);
                break;
            case 4:
                printf("\n\nThank you for using! Goodbye!\n\n\n");
                break;
            default:
                printf("\n\nINVALID INPUT\n");
                break;
        }
    }
    return 0;
}

int iterativeFactorial (int input)
{
    int output, i;
    if (input == 0 || input == 1)
    {
        output = 1;
    }
    else
    {
        output = input;
        for (i=input; i>1; i--)
        {
            output = output * (i-1);
        }
    }
    return output;
}

int recursiveFactorial (int input)
{
    if (input <= 1)
    {
        return 1;
    }
    else
    {
        return input * recursiveFactorial(input - 1);
    }
}

int iterativeFibonacci (int input)
{
    int output, first = 0, second = 1, i;
    if (input == 0)
    {
        output = 0;
    }
    else if (input == 1)
    {
        output = 1;
    }
    else
    {
        for (i = 1; i<input; i++)
        {
            output = first + second;
            first = second;
            second = output;
        }
    }
    return output;
}

int recursiveFibonacci (int input)
{
    if (input == 0)
    {
        return 0;
    }
    else if (input == 1)
    {
        return 1;
    }
    else
    {
        return recursiveFibonacci (input - 1) + recursiveFibonacci (input - 2);
    }
}

int iterativeSum (int input)
{
    int output, first = 0, second = 1, i;
    if (input == 0)
    {
        output = 0;
    }
    else
    {
        output = 0;
        for (i = 1; i <= input; i++)
        {
            output = output + i;
        }
    }
    return output;
}

int recursiveSum (int input)
{
    if (input == 0)
    {
        return 0;
    }
    else if (input == 1)
    {
        return 1;
    }
    else
    {
        return input + recursiveSum (input - 1);
    }
}