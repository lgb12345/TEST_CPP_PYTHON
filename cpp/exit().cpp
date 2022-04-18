#include <stdio.h>
#include <stdlib.h>

int main ()
{
   printf("程序的开头....\n");
   
   printf("退出程序....\n");
   if(1)
   {
       printf("quit internal if\n");
    //    exit(0);
   }
//    exit(0);

   printf("程序的结尾....\n");

   return(0);
}