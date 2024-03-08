#include<stdio.h>
#include<math.h>
int main()
{
    int x1, x2, y1, y2;
    printf("Enter the points x1 and x2.\n");
    scanf("%d %d", &x1, &x2);
    getchar;
    printf("Enter the points y1 and y2.\n");
    scanf("%d %d", &y1, &y2);
    getchar;
    float result= (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    printf("The required distance is:%f.\n", sqrt(result));
    return 0;
}