#include <iostream>

using namespace std;

int main(void)
{
    int arr[] = {10, 20, 30};
    int *ptr1, *ptr2;

    ptr1 = arr;
    ptr2 = arr;
    cout << ptr1 << " " << ptr2 << endl;
    ptr2++;
    cout << ptr1 << " " << ptr2 << endl;

    return 0;
}