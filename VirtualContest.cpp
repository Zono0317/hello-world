#include <iostream>
using namespace std;


int main() {
    int n,s,t,w;
    cin >> n >> s >> t >> w;
    char a[n];
    cin >> a;
    int count =0;
    for(int i=0;i<n;i++){
        w=w+a[i];
        for(int j=0;j<n;j++){}
        if(w>=s&&w<=t){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
