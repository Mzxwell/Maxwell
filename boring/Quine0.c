#include <stdio.h>

int main() {
    char *program = "#include <stdio.h>%c%cint main() {%c    char *program = %c%s%c;%c    printf(program, 10, 10, 10, 34, program, 34, 10, 10, 10, 10);%c    return 0;%c}%c";
    FILE *file = fopen("Quine.out", "w");
    fprintf(file, program, 10, 10, 10, 34, program, 34, 10, 10, 10, 10);
    fclose(file);
}