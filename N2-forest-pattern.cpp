#include<iostream>
using namespace std;

void npattern( int n){
   
   for(int i=0; i<n ; i++){
     for(int j=0; j<=i; j++){
        cout<<"*";
     }
     cout<<endl;
   }

}

int main(){

    npattern(3);
}