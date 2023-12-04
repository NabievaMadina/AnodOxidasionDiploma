#include <sys/time.h>
#include <stdio.h>
#include "../lib/platform.h"

// Dummy realizations when no target platform is specified

INT32_U Get_Time() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_sec * 1000 + time.tv_usec / 1000;
}

INT8 Read_Input8(int addr1, int addr2) {
    INT8 result;
    printf("Enter value for %d %d: ", addr1, addr2);
    scanf("%c", &result);
    printf("\n");
    return result;
}

int Write_Output8(int addr1, int addr2, INT8 data) {
    printf("Value for %d %d: %c\n", addr1, addr2, data);
}

INT16 Read_Input16(int addr1, int addr2) {
    INT16 result;
    printf("Enter value for %d %d: ", addr1, addr2);
    scanf("%hd", &result);
    printf("\n");
    return result;
}

int Write_Output16(int addr1, int addr2, INT16 data) {
    printf("Value for %d %d: %hd\n", addr1, addr2, data);
}
