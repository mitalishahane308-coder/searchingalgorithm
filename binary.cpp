#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    int key;
    int low = 0, high = 3;

    cout << "Enter  array elements in sorted order:\n";
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value for key: ";
    cin >> key;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout << "Found element at index: " << mid << endl;
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not found" << endl;

    return 0;
}
