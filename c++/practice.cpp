#include<iostream>
using namespace std; 

int matrix(int n)
{
    int r, c;
     
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            if (r == c)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int size = 3;
    matrix(size);
}
