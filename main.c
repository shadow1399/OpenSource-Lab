#include <stdio.h>
int main() {
        int i;
        FILE * fptr;
        char str[] = "This text is to be written in file\n";
        fptr = fopen("test.txt", "w");
        for (i = 0; str[i] != '\n'; i++) {
            fputc(str[i], fptr);
        }
        fclose(fptr);
        return 0;
    }
