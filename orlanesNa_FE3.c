#include<stdio.h>

float calculateAverage(int numArray[]);
void printNumStatusAverage(int numArray[], float average); 
int main() 
  {
    int numArray[10];
    int i;
    float sum=0;
    float avg;
    int averageabove;
    int averagebelow;
      
    printf("\n Enter 10 numbers : \n\n");
      
    for(i = 0; i<10;i++) 
    {
          printf("Enter no. %d   :   \n",i+1);
          scanf("%d",&numArray[i]);
    }
    for(i = 0; i<10;i++) 
    {
      sum = sum + numArray[i];   
    }
    printf("Sum : %.0f\n",sum);
    avg = sum/10;
    printf("Average : %.2f",avg);
  }
  float calculateAverage(int numArray[]);




