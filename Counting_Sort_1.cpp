//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> counting_sort(vector<int>arr){
    vector<int> count(100,0);
    for(int i=0; i<arr.size(); i++){
        count[arr[i]]++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector <int> result = counting_sort(arr);
    for(int i = 0; i<result.size(); i++){
        cout<< result[i]<<" ";
    }
    cout<<endl;

    return 0;
}