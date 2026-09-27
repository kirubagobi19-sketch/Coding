#include <stdio.h>
int main()
{

    int numbers[] = {10, 20, 30, 40, 50, 60};
    char grade[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Kobi Krish";

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    // printf("%d", size);

    // printf("%d\n", sizeof(numbers));
    // printf("%d\n", sizeof(numbers[0]));

    /*
    for (int i = 0; i < 10; i++)
    {
        printf("%c", name[i]);
    }
    */

    return 0;
}