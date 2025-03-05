#include "types.h"
#include "user.h"

int
main(void)
{
   int processNum=num_procs();
   printf(1,"The number of running processes is %d\n",processNum);
   smu();
   exit();
}

