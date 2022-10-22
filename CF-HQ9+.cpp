#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string a;
    cin >> a;
    int b = a.length(), c=0;
    for(int i=0; i<b;i++){
        if ((a[i]=='9')||(a[i]==72)||(a[i]==81)){
            c++;
        }
    }
    
    if (c>0) cout << "YES";
    else cout << "NO";
    
    return 0;
}
