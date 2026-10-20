// //A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     cout<<"Hello, "<<s<<endl;
// }

// //B
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     long long b;
//     char c;
//     float d;
//     double e;
//     cin>>a>>b>>c>>d>>e;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     cout<<d<<endl;
//     cout<<e<<endl;
// }

// //C
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int x,y;
//     cin>>x>>y;
//     cout<< x << " + "<<y<<" = "<<x+y<<endl;
//     cout<< x << " * "<<y<<" = "<<x*y<<endl;
//     cout<< x << " - "<<y<<" = "<<x-y<<endl;
// }

// //D
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     cout<<"Difference = "<<(a*b)-(c*d)<<endl;
// }

// //E
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     const double PI = 3.141592653;
//     double r;
//     cin>>r;
//     double area = PI*r*r;
//     cout<<fixed<<setprecision(9)<<area<<endl;
// }

// //F
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int n,m;
//     cin>>n>>m;
//     cout<<(n%10)+(m%10)<<endl;
// }

// //G
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int n;
//     cin>>n;
//     cout<<(n*(n+1))/2<<endl;
// }

// //H
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"floor "<<a<<" / "<<b<<" = "<<floor((float)a/b)<<endl;
//     cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil((float)a/b)<<endl;
//     cout<<"round "<<a<<" / "<<b<<" = "<<round((float)a/b)<<endl;
// }

// //I
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     a>=b?cout<<"Yes"<<endl:cout<<"No"<<endl;
// }

// //J
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     a%b==0||b%a==0?cout<<"Multiples"<<endl:cout<<"No Multiples"<<endl;
// }

// //K
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<min(min(a,b),c)<<" "<<max(max(a,b),c)<<endl;
// }

// //L
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string f1,s1,f2,s2;
//     cin>>f1>>s1;
//     cin>>f2>>s2;
//     s1==s2?cout<<"ARE Brothers"<<endl:cout<<"NOT"<<endl;
// }

// //M
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char a;
//     cin>>a;
//     if(a>=48 && a <=57){
//         cout<<"IS DIGIT"<<endl;
//     }else{
//         cout<<"ALPHA"<<endl;
//         if(a>=65 && a<=90){
//             cout<<"IS CAPITAL"<<endl;
//         }else if(a>=97 && a<=122){
//             cout<<"IS SMALL"<<endl;
//         } 
//     }
// }

// //N
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char x;
//     cin>>x;
//     if(x>=97&&x<=122){
//         cout<<(char)(x-32)<<endl;
//     }else if(x>=65&&x<=90){
//         cout<<(char)(x+32)<<endl;
//     }
// }

// //O
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     char s;
//     cin>>a>>s>>b;
//     switch(s){
//         case '+': cout<<a+b<<endl;break;
//         case '-': cout<<a-b<<endl;break;
//         case '*': cout<<a*b<<endl;break;
//         case '/': cout<<a/b<<endl;break;
//     }
// }

// //P
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     x= x/1000;
//     x%2==0?cout<<"EVEN"<<endl:cout<<"ODD"<<endl;
// }

// //Q
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     float x,y;
//     cin>>x>>y;
//     if(x>0){
//         if(y>0) cout<<"Q1"<<endl;
//         else if(y<0) cout<<"Q4"<<endl;
//         else cout<<"Eixo X"<<endl;
//     }else if(x<0){
//         if(y>0) cout<<"Q2"<<endl;
//         else if(y<0) cout<<"Q3"<<endl;
//         else cout<<"Eixo X"<<endl;
//     }else{
//         if(y==0) cout<<"Origem"<<endl;
//         else cout<<"Eixo Y"<<endl;
//     }
// }

// //R
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int y = n/365;
//     int m = (n%365)/30;
//     int d = (n%365)%30;
//     cout<<y<<" years"<<endl;
//     cout<<m<<" months"<<endl;
//     cout<<d<<" days"<<endl;
// }

