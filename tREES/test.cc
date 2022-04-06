// C++ program to print all
// three-primes smaller than
// or equal to n without using
// extra space
#include <bits/stdc++.h>
using namespace std;

void numbersWith3Divisors(int);
bool isPrime(int);

// Generates all primes upto n and
// prints their squares
int maxSum(int n, vector<int> arr)
{
  int sum1=0,sum2=0;
  sort(arr.begin(),arr.end());
  for(int i=0;i<n/2;i++)
  sum1+=arr[i];
  for(int i=n/2;i<n;i++)
  sum2+=arr[i];
  
return abs(sum1-sum2) ;

}
// Driver code
int main()
{
	int n = 4;
	vector<int> arr = {2,2,2,2};
	cout<<maxSum(n,arr);

	return 0;
}

908
