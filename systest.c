#include "types.h"
#include "user.h"

int
main(void)
{
   int processNum=num_procs();
   int maxid=maxpid();
   printf(1,"The maximum pid out of all  processes is %d\n",maxid);
   printf(1,"The number of running processes is %d\n",processNum);
   smu();
   exit();
}

