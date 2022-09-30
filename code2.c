#include <stdio.h>

int _2dn(int *registro, int d, int n)
{
    registro[d] = n;
}

int _3dn(int *registro, int d, int n)
{
    registro[d] = (registro[d] + n) % 1000;
}

int _4dn(int *registro, int d, int n)
{
    registro[d] = (registro[d] * n) % 1000;
}

int _5ds(int *registro, int d, int s)
{
    registro[d] = registro[s];
}

int _6ds(int *registro, int d, int s)
{
    registro[d] = (registro[d] + registro[s]) % 1000;
}

int _7ds(int *registro, int d, int s)
{
    registro[d] = (registro[d] * registro[s]) % 1000;
}

int _8da(int *registro, int *memory, int d, int a)
{
    registro[d] = memory[registro[a]];
}

int _9sa(int *registro, int *memory, int s, int a)
{
    memory[registro[a]] = registro[s];
}

int _0ds(int *registro, int d, int s)
{
    if (registro[s] != 0)
    {
        return registro[d];
    }
    return 0;
}

int main()
{
    int vet[10], d, n;

    printf("%d %d", d, n);
}