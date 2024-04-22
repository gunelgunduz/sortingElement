#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//elementleri kicikden boyuye dogru siralayan program

int main(int argc, char *argv[])
{
    int array []= {3, 5, 16, 2, 200, 6, 99, 13, 1, 7};

    int i, j;

    for(i=0; i<10; i++)
    {
        for(j=0; j<i; j++)
        {
            if(array[i] < array[j])
            {
                int temporary = array[i];
                array[i]= array[j];
                array[j]=temporary;
            }
        }
    }

    for(i=0; i<10; i++)
    printf(" %d ", array[i]);
    return 0;
}