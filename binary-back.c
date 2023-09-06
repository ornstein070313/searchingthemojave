#include <stdio.h>

int main()
{
    int elements;
    scanf("%d", &elements);

    int arr[elements], num;
    int low = 0, high, mid, target;

    high = sizeof(arr)/sizeof(arr[0]);

    int flag = 0;


    for(int i = 0; i<elements; i++)
    {
        printf("Enter a number %d:\n", i+1 );
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    while(low<=high)
    {
        mid = (low+high)/2;

        if(target == arr[mid])
        {
            printf("target is at position %d", mid + 1);
            flag = 1;
            break;
        }

        else if(target > arr[mid])
        {
            low = mid + 1;
        }

        else if(target < arr[mid])
        {
            high = mid - 1;
        }

    }

    if(!flag)
    {
        printf("the target is not a part of the list.");
    }
    
}