// //S
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     double x;
//     cin>>x;
//     if(x>=0&&x<=25){
//         cout<<"Interval [0,25]"<<endl;
//     }else if(x>25&&x<=50){
//         cout<<"Interval (25,50]"<<endl;
//     }else if(x>50&&x<=75){
//         cout<<"Interval (50,75]"<<endl;
//     }else if(x>75&&x<=100){
//         cout<<"Interval (75,100]"<<endl;
//     }else{
//         cout<<"Out of Intervals"<<endl;
//     }
// }

// //T
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>=b&&a>=c){
//         if(b>=c){
//             cout<<c<<endl<<b<<endl<<a<<endl;
//         }else{
//             cout<<b<<endl<<c<<endl<<a<<endl;
//         }
//     }else if(b>=a&&b>=c){
//         if(a>=c){
//             cout<<c<<endl<<a<<endl<<b<<endl;
//         }else{
//             cout<<a<<endl<<c<<endl<<b<<endl;
//         }
//     }else if(c>=a&&c>=b){
//         if(a>=b){
//             cout<<b<<endl<<a<<endl<<c<<endl;
//         }else{
//             cout<<a<<endl<<b<<endl<<c<<endl;
//         }
//     }
//     cout<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
// }

// //U
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     float n;
//     cin>>n;
//     float dc=n-floor(n);
//     int ndc=floor(n);
//     if(dc==0.00){
//         cout<<"int "<<ndc<<endl;
//     }else{
//         cout<<"float "<<ndc<<" "<<fixed<<setprecision(3)<<dc<<endl;
//     }
// }

// //V
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     char s;
//     cin>>a>>s>>b;
//     switch(s){
//         case '<': a<b? cout<<"Right"<<endl:cout<<"Wrong"<<endl;break;
//         case '>': a>b? cout<<"Right"<<endl:cout<<"Wrong"<<endl;break;
//         case '=': a==b? cout<<"Right"<<endl:cout<<"Wrong"<<endl;break;
//     }
// }

// //W
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     char q,s;
//     cin>>a>>s>>b>>q>>c;
//     switch(s){
//         case '+': (a+b)==c?cout<<"Yes"<<endl:cout<<a+b<<endl;break;
//         case '-': (a-b)==c?cout<<"Yes"<<endl:cout<<a-b<<endl;break;
//         case '*': (a*b)==c?cout<<"Yes"<<endl:cout<<a*b<<endl;break;
//     }
// }

// //X
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;
//     if(((l1>=l2&& l1>=r2)||(r1>=l2&& r1>=r2)||(r2>=l1&& r2>=r1)||(l2>=l1&& l2>=r1))&& (!((l1>l2 && r1>l2)||(l2>l1 &&r2>l1)||(l1<l2 && r1<l2)||(l2<l1 &&r2<l1)))){
//         if(l2>=l1&&r2>=r1) cout<<l2<<" "<<r1<<endl;
//         else if(l1>=l2&&r1>=r2) cout<<l1<<" "<<r2<<endl;
//     }
//     else cout<<-1<<endl;
// }

// //X
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;
//     if((l2>=l1&&l2<=r1)||(r2>=l1&&r2<=r1)||(l1>=l2&&l1<=r2)||r1>=l2&&r1<=r2){
//         if(l2>=l1&&r2>=r1) cout<<l2<<" "<<r1<<endl;
//         else if(l1>=l2&&r1>=r2) cout<<l1<<" "<<r2<<endl;
//         else if(l2>=l1&&r2<=r1) cout<<l2<<" "<<r2<<endl;
//         else if(l1>=l2&&r1<=r2) cout<<l1<<" "<<r1<<endl;
//     }
//     else cout<<-1<<endl;
// }

// //Y
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     a=a%100;
//     b=b%100;
//     c=c%100;
//     d=d%100;
//     long long int x = (a*b*c*d)%100;
//     if(x<10){
//         cout<<0<<x<<endl;
//     }else cout<<x<<endl;
// }

// //Z
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     cout<<((b*log(a))>(d*log(c))?"YES":"NO")<<endl;
// }