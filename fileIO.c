#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[1000];

    printf("Hello, world!\n");

    FILE *transactions_file = fopen("transactions.csv", "r");
    if (transactions_file == NULL) {
        printf("Error: could not open file\n");
        exit(-1);
    }

    fgets(buffer, sizeof(buffer), transactions_file);
    printf("%s\n", buffer);

    fclose(transactions_file);

    return 0;
}