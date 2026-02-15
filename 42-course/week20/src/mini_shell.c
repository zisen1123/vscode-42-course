#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char cmd[128];
    while (1) {
        printf("mini$ ");
        if (!fgets(cmd, sizeof(cmd), stdin)) break;
        if (cmd[0] == 'e' && cmd[1] == 'x' && cmd[2] == 'i' && cmd[3] == 't') break;
        system(cmd);
    }
    return 0;
}
