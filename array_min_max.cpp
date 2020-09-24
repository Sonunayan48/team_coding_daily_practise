#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int mi = arr[0], ma = arr[0];
    for (int i:arr){
        mi = mi>i?i:mi;
        ma = ma<i?i:ma;
    }
    cout << "MAX:"<< ma << endl;
    cout << "MIN:"<< mi << endl;
}