#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    
    int age = 25;
    printf("Age: %d\n", age);
    
    // Added a clear message so you know when to type in your terminal
    printf("Enter a new age: "); 
    
    // FIX: Format specifier inside quotes, address (&) and variable outside quotes
    scanf("%d", &age); 
    
    printf("Updated Age: %d\n", age);
    
    return 0;
}
