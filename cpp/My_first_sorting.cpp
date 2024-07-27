#include <bits/stdc++.h>
using namespace std;
void problemA(){
    int x , y;
    cin >> x >> y ;
    if (x > y)
    swap(x,y);
    cout << x << " " << y << endl ;
}
int main() {
    int t;
    cin >> t ;
    while(t--) problemA();   
    return 0;
}