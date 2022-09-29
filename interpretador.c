#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = 0;
    };
}

int resolv_program(char memory[][1000][4])
{
    int registers[10];
    clean(registers, 1000);
    char instruction[4];

    int count = 0;

    // printf("%s", memory[3]);

    return 10;
}

void printArr(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    };
}

void main(void)
{
    int n_programs, tmp, count = 0, n_instructions;
    char string[4];
    char memory[1000][4];

    scanf("%d", &n_programs);

    for (int i = 0; i < n_programs; i++)
    {
        scanf("%s", string);
        while (1)
        {
            printf("%s ", string);
            if (!strcmp(string, "000"))
                break;
            strcpy(memory[count], string);
            scanf("%s ", string);
            count++;
        }
    }
    int tesyt = resolv_program(&memory);
}