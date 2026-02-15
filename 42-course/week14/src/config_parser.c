#include <stdio.h>
#include <string.h>

int main(void) {
    char line[128];
    while (fgets(line, sizeof(line), stdin)) {
        char *eq = strchr(line, '=');
        if (!eq) continue;
        *eq = '\0';
        printf("key:%s value:%s", line, eq + 1);
    }
    return 0;
}
