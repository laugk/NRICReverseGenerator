//  main.c
//  NRICReverseGenerator


#include <stdio.h>
#include "annualbirthrate.h"

//

int Years = 0;

int main(void) {

        printf("Enter Year to find out number of births: \n");
        scanf("%d", &Years);
   int n = Years-1967;
        if (n >= 0 && n < numYears) {
            printf("Number of births for %d is %d\n", Years, births[n]);
        } else {
            printf("Data for the year %d is not available.\n", numYears);
        }

   
   return 0;
}

