#include <stdio.h>

int binary_search(int arr[], int elements, int target)
{    
    int low = 0;
    int high = elements - 1;
    int mid;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(arr[mid] == target)
        {
            return mid+1;
            
        }
        else if(arr[mid] > target)
            high = mid - 1;
        else 
            low = mid + 1;
        
    }
    
    return -1;
}

void array_add(int arr[], int elements)
{
    
    for(int i = 0; i<elements; ++i)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int elements, target;
    printf("\nEnter the number of elements: ");
    scanf("%d", &elements);

    int arr[elements];

    array_add(arr, elements);

    printf("\nEnter the target: ");
    scanf("%d", &target);

    int index = binary_search(arr, elements, target);

    if(index != -1)
    {
        printf("The number %d is in %d position.", target, index);
    }
    else
        printf("The number doesn't exist in the array.");
}




