//  main.c
//  NRICReverseGenerator


#include <stdio.h>
#include "annualbirthrate.h"

//

int Years = 0;
int birthMonth, birthYear;
int digit1, digit2, digit3, digit4, digit5, digit6, digit7;
char alpha0, alpha8;
int resident;

int main(void) {
    printf("Are you a Singaporean (Y/N)? ");
    scanf("%d", &resident);
    printf("Enter month and year of birth in MM YYYY format: \n");
    scanf("%d %d", &birthMonth, &birthYear);
    
    if (birthYear <2000 && resident == 'Y') {
        alpha0 = 'S';
    } else if (birthYear >=2000 && resident == 'Y') {
        alpha0 = 'T';
    } else { printf("Foreigners not supported currently");
    }
    
    

    
    
    if (birthMonth > 12 || birthMonth < 0) {
        printf("Invalid Birth Month\n");
        
    } else {
        
        if (birthYear < 1967 || birthYear > 2024) {
            printf("No data for given Birth Year\n");
        } else {
            Years = birthYear;
            digit1 = (Years / 100) % 10; // Extract the second-to-last digit.
            digit2 = Years % 10;         // Extract the last digit.
            
        }
        

        //printf("Enter last 4 characters of your NRIC e.g. 123A: ");
        //scanf("%d%d%d%d",digit5, digit6, digit7,alpha8);

            
            /* printf("Enter Year to find out number of births: \n");
            //scanf("%d", &Years);
            int n = Years-1967;
            if (n >= 0 && n < numYears) {
                printf("Number of births for %d is %d\n", Years, births[n]);
            } else {
                printf("Data for the year %d is not available.\n", numYears);
            }
            
            */
        //printf("Your NRIC is %c%c%c%c%c%c%c%c", digit1, digit2, digit3, digit4, digit5, digit6, digit7, alpha8);
        return 0;
        }
        
    }

