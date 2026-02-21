#include <iostream>
using namespace std;
bool Prime(int n)
            // Function for finding either the given numer is prime or not
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
        // Function Factorial of  Number
int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

          // Function For Cube.
int cube(int a){
    int ans= a*a*a;
    return ans;
}
            // Function For Swapping
    void rotate(int &g, int &h, int &q) {
    int temp = g;
    g = q;
    q = h;
    h = temp;
}

int main()
{
    int a, b;
    cout << "Enter Two Numbers : ";
    cin >> a;
    cin >> b;
    cout<<"0 and 1 To Show Either Your Numbers is Prime or Not"<<endl;
    cout << Prime(a) << endl;
    cout << Prime(b) << endl;
    int e,f;
    cout<<"Enter Two Numbers: ";
    cin>>e>>f;
    cout<<"Factorial of Your Numbers are: ";
    cout << fact(e) << endl;
    cout << fact(f) << endl;

    //  Find the cube of a number using Function. 
    int cub;
    cout<<"Enter Your Number To Find Its Cube: "<<endl;
    cin>>cub;
    cout<<"Cube Of Your Number Is: ";
    cout<<cube(cub)<<endl<<endl;
    
    //    Swapping The Number
    int g, h, q ;
    cout<<"Enter Your Number: ";
    cin>>g>>h>>q;
    rotate(g, h, q);
    cout<<"Your Swapped Number Is: ";
    cout << g << " " << h << " " << q;
}
