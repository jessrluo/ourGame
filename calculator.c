// Jessica Luo, jessrluo, z5218648
// 5 March
// Calculator

#include <stdio.h>
#include <stdlib.h>

int subtract(int a, int b);
int add(int a, int b);

int main (int argc, char* argv[]) {

    int magicNum = 15;
    int magicB = 42;
    printf("%d\n", add(magicNum, 42));

    return EXIT_SUCCESS;
}

int subtract(int a, int b){

   return a-b;
}

int add(int a, int b){

    return a+b;    
}





