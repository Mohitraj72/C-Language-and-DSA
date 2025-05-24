#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    // create 2d vector
    int n, m;
    cout << "enter row and column";
    cin >> n >> m;

    vector<vector<int>> matrix(3, vector<int>(4, 1));

    // for(int i = 0; i < 3; i++)
    // for (int j = 0; j <4 ; j++)
    // cout << matrix [i][j]<< " ";

    // cout << "Row = " << matrix.size();
    // cout<<endl;
    // cout<<"cols = " <<matrix[0].size();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

asash