#include <iostream>
using namespace std;
int main(){
    int a[100][100];
    int n=0;
    cout << "Enter the number of rows: ";
    cin >> n;

    int m=0;
    cout << "Enter the number of columns: ";
    cin >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    //Row wise
    cout << "printing row wise" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    //Column wise
    cout << "printing col wise" << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
