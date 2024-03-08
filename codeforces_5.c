#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int test_cases, n, i, k, lhs, rhs, num = 0, min, flag=0;

    scanf("%d", &test_cases);

    while (num < test_cases)
    {
        scanf("%d", &n);

        int arr[n];
        int count=0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==2)
                count++;
        }
        if(count%2 == 0)
        {
            int two=0;
            for(i=0 ;i<n ;i++)
            {
                if(arr[i]==2)
                    two++;
                if(two == count/2)    
                {
                    printf("%d\n",i+1);
                        break ;
                }
            }
        }
        else
        {
            printf("-1\n");
        }
        num++;
        //free(arr);
    }
    return 0;
}