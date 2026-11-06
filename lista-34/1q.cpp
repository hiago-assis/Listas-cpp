#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int n = 5;
    

    int *v = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cin >> *(v + i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(v + i) << " ";
    }

    free(v);
    v = nullptr;
}