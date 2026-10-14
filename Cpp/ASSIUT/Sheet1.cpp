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