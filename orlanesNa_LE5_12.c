/*======================================================================
 FINALNAME  : orlanesNa_LE5_12.c
 DESCRIPTION: Program that will ask the correct numeric passcode before the user can continue his task. 
              The user is given only three trials to enter the correct passcode. When the user hit the correct 
              passcode the program will display “ACCESS GRANTED”, otherwise it will display “ACCESS DENIED”
              after three attempts.   
 AUTHOR     : Nathan John G. Orlanes
 CREATED    : 30 September 2021
========================================================================*/

#include <stdio.h>
 
 int main ()
 {
     int Password = 5123, passwordTrial, trialCount = 0;

     while (passwordTrial != Password && trialCount <3 ) 
     {
         
             printf ("Enter your Password: "); 
             scanf ("%d", &passwordTrial);
             trialCount++;
        
            if (passwordTrial == Password)
            {
            printf ("ACCESS GRANTED");
            }
             else if(trialCount == 3)
            {
                printf ("ACCESS DENIED out of trials");
            }
     }
     return 0;
 }