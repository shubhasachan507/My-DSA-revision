#include<iostream>

using namespace std;

void printPattern(int n){
// 1 2 3 4 5 6 6 5 4 3 2 1 
// 1 2 3 4 5 * * 5 4 3 2 1 
// 1 2 3 4 * * * * 4 3 2 1 
// 1 2 3 * * * * * * 3 2 1 
// 1 2 * * * * * * * * 2 1 
// 1 * * * * * * * * * * 1 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        if(i>=2){
        for(int j=1;j<=(2*i-2);j++){
            cout<<"*"<<" ";
        }
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//void printPattern(int n){
    
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         for(int k=i-1;k>=1;k--){
//                 cout<<k<<" ";
//             }
//         cout<<endl;

//     }
    
// }

// void printPattern(int n){
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             char val = 'A'+j-1;
//             cout<<val<<" ";
//         }
//         cout<<endl;
//     }
// }

// void printPattern(int n){
// A A A A A A A 
// B B B B B B B 
// C C C C C C C 
// D D D D D D D 
// E E E E E E E 
// F F F F F F F 
// G G G G G G G 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             char val = 'A'+i-1;
//             cout<<val<<" ";
//         }
//         cout<<endl;
//     }
// }

// void printPattern(int n){
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//          cout<<i-j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// void printPattern(int n){
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i+j-1<<" ";
//         }
//         cout<<endl;
//     }
// }

// void printPattern(int n){
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
// * * * * * * * 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// void printPattern(int n){
// * * * 
// * * 
// * 
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// void printPattern(int n){
// 1 2 3 4 5 6 
// 7 8 9 10 11 12 
// 13 14 15 16 17 18 
// 19 20 21 22 23 24 
// 25 26 27 28 29 30 
// 31 32 33 34 35 36 
//     int count = 1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//          cout<<count<<" ";
//          count = count + 1;
//         }
//         cout<<endl;
//     }
// }

// void printPattern(int n){
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//            cout<<n-j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int n;
    cin>>n;
    printPattern(n);
}