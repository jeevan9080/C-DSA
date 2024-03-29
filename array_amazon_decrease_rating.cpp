#include <bits/stdc++.h>
using namespace std;

// Function to count the number of strictly
// decreasing subarrays
int countDecreasing(int A[], int n)
{
	int cnt = 0; // Initialize result

	// Initialize length of current
	// decreasing subarray
	int len = 1;

	// Traverse through the array
	for (int i = 0; i < n - 1; ++i) {
		// If arr[i+1] is less than arr[i],
		// then increment length
		if (A[i + 1] < A[i])
			len++;

		// Else Update count and reset length
		else {
			cnt += (((len - 1) * len) / 2);
			len = 1;
		}
	}

	// If last length is more than 1
	if (len > 1)
		cnt += (((len - 1) * len) / 2);

	return cnt+n;
}

int main()
{
	int A[] = { 4,3,5,4,3 };
	int n = sizeof(A) / sizeof(A[0]);

	cout << countDecreasing(A, n);

	return 0;
}
