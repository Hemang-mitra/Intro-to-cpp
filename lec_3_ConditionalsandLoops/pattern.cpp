#include <iostream>
using namespace std;
int main(){
    int r=0;
    cout << "Enter the number of rows: ";
    cin >> r;

    int i=1;
    while(i<=r){
        int j=1;
        while(j<=i){
            cout << j << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}
