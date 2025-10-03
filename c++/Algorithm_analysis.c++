#include <iostream>
using namespace std;
int main()
{
       int order;
       cout << "Enter order of a square matrix: ";
       cin >> order;

       int arr[order][order];

       for (int i = 0; i < 5; i++)
       {
              for (int j = 0; j < 5; j++)
              {
                     cout << "Enter: ";
                     cin >> arr[i][j];
              }
       }

       for (int i = 0; i < order; i++)
       {
              for (int j = 0; j < order; j++)
              {
                     cout << arr[i][j]<<" ";
              }
              cout << endl;
       }

       return 0;
}
