#include<iostream>

using namespace std;

int main(){
    int n; cin >> n;
    if(n > 1 && n < 4){
        cout << "NO SOLUTION";
    }
    else{
        for(int i = 1;i <= n;i++){
            if(i % 2 == 0){
                cout << i << " ";
            }
        }
        for(int i = 1;i <= n;i++){
            if(i % 2 != 0){
                cout << i << " ";
            }
        }
    }
}