#include<stdio.h>
int main()
{
    int i=0;
    int arr[]={54,87,89,54};
    int max=arr[0];
    int length=sizeof(arr[0]);
    printf("The length of array is %d.\n", length);
    while(i<length){
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }
    printf("The largest number in the array is:%d\n",max);
    return 0;
}