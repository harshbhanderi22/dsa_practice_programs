#include <iostream>
#include <deque>

// deque is like two siede queue where we can perform all operation from both side

using namespace std;

int main()
{

    deque<int> a;

    // Add Element from back side
    a.push_back(2);
    // Add Element from front side
    a.push_front(1);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    // Remove Element from back side
    // a.pop_back();
    // Remove element from front side
    // a.pop_front();
    // Same as vector clear deque
    // a.clear();

    // Erase can be used to remove specific element, we have to provide range or specific location
    a.erase(a.begin(), a.begin() + 1);
    // This will remove first element from deque
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}