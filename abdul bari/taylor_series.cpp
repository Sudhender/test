/*#include <iostream>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}
int main()
{

    cout << e(4, 15) << endl;
    return 0;
}*/

#include <iostream>
using namespace std;

int fun(int n)

{

    int x = 1, k;

    if (n == 1)
        return x;

    for (k = 1; k < n; ++k)

        x = x + fun(k) * fun(n-k);

    return x;
}
int main()
{
   int r;
   r = fun(5);
   cout<<r<<endl;
    return 0;
}