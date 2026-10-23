// //A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// //B
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int flag = 0;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         if((i+1)%2==0){
//             cout<<i+1<<endl;
//             flag = 1;
//         }
//     }
//     if(flag!=1){
//         cout<<-1<<endl;
//     }
// }

// //C
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int e=0;int o =0;int p=0;int m=0;
//     for(int i = 0; i<n;i++){
//         int x;
//         cin>>x;
//         if(x%2==0){e++;}else{o++;}
//         if(x>0){p++;}
//         if(x<0){m++;}
//     }
//     cout<<"Even: "<<e<<endl;
//     cout<<"Odd: "<<o<<endl;
//     cout<<"Positive: "<<p<<endl;
//     cout<<"Negative: "<<m<<endl;
// }

//D
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    while(true){
        cin>>x;
        if(x==1999){ cout<<"Correct"<<endl; break;}
        else{cout<<"Wrong"<<endl;}
    }
}