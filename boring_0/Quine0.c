#include <stdio.h>
int main() {
    char *a = "#include <stdio.h>%cint main(){%c    char *a0=%c%s%c;%c    printf(a0,10,10,34,a0,34,10,10);%c}";
    printf(a, 10, 10, 34, a, 34, 10, 10);
}