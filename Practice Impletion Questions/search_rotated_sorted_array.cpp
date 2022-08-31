#include <iostream>
using namespace std;
int searching(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] >= arr[start])
        {
            if (key >= arr[start] && key <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (key >= arr[mid] && key <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1; 
}
int main()
{
    int arr[5] = {2, 5, 6, -3, 0};
    cout << searching(arr, 5, 5);
}