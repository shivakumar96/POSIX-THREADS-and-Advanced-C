#include<stdio.h>


void simpleprint(int n){
    printf(" num is : %d \n",n);
}

double add(double a, double b){
    return a+b;
}

int main(){
    //pointer to a function;
    void (*fptr) (int) ;
    fptr = simpleprint;
    simpleprint(2);
    double (*addfptr)(double, double) = add;
    double res = addfptr(2,3);
    printf("the result is %lf \n",res);
    return 0;
}


