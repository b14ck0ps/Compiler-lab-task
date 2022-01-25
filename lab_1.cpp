// Ajran Hossain
// 19-39334-1
#include <iostream>
#define N 3
void find_odd(int,int);
void factorial(int);
void matrix_add(int A[][N], int B[][N], int C[][N]);
using namespace std;
int main()
{
    int even = 0 , odd = 0;
    int array[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
    //problem 1
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] <<" ";
    }
    cout << endl;
    for (int j = 9; j >= 0; j--)
    {
        cout << array[j] << " ";
    }
    cout << endl;
    //problem 2
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        if(array[i] % 2 != 0)
        {
            odd++;
        }
    }
    cout << "even = " << even << endl;
    cout << "Odd = " << odd << endl;
    cout << endl;
    cout << endl;

    find_odd(12,23);
    cout << endl;
    factorial(5);
    factorial(4);
    cout << endl;
    int A[N][N] = { {12,13,14},
                    {15,16,17},
                    {18,19,20}};
    int B[N][N] = { {1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int C[N][N] = {{101,104,107},
                    {102,105,108},
                    {103,106,109}};
    matrix_add(A,B,C);
    return 0;

}
//problem 3
void find_odd(int start , int end)
{
    int range = end - start;
    for (int i = 0; i <= range; i++)
    {
        if(start % 2 != 0)
        {
            cout << start << " ";
        }
        start++;
    }
}
//problem 5
void factorial(int n){
    float factorial = 1.0;
    bool isPrime = true;
if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << factorial << endl;
    }else{
        cout << "Error! Not a prime number" << endl;
    }
}
//problem 4
void matrix_add(int A[][N], int B[][N], int C[][N]){
    int D[N][N]; 
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            D[i][j] = A[i][j] + B[i][j] + C[i][j];
        }
    }
    cout << " " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        cout << D[i][j] << " ";
        cout << endl;
    }     
}
