#include <stdio.h>
#include <stdbool.h>

int main(){

// variable = A reusable container for a value.
// Behaves as if it were value it contains.

bool isOnline = true;
bool isStudent = false;
bool forSale = false;

if (isOnline){
    printf("You are Online\n");
}
else{
    printf("You are offline\n");
}

if (isStudent){
    printf("You are a student\n");
}
else{
    printf("You are not a student\n");
}

if (forSale){
    printf("It is for sale\n");
}
else{
    printf("It is Not for sale\n");
}
    return 0;
}