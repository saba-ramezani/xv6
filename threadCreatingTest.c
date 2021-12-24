#include "types.h"
#include "stat.h"
#include "user.h"

int x=10;

void func()
{
    while(x != -5) 
    {
        x--;
        sleep(100);
    }
}

int main(int argc , char *argv[]) 
{
    int thread_id = thread_creator(&func , 0);
    if (thread_id < 0) {
        printf(1, "thread_create failed\n");
    }
    while (x != -1) {
        printf(1, "x = %d\n" , x);
        sleep(100);
    }
    printf(1, "waiting for the thread to be done\n");
    thread_wait();
    printf(1, "Thread is done and the final amount of x is %d\n" , x);
    exit();
}