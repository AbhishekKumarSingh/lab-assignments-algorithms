#include <iostream>

using namespace std;


int isLog(int x, int b, int y) {
    if (x == 0) {
        return (y == 1);
    }
    return (!(y%b)) && isLog(x-1, b, y/b);
}


int main()
{
    int x, b, y;
    cout << "Enter x, y, b : ";
    cin >> x >> y >> b;
    cout << isLog(x, y, b) << "\n";
    return 0;
}
