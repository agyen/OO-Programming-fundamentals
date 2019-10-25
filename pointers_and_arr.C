#include <iostream>
using namespace std;
void printMatrix(int matrix[][2], int n, int m)
{
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j){
			cout << matrix[i][j] << " ";
		}
	cout << endl;

	}

	void printMatrixThreeDim (int matrix [][2][3], int n, int m, int o){
	for( int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			for(int k = 0; k < o; ++k){
				}	cout << matrix[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

}
int main()
{
	int arr[4] = {1, 2, 3, 4};
	&arr[0];
	*(arr + 1) = 3;

	cout << arr[1] << endl;

	int matrix[2][2] { 1, 2, 3, 4,};
	printMatrix(matrix, 2, 2);
	
	cout << "Three dimentional array" << std::endl;
	int mat [2][2][3] { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printMatrixThreeDim(mat,2,2,3);
}
