#include <stdio.h>

#include "initialize.h"

void main() {
    int records_number;
    printf("Input records number: ");
    scanf("%d", &records_number);
    scanAndWrite(records_number, "gi-database");
}