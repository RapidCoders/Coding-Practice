/*
Q.3 program to find the Quadrant in which Coordinates lies.

Input: (-3, -33)
Output: point (-3, -33) lies in the Third quadrant.

Input: (0 ,0)
Output: point (0,0) is at the Origin.

Input: (5,0)
Output: point (5,0) lies on positive X Axis.

Author: Shreyash
*/

#include <iostream>
#define ORGIN 0
#define FIRST 1
#define SECOND 2
#define THIRD 3
#define FOURTH 4
#define POSITIVE_X 5
#define NEGATIVE_X 6
#define POSITIVE_Y 7
#define NEGATIVE_Y 8
using std::cin;
using std::cout;
using std::endl;

int find_quadrant(int x, int y)
{
    if (x == 0 && y == 0)
        return ORGIN;
    else if (x > 0 && y > 0)
        return FIRST;
    else if (x < 0 && y > 0)
        return SECOND;
    else if (x < 0 && y < 0)
        return THIRD;
    else if (x > 0 && y < 0)
        return FOURTH;
    else if (x > 0 && y == 0)
        return POSITIVE_X;
    else if (y > 0 && x == 0)
        return POSITIVE_Y;
    else if (x < 0 && y == 0)
        return NEGATIVE_X;
    else if (y < 0 && x == 0)
        return NEGATIVE_Y;
    return -1;
}

int main(void)
{
    int ret, x, y;

    cout << "\nEnter first coordinate: ";
    cin >> x;

    cout << "\nEnter second coordinate: ";
    cin >> y;

    ret = find_quadrant(x, y);

    switch (ret)
    {
    case ORGIN:
        cout << "\nPoint (0, 0) is at the Origin.\n";
        break;

    case FIRST:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies in the first quadrant.\n";
        break;

    case SECOND:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies in the second quadrant.\n";
        break;

    case THIRD:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies in the third quadrant.\n";
        break;

    case FOURTH:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies in the fourth quadrant.\n";
        break;

    case POSITIVE_X:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies on positive X-axis.\n";
        break;

    case POSITIVE_Y:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies on positive Y-axis.\n";
        break;

    case NEGATIVE_X:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies on negative X-axis.\n";
        break;

    case NEGATIVE_Y:
        cout << "\nPoint "
             << "(" << x << ", " << y << ") lies on negative Y-axis.\n";
        break;

    default:
        cout << "\nInvalid Input!\n";
    }

    return 0;
}
