#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int pid;
    char* pname;
} Process;


void print_process(Process* p){
    printf("Process is %s and pid is %d\n",p->pname,p->pid);
}


int main(){

    Process* p1 = malloc(sizeof(Process));
    p1->pid = 1;
    p1->pname = "Process - 1";
    print_process(p1);
    return 0;
}