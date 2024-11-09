#include<iostream>
using namespace std;

void pattern( int n){
   // this loop for the star traingle pattern
   for(int i=0; i<n ; i++){
    // space 
     for(int j=0; j<n-i-1; j++){
        cout<<" ";
     }
     // print *
     for(int j=0; j<2*i+1;j++){
      cout<<"*";
   }
   // space 
   for(int j=0; j<n-i-1; j++){
        cout<<" ";
     }

     cout<<endl;
   }

 // this loop for the reverse star traingle pattern
 for(int i=0; i<n ; i++){
    // space 
     for(int j=0; j<i; j++){
        cout<<" ";
     }
     // print *
     for(int j=0; j< 2*n-(2*i+1);j++){
      cout<<"*";
   }
   // space 
   for(int j=0; j<i; j++){
        cout<<" ";
     }

     cout<<endl;
   }

// and then both both traingle combination are called Star Diamond pattern

}

int main(){

    pattern(6);
}