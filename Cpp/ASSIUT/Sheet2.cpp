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

// //D
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//     while(true){
//         cin>>x;
//         if(x==1999){ cout<<"Correct"<<endl; break;}
//         else{cout<<"Wrong"<<endl;}
//     }
// }

// //E
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     long long int x,mx=0;
//     while(n--){
//         cin>>x;
//         if(x>=mx){
//             mx = x;
//         }
//     }
//     cout<<mx;
// }

// //F
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=12;i++){
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//     }
// }

// //G
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t=1;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         long long int fact=1;
//         if(n==0 || n==1){
//             cout<< fact<<endl;
//         }else{
//             for(int i=2;i<=n;i++){
//                 fact*=i;
//             }
//             cout<<fact<<endl;
//         } 
//     }
// }

// //H
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x,found=0;
//     cin>>x;
//     if(x<=1){
//         cout<<"NO"<<endl;
//     }else{
//         for(int i = 2;i<x/2;i++){
//             if(x%i==0){
//                 found=1;break;
//             }
//         }
//         if(found){
//             cout<<"NO"<<endl;
//         }else{
//             cout<<"YES"<<endl;
//         }
//     }
// }

// //I
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,temp=0,rev=0,r;
//     cin>>n;
//     temp = n;
//     while(temp){
//         r=temp%10;
//         rev=rev*10+r;
//         temp=temp/10;
//     }
//     cout<<rev<<endl;
//     if(n == rev){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
// }

// //J
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,found=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         found = 1;
//         for(int j=2;j<i;j++){ //going till the last digit before i is enough
//             if((i%j==0)&&(i!=j)){
//                 found = 0;break;
//             }
//         }
//         if(found){
//             cout<<i<<" ";
//         }
//     }
// }

// //K
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<endl;
//         }
//     }
// }

// //L (Euclidean Algorithm)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,temp,r;
//     cin>>a>>b;
//     if(a<b){temp = a;a=b;b=temp;}
//     while(b){r=a%b;a=b;b=r;}
//     cout<<a<<endl;
// }

// //L (alt)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,r;
//     cin>>a>>b;
//     if(a<b) {int temp =a;a=b;b=temp;}
//     for(int i =1;i<=b;i++){
//         if(a%i==0 && b%i==0){
//             r=i;
//         }
//     }
//     cout<<r<<endl;
// }

// //M
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,e=0;
//     cin>>a>>b;
//     for(int i=a;i<=b;i++){
//         int temp = i,r=0,f=1;
//         while(temp){
//             r=temp%10;
//             if(r!=4&&r!=7){
//                 f=0;
//             }
//             temp/=10;
//         }
//         if(f){
//             e=1;
//             cout<<i<<" ";
//         }
//     }
//     if(!e){
//         cout<<-1<<endl;
//     }
// }

// //N
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char s;
//     int n;
//     cin>>s;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;cin>>x;
//         for(int j=0;j<x;j++){
//             cout<<s;
//         }
//         cout<<endl;
//     }
// }