#include <cs50.h>
#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = start-1;

    int mid( (int)start + (int)end)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(key > mid[arr])
        {
            start = mid + 1;
        }
        else
        {
            end = end - 1;
        }
        mid = (start + end)/2;

    }
    return -1;
}
int main()
{
    int even[6] = {2,4,6,8,10,12};
    int odd[6] = {1,3,5,7,9,11};

    int index = binarySearch(even, 6, 10);

    printf("index of 10 is ,%i", index);
}