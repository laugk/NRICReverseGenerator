//annualbirthrate.h

#ifndef AnnualBirthData_H
#define AnnualBirthData_H
extern int births[]; // Declare the array as extern to be accessed from other files.
#define numYears 58
int getTotalBirths(int year); // Add this line
#endif /* AnnualBirthData_H */



// annualbirthrate.c



int births[58] = {50560, 47241, 44562, 45934, 47088, 49678, 48269, 43268, 39948, 42783, 38364, 39441, 40779, 41217, 42250, 42654, 40585, 41556, 42484, 38379, 43616, 52957, 47669, 51142, 49114, 49402, 50225, 49554, 48635, 48577, 47333, 43664, 43336, 46997, 41451, 40760, 37485, 37174, 37492, 38317, 39490, 39826, 39570, 37967, 39654, 42663, 39720, 42232, 42185, 41251, 39615, 39039, 39279, 38590, 38672, 35605, 33541, 33703}; //start at 1967 end at 2024



/*
int n = birthYear-1967;
if (n >= 0 && n < numYears) {
    printf("Number of births for %d is %d\n", Years, births[n]);
} else {
    printf("Data for the year %d is not available.\n", numYears);
}


*/
