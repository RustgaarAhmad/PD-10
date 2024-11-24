#include <iostream>
using namespace std;

bool canBeRearrangedToConsecutive(int* arr, int n)
 {
    if (n <= 0) 
    {
        return false;
    }

    int minVal = arr[0], maxVal = arr[0];

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) 
        {
            maxVal = arr[i];
        }
    }
    if (maxVal - minVal != n - 1) 
    {
        return false;  
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                return false;
            } 
        }
    }

    return true;
}

int main() 
{
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    if (canBeRearrangedToConsecutive(arr, n))
     {
        cout << "True" << endl;
    } else 
    {
        cout << "False" << endl;
    }

    delete[] arr;

    return 0;
}
