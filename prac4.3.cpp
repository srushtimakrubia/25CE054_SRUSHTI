#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "enter the n : " << endl;
    cin  >> n;
    cout << "enter the m : " << endl;
    cin  >> m;

    int *arr1 = new int[n];
    int *arr2 = new int[m];
    int *merged = new int[n+m];

    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }

    for(int j=0; j<m; j++)
    {
        cin >> arr2[j];
    }

    int i = 0 , j=0 , k=0;

    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while(i<n)
    {
        merged[k++]=arr1[i++];
    }

    while(j<m)
    {
        merged[k++]=arr2[j++];
    }

    for(int i=0;i<n+m; i++)
    {
        cout << merged[i];
    }
    delete[] arr1;
    delete[] arr2;
    delete[] merged;
}
