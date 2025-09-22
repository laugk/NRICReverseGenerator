
// digit4.c
#include "digit4.h"

int computeDigit4(int digit3, char alpha8) {
    int digit4 = 0; // Initialize digit4 to a default value.
    
    
    
    if (digit3 == 0) {
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
    
    else if (digit3 == 1) {
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
    
    else if (digit3 == 2) {
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
    
    else if (digit3 == 3) {
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
    
    else if (digit3 == 4) {
        switch (alpha8) {
            case 'J':
                digit4 = 0;
                break;
            case 'F':
                digit4 = 1;
                break;
            case 'A':
                digit4 = 2;
                break;
            case 'G':
                digit4 = 3;
                break;
            case 'B':
                digit4 = 4;
                break;
            case 'H':
                digit4 = 5;
                break;
            case 'C':
                digit4 = 6;
                break;
            case 'I':
                digit4 = 7;
                break;
            case 'D':
                digit4 = 8;
                break;
            case 'Z':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }
    
    else if (digit3 == 5) {
        switch (alpha8) {
            case 'E':
                digit4 = 0;
                break;
            case 'J':
                digit4 = 1;
                break;
            case 'F':
                digit4 = 2;
                break;
            case 'A':
                digit4 = 3;
                break;
            case 'G':
                digit4 = 4;
                break;
            case 'B':
                digit4 = 5;
                break;
            case 'H':
                digit4 = 6;
                break;
            case 'C':
                digit4 = 7;
                break;
            case 'I':
                digit4 = 8;
                break;
            case 'D':
                digit4 = 9;
                break;
            default:
                // Handle invalid input or errors here.
                break;
        }
    }
    
    return digit4;
}
