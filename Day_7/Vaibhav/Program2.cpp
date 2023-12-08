/*
Q.2 Program to print the elements of an array in reverse order

Input:
arr = [1, 2, 3, 4, 5]

Output:
Original array: 1 2 3 4 5
Array in reverse order: 5 4 3 2 1

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class array
{
    int *arr;
    int n;

public:
    array() : arr(NULL), n(0) {}

    array(int n)
    {
        arr = new int[n];
        this->n = n;
    }
    void accept();
    void display();
    int *reverse();

private:
    void swap(int *a, int *b);
};

void array::swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void array::display()
{
    int i;

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void array::accept()
{
    int i;

    cout << "Enter the data: ";

    for (i = 0; i < n; i++)
        cin >> arr[i];
}

int *array::reverse()
{
    int i = 0, j = n - 1;

    while (i < j)
        swap(&arr[i++], &arr[j--]);
    return arr;
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    array obj(n);

    obj.accept();
    cout << "Original array: ";
    obj.display();
    obj.reverse();
    cout << "Array in reverse order: ";
    obj.display();

    return 0;
}
