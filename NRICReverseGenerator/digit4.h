

// digit4.h
#ifndef DIGIT4_H
#define DIGIT4_H
#include "annualbirthrate.h"

extern int digit3; // Declare digit3 as an extern variable to access it from other files.
extern char alpha8; // Declare alpha8 as an extern character to access it from other files.
extern int digit4;  // Declare digit4 as an extern integer to access it from other files.




void setDigit4(void) {
    if (digit3 == 0) {
        switch (alpha8) {
            case 'C':
                digit4 = 0;
                break;
            case 'I':
                digit4 = 1;
                break;
            case 'D':
                digit4 = 2;
                break;
            case 'Z':
                digit4 = 3;
                break;
            case 'E':
                digit4 = 4;
                break;
            case 'J':
                digit4 = 5;
                break;
            case 'F':
                digit4 = 6;
                break;
            case 'A':
                digit4 = 7;
                break;
            case 'G':
                digit4 = 8;
                break;
            case 'B':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }
    
    if (digit3 == 1) {
        switch (alpha8) {
            case 'H':
                digit4 = 0;
                break;
            case 'C':
                digit4 = 1;
                break;
            case 'I':
                digit4 = 2;
                break;
            case 'D':
                digit4 = 3;
                break;
            case 'Z':
                digit4 = 4;
                break;
            case 'E':
                digit4 = 5;
                break;
            case 'J':
                digit4 = 6;
                break;
            case 'F':
                digit4 = 7;
                break;
            case 'A':
                digit4 = 8;
                break;
            case 'G':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }
    
    if (digit3 == 2) {
        switch (alpha8) {
            case 'B':
                digit4 = 0;
                break;
            case 'H':
                digit4 = 1;
                break;
            case 'C':
                digit4 = 2;
                break;
            case 'I':
                digit4 = 3;
                break;
            case 'D':
                digit4 = 4;
                break;
            case 'Z':
                digit4 = 5;
                break;
            case 'E':
                digit4 = 6;
                break;
            case 'J':
                digit4 = 7;
                break;
            case 'F':
                digit4 = 8;
                break;
            case 'A':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }
    
    if (digit3 == 3) {
        switch (alpha8) {
            case 'G':
                digit4 = 0;
                break;
            case 'B':
                digit4 = 1;
                break;
            case 'H':
                digit4 = 2;
                break;
            case 'C':
                digit4 = 3;
                break;
            case 'I':
                digit4 = 4;
                break;
            case 'D':
                digit4 = 5;
                break;
            case 'Z':
                digit4 = 6;
                break;
            case 'E':
                digit4 = 7;
                break;
            case 'J':
                digit4 = 8;
                break;
            case 'F':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }
    
    if (digit3 == 4) {
        switch (alpha8) {
            case 'A':
                digit4 = 0;
                break;
            case 'G':
                digit4 = 1;
                break;
            case 'B':
                digit4 = 2;
                break;
            case 'H':
                digit4 = 3;
                break;
            case 'C':
                digit4 = 4;
                break;
            case 'I':
                digit4 = 5;
                break;
            case 'D':
                digit4 = 6;
                break;
            case 'Z':
                digit4 = 7;
                break;
            case 'E':
                digit4 = 8;
                break;
            case 'J':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }

    if (digit3 == 5) {
        switch (alpha8) {
            case 'F':
                digit4 = 0;
                break;
            case 'A':
                digit4 = 1;
                break;
            case 'G':
                digit4 = 2;
                break;
            case 'B':
                digit4 = 3;
                break;
            case 'H':
                digit4 = 4;
                break;
            case 'C':
                digit4 = 5;
                break;
            case 'I':
                digit4 = 6;
                break;
            case 'D':
                digit4 = 7;
                break;
            case 'Z':
                digit4 = 8;
                break;
            case 'E':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }
    
#endif
