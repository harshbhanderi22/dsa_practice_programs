#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int odd[7] = {1, 7, 9, 11, 19, 21, 29};
    int even[8] = {1, 4, 6, 8, 12, 15, 17, 20};
    cout << "For odd array element 19 is at " << binary_search(odd, 7, 19) << " index" << endl;
    cout << "For even array element 17 is at " << binary_search(even, 8, 17) << " index" << endl;
}