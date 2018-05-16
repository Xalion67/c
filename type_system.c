#include <stdio.h>
#include <curses.h>

unsigned short x = 1; /* 0x0001 */

int main(void) {
    printf("%s\n", *((unsigned char *) &x) == 0 ? "Your system: \033[38;5;48mbig-endian\033[0m" : "Your system: \033[38;5;48mlittle-endian\033[0m");
    return 0;
}
