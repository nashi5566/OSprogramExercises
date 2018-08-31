#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    unsigned int vAddress;
    char* ptr;
    if(argc > 2) vAddress = strtoul(argv[1], &ptr, 10);  // get virtual address
    printf("%u", vAddress);

    /*************************************************************
     * parameter is decimal virtual address
     * after calculation, return value will be page no. & offset
     *
     * the system is 32-bit address, 4-KB page
     * ***********************************************************/
    unsigned int pageSize = 4096; // page size = 4 KB = 4*2^(10) = 4096
    unsigned int pageNo = vAddress/pageSize;
    printf("%d\n", pageNo);
    unsigned int offset = vAddress%pageSize;
    printf("The address %s contains:\npage number = %d\noffset = %d\n", argv[1], pageNo, offset);

    return 0;
}
