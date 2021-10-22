#include "types.h"
#include "stat.h"
#include "user.h"


int main(void)
{
    printf(1,"The system has made %d read calls since kernel started!\n" , getReadCount());
    exit();
}