#include <iostream>
using namespace std;
int main(){
    int a,z;
    long long int c,b;
    cin >>a;
    for(int i=0;i<a;i++){
        cin >> b >> c;
        b=(b*b);
        z=c/b;        
        cout << z << endl;
    }
 
    return 0;
}
