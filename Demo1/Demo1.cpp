#include <iostream>
using namespace std;
double ave(double a[], int);//平均  
double variance(double a[], int);//方差； 
int main()
{
	int i, j,k;
	k = 0;
	int iArray[2][3] =
	{
		{ 1, 2, 3 },{ 4, 5, 6 }
	};
	//int iArray[3] ={1,2,3};
	int m;
	m= sizeof(iArray[0]) / sizeof(int);
	int n;
	n = sizeof(iArray) / sizeof(int) / (sizeof(iArray[0]) / sizeof(int));
	int jArray[5];
	for (i = 0; i < n;i++)
	{
		for (j = 1; j <m;j++)
		{
			jArray[k]=iArray[i][j]-iArray[i][0];
			k++;
		}
	}
	//计算斜率
	//double a = (iArray[1][2] - iArray[1][0]) / (iArray[0][2] - iArray[0][0]);
	//double b = (iArray[1][2] - iArray[1][1]) / (iArray[0][2] - iArray[0][1]);	
	//cout << a<<endl<<b;
	//cout << iArray[1][0]<<endl;
	cout << m<<endl<<n<<endl ;
	//jArray[j] = iArray[i][j] - iArray[0][0];

	for (i = 0; i < k;i++)
	{
		cout << jArray[i]<<endl;
	}
	getchar();
	getchar();
}

