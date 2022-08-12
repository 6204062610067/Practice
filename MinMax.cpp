#include <iostream>
using namespace std;
int main(){
	int n,i,x,min = 2000000000 , max = -2000000000;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> x;
        if (x<=min) min = x;

        if (x>=max) max = x;
    }
    cout << min << "\n";
    cout << max;
}