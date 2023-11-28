#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int y;
    i = 0;
    while (i < size)
    {
        y = i + 1;
        while (y < size)
        {
            if (tab[i] > tab[y])
                ft_swap(&tab[i], &tab[y]);
            y++;
        }
        i++;
    }
}

int main()
{
    int array[] = {4, 2, 7, 1, 9, 3, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    int i = 0;
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    ft_sort_int_tab(array, size);

    printf("Sorted Array: ");
    i = 0;
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    return 0;
}

