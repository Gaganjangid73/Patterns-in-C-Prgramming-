#include<iostream>
using namespace std;

void ntrainglepattern( int n){
   
   for(int i=1; i<n ; i++){
     for(int j=1; j<=i; j++){
        cout<<i<<" ";
     }
     cout<<endl;
   }

}

int main(){

    ntrainglepattern(5);
}