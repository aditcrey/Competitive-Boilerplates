#include<bits/stdc++.h>
using namespace std;

int main(){

vector<bool> sieve(100+1,true);
    
    sieve[0] = false;
    sieve[1] = false;
    
    for(int i=2;i*i<=100;i++){
        if(sieve[i]==true){
            for(int j=2;i*j<=100;j++){
                sieve[i*j] =false;
            }
        }
        
    }


for(int i=0;i<101;i++) if(sieve[i]==true) cout<<i<<" ";


return 0;
}
