#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //check there are 2 cmd line inputs
    if (argc != 3){
        printf("Expected usage: ./sum <int1> <int2>\n");
        return 1; //exit unsuccessfully
    } 
    
    //check both inputs are ints
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 == 0 || num2 == 0){ //atoi returns 0 if integer conversion is unsuccessful. Not useful if the person wants to add zero though
        printf("Expected usage: ./sum <int1> <int2>\n");
        return 1; //exit unsuccessfully
    }
    //NOTE: this does not check for floats, just truncates them
    
    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
