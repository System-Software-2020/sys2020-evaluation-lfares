#include <unistd.h>
#include <sys/syscall.h>
int main(void){
   syscall(1,4, "Hello\n", 7);
   return 0;
 
}
