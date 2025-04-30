#include <stdio.h>
#include "stringtoolkit.h"

int main() {
    char str1[] = "Sanyam Singh";
    upper(str1);
    printf("In Uppercase - %s\n", str1);
    
    lower(str1);
    printf("In Lowercase - %s\n", str1);
    
    char str2[] = "Sanyam Singh";
    printf("Vowerls are - %d\n", count(str2));
    
    char str3[] = "Sanyam Singh";
    rev(str3);
    printf("In Reversed - %s\n", str3);
    
    char str[][100] = {"Hello", "My", "Name", "Is", "Sanyam" };
    sort(str, 5);
    printf("Sorted strings - ");
    for (int i = 0; i < 5; i++) {
        printf("%s ", str[i]);
    }
    
    char str4[] = "go go go go orange army";
    revw(str4);
    printf("\nIn Reverse word - %s\n", str4);
    
    return 0;
}
