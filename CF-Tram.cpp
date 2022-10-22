 #include <iostream>
 using namespace std;
 
 int main(){
     int a,b,c, strength=0, max=0;
     cin >> a;
     for(int i=0; i<a; i++){
         cin >> b >> c;
         strength=(strength+c-b);
         if (strength>max) max=strength;
     }
     cout << max;     
     return 0;
 }
