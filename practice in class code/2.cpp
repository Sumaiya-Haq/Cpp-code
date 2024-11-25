//write a c++ program to find out of A.P serise sum
#include<iostream>
using namespace std;
inline float series(int n,int a,int b)
{
    return (n/2)*(2*a+(n-1)*b);
    
}
int main()
{
    int n,a,b;
    float sum;
    cin>>n>>a>>b;
    sum=series(n,a,b);
    cout<<"ap="<<sum;
    

}
/*#include <iostream>
using namespace std;

// Inline function to calculate the sum of the first `n` terms of an A.P.
inline float series(int n, int a, int d) {
    return (n / 2.0) * (2 * a + (n - 1) * d);
}

int main() {
    int n, a, d;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    cout << "Enter the first term (a): ";
    cin >> a;
    cout << "Enter the common difference (d): ";
    cin >> d;

    // Call the function and store the result in `sum`
    float sum = series(n, a, d);  
    cout << "Sum of the A.P. series: " << sum << endl;

    return 0;
}*/


    