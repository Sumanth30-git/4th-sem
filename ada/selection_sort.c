#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(long int*a,long int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}

void sort(long int arr [],long int n)
{
    long int min,i,j;
    for (i=0;i<n;i++)
    {
        min=i;
        for (j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
            {
            min=j;
        }
    
        swap(&arr[min],&arr[i]);
        }
}
}
int main(){
    long int n=5000;
    long it=0;
    long int time[10];
    printf("A_size  selection_sort\n");

    clock_t start ,end;
    while (it++<10)
    {
        
        long int arr[n];
        for (long int i=0;i<n;i++)
        {
           long int num=rand()%n+1;
           arr[i]=num;
        }
        start=clock();
        sort(arr,n);
        end=clock();
        time[it]=((double)(end-start));
        printf("%li\t%li\n",n,time[it]);
        n+=500;
    }
}