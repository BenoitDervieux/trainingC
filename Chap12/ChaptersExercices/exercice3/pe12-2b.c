// pe12-2b.c
 // compile with pe12-2a.c
 #include <stdio.h>
 #include "pe12-2a.h"
 int main(void)
 { 
    int mode;
    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        set_mode(mode);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
        if (mode == -1) {
            break;
        }
    }
    printf("Done.\n");
    return 0;
 } 