#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char line[1024];
    if (argc != 2) return 1;
    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (strstr(line, argv[1]) != NULL) {
            fputs(line, stdout);
        }
    }
    return 0;
}
