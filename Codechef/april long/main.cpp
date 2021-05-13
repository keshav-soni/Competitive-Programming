#include<iostream>
#include<math.h>

using namespace std;
double d = 0;
double det(int n, double mat[17][17]);
double det(int n, double mat[17][17])
{
    double submat[17][17];
    if (n == 2)
        return ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    else
    {
        for (int c = 0; c < n; c++)
        {
            int subi = 0;
            for (int i = 1; i < n; i++)
            {
                int subj = 0;
                for (int j = 0; j < n; j++)
                {
                    if (j == c)
                        continue;
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
             }
            d = d + (pow(-1, c) * mat[0][c] * det(n - 1, submat));
        }
    }
    return d;
}

int main(int argc, char **argv)
{
    int n,x;
    cin >> n;
    if(n==1)
    {
    	cin>>x;
    	cout<<x<<endl;
    	return 0;
	}
    double mat[17][17];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[j][i];
        }
    }
    cout <<det(n, mat);
	return 0;
}

