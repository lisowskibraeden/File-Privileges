#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    char* ptr = 0;
    int i = mprotect(ptr, 1);
    *ptr = 'F';
    printf(1, "%d\n", i);
    exit();
}