#include <stdio.h>

int binary_search(int arr[], int target, int low, int high);

int main(int argc, char *argv[])
{
    int arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    int target;
    printf("choose a number in the list for the algorithm to find");
    for(int i = 0; i < 11; i++)
    {
    printf("%d, ", arr[i]);
    }
    printf("\nchoose number:");
    scanf("%d", &target);
    int index = binary_search(arr, target, 0, sizeof(arr)/ sizeof(arr[0]) - 1);
    if (index != -1)
    {
        printf("\nthe number %d is at the %d index\n", target, index);
    }
    else 
    {
        printf("\ntarget not found\n");
    }
    return 0; 
}


int binary_search(int arr[], int target, int low, int high)
{
    if (low<=high)
    {
        int mid = (low + high)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            return binary_search(arr, target, mid + 1, high);
        }
        else if(arr[mid] > target)
        {
            return binary_search(arr, target, low, mid -1);
        }
    }
    else 
    {
        return -1;
    }
}
