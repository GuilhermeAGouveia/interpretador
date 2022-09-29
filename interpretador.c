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
    char tmp;
    char memory[1000][4];

    scanf("%d", &n_programs);

    for (int i = 0; i < n_programs; i++)
    {
        scanf("%c", tmp);
        while (1)
        {
            printf("%c", tmp);
            if (tmp == '\n')
            {
                scanf("%c", tmp);
                if (tmp == '\n')
                    break;
                continue;
            }
            for (int k = 0; i < 3; i++)
            {
                memory[count][i] = tmp;
                scanf("%c ", tmp);
            }

            scanf("%c ", tmp);
            count++;
        }

        // n_instructions = resolv_program(&memory);
    }
}