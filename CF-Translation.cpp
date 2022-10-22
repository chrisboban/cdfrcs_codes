#include <iostream>
#include <cstring>
 
using namespace std;
int main(){
    int f=0, j;
    string a, b;
    char y[100], z[100];
    cin >> a >> b;
    j=(a.length()-1);
    for(int i=0; i< a.length(); i++){
        y[i]=a[i];        
    }
    for(int i=0;i<a.length(); i++){
//           cout << j << endl;        
        z[i]=b[j];        
//        cout << b[j] << endl;
//        cout << z[i] << endl;
        j--;
    }
    for(int i=0; i< a.length(); i++){
        if(y[i]==z[i]){
            f++;     
        }
   
    }
    if (f==a.length()){
 cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}
