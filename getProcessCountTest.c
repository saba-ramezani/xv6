#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){
    printf(1,"There are %d processes!\n" , getProcessCount());
    exit();
}