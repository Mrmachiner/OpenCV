#include<iostream> 
typedef int ai[50];
typedef float af[50];
af c, a;
ai x, xopt, ind;
int n;
float w, fopt, cost, weight;
FILE *input;
void nhapfile()
{
	char inName[64] = "D:\\TKGT\\Test.txt";
	int i;
	//    printf("Enter input file name: ");
	//    scanf("%63s", inName);
	if ((input = fopen(inName, "r")) != NULL)
	{
		fscanf(input, "%d", &n); // so luong do vat
		fscanf(input, "%f", &w); // trong luong cai tui
		for (i = 1; i <= n; i++) fscanf(input, "%f", &a[i]); // trong luong do vat
		for (i = 1; i <= n; i++) fscanf(input, "%f", &c[i]); // gia tri do vat
		fclose(input);
		printf("\nTrong luong cai tui la: %f", w); // in du lieu da nhap
		printf("\nVec to gia tri do vat: ");
		for (i = 1; i <= n; i++) printf("%f ", c[i]);
		printf("\nVec to trong luong do vat: ");
		for (i = 1; i <= n; i++) printf("%f ", a[i]);
	}
}
int max(int a, int b)
{
	return (a > b) ? a : b;
}
int knapSack(int W, int wt[], int val[], int n)
{

	if (n == 0 || W == 0)
		return 0;
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);
	else return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
		knapSack(W, wt, val, n - 1)
	);
}
int main()
{
	nhapfile();
	//    int val[] = {7, 10, 20,19,13,40}; 
	//    int wt[] = {3, 4, 5,7,6,9}; 
	int wt[] = { 12,2,1,1,4 };
	int val[] = { 4,2,1,2,10 };
	int  W = 15;
	// int n = sizeof(val)/sizeof(val[0]); 
	std::cout << knapSack(W, wt, val, n);
	return 0;
}