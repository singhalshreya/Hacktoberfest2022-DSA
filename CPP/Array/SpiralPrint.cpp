// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form.
/*
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
*/

//  code 
#include <iostream>
using namespace std;

void spiralPrint(int **input, int nr, int nc)
{
    int i,k=0,l=0;
    while(k<nr && l<nc){
        for(i=l;i<nc;i++){
            cout<<input[k][i]<<" ";
        }
        k++;
        for(i=k;i<nr;i++){
            cout<<input[i][nc-1]<< " ";
        }
        nc--;
        if(k<nr){
        for(i=nc-1;i>=l;i--){
            cout<<input[nr-1][i]<< " ";
        }
        nr--;
    }
    if(l<nc){
        for(i=nr-1;i>=k;i--){
            cout<<input[i][l]<< " ";
        }
        l++;
    }
	}
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
