#include <iostream>
#include "calc.h"
using namespace std;
//↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
static int mult(int x,int y)//←←←←←←←←←←←←←←
{//↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑
    int a = x * y;
    return a;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;
    cout << mult(x, y) << endl;
}