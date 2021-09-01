#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int i = n - 1;
    int temp = arr[n-1];
    while(i>0)
    {
        arr[i] = arr[i-1];
        i--;
    }    
    arr[0] = temp;
    cout << "Rotated array: ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
return 0;
}