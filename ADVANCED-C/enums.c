#include <stdio.h>

enum eLevel {
    LOW,
    MEDIUM,
    HIGH
};

typedef enum eLevel Level;

int main(int argc, char* argv[]){
    Level l = MEDIUM;
    printf("level is %d\n",l);
    return 0;
}