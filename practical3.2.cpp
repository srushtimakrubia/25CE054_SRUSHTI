#include<iostream>
#include<chrono>
using namespace std;
using namespace chrono;

class array_sum
{
public:
    void input_data(int n, int arr[])
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    int recursive(int n,int arr[])
    {
        if(n==0)
        {
            return 0;
        }
        return arr[n-1]+recursive(n-1,arr);
    }

    int itrative(int n,int arr[])
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
           sum=sum+arr[i];
        }
        return sum;
    }
};

int main()
{
    int n;
    int arr[100];

    cout<<"enter the num. of element : ";
    cin>>n;

    array_sum a1;

    cout<<"enter elements : ";
    a1.input_data(n,arr);

    auto start_iter = high_resolution_clock::now();
    int itr_sum = a1.itrative(n, arr);
    auto end_iter = high_resolution_clock::now();
    auto duration_iter = duration_cast<nanoseconds>(end_iter - start_iter);
    cout << "\nTime taken by iterative sum: " << duration_iter.count() << " nanoseconds" << endl;

    auto start_rec = high_resolution_clock::now();
    int rec_sum = a1.recursive(n, arr);
    auto end_rec = high_resolution_clock::now();
    auto duration_rec = duration_cast<nanoseconds>(end_rec - start_rec);
    cout << "Recursive sum = " << rec_sum << endl;
    cout << "Time taken by recursive sum: " << duration_rec.count() << " nanoseconds" << endl;
}
