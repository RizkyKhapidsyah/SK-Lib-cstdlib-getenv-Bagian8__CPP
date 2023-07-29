#pragma warning(disable:4996)

#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char* env_p;
    env_p = getenv("PATH");
    
    if (env_p != NULL) {
        printf("The path is: %s", env_p);
    }
        
    _getch();
    return 0;
}