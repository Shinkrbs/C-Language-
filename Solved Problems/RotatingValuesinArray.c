#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int a[], int s);
void rotate(int rot, int a[], int s);

int main()
{
    srand(time(NULL));
    int rot = rand() % 8; //Random generator for number of rotations
    int a[8];
    int s = sizeof(a) / sizeof(int);

    printf("Contents of Array:\n");
    printArr(a, s);

    printf("\nRotating the Array %d Times:\n", rot);
    rotate(rot, a, s);
}

void printArr(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        a[i] = rand() % 67;
        printf("%d ", a[i]);
    }
}

void rotate(int rot, int a[], int s)
{
   int temp[s];
   for (int i = 0; i < rot; i++)
   {
        temp[i] = a[i]; //Store Values of a[] to temp[]
   } //will store the first n values that will be moved in n times

   int var = rot;
   for (int j = 0; var < s; j++)
   {
        a[j] = a[var++]; //moving other values that are not moved in the first iteration
   }

   var = 0;
   for (int k = s - rot; k < s; k++)
   {
        a[k] = temp[var++]; //adding the two moved values from first and second iteration in the a[] 
   }
   
   for (int l = 0; l < s; l++)
   {
        printf("%d ", a[l]); //print the array
   }
}