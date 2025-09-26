//  main.c
//  NRICReverseGenerator


#include <stdio.h>
#include "annualbirthrate.h"
#include "digit4.h"

//

int Years = 0;
int birthMonth, birthYear;
int digit1, digit2, digit3, digit4, digit5, digit6, digit7;
char alpha0, alpha8;
int resident;

int main(void) {
    printf("Are you a Singaporean (Y/N)? ");
    scanf(" %c", &resident);
    printf("Enter month and year of birth in MM YYYY format: ");
    scanf("%d %d", &birthMonth, &birthYear);
    
    if (birthYear <2000 && resident == 'Y') {
        alpha0 = 'S';
    } else if (birthYear >=2000 && resident == 'Y') {
        alpha0 = 'T';
    } else { printf("Foreigners not supported currently");
        return 1; // exit with an error code
    }
    
    

    
    
    if (birthMonth > 12 || birthMonth < 0) {
        printf("Invalid Birth Month\n");
        return 1; //exit with an error code
        
    } else {
        
        if (birthYear < 1967 || birthYear > 2024) {
            printf("No data for given Birth Year\n");
            return 1; //exit with an error code
        } else {
            Years = birthYear;
             digit1 = (Years / 100) % 10; // Extract the second-to-last digit.
             digit2 = Years % 10;         // Extract the last digit.
            
        }
        //int digit3, digit4, digit5, digit6, digit7;
        printf("Enter last 4 characters of your NRIC e.g. 123A: ");
        scanf("%1d%1d%1d%c", &digit5, &digit6, &digit7, &alpha8);


// digit 3 computation

        if (birthMonth >=1 && birthMonth <=2) {
            digit3 = 0;
        } else if (birthMonth >=3 && birthMonth <=5) {
            digit3 = 1;
        } else if (birthMonth >=6 && birthMonth <=8) {
            digit3 = 2;
        } else if (birthMonth >=9 && birthMonth <=10) {
            digit3 = 3;
        } else if (birthMonth >=11 && birthMonth <=12) {
            digit3 = 4;
        }
            
            
        digit4 = computeDigit4(digit3, alpha8);


        
        printf("Your NRIC is %1c%1d%1d%1d%1d%1d%1d%1d%1c\n", alpha0, digit1, digit2, digit3, digit4, digit5, digit6, digit7, alpha8);

        return 0;
        }
        
    }


