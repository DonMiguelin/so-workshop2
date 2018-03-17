#include <stdio.h>

#include <sys/sysinfo.h>
int main()
{
    struct sysinfo si;
    sysinfo(&si);

    return 0;
}
