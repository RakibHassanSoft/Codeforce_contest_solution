

#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the product of elements in a vector
long long calculateProduct(vector<int> &digits)
{
    long long product = 1;
    for (int digit : digits)
    {
        product *= digit;
    }
    return product;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> digits(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> digits[i];
        }

        long long maxProduct = 0;

        for (int i = 0; i < n; ++i)
        {
            vector<int> tempDigits = digits;
            tempDigits[i]++; // Add 1 to the i-th digit
            long long product = calculateProduct(tempDigits);
            maxProduct = max(maxProduct, product);
        }

        cout << maxProduct << endl;
    }

    return 0;
}
