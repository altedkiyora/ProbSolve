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

//J
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a%b==0||b%a==0?cout<<"Multiples"<<endl:cout<<"No Multiples"<<endl;
}