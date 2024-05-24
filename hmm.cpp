#include <iostream>

using namespace std;
void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a, b;
    cout << "Enter Numbers:";
    cin >> a >> b;
    cout <<"Valoue of " << endl;
	cout << " a= " << a << ", b= " << b << endl;
    swap(a, b);
    cout << "After Swap" << endl;//
	cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

