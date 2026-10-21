
// //B-1000
// #include <stdio.h>
// int main(){
//     printf("Hello World!\n");
// }

// //B-1001
// #include<stdio.h>
// int main(){
//     int A,B;
//     scanf(" %d ",&A);
//     scanf(" %d ",&B);
//     int x=A+B;
//     printf("X = %d\n",x);
// }

// //B-1002
// #include<stdio.h>
// int main(){
//     double r;
//     scanf("%lf",&r);
//     double n = 3.14159;
//     printf("A=%.4lf\n",n*r*r);
// }

// //B-1003
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int SOMA = a+b;
//     printf("SOMA = %d\n",SOMA);
//}

// //B-1004
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int PROD = a*b;
//     printf("PROD = %d\n",PROD);
// }

//B-1005
// #include<stdio.h>
// int main(){
//     float a,b;
//     scanf("%f",&a);
//     scanf("%f",&b);
//     float MEDIA = (a*3.5+b*7.5)/(3.5+7.5);
//     printf("MEDIA = %.5f\n",MEDIA);
// }

// //B-1006
// #include<stdio.h>
// int main(){
//     double a,b,c;
//     scanf("%lf",&a);
//     scanf("%lf",&b);
//     scanf("%lf",&c);
//     double MEDIA = (a*2 + b *3 + c*5)/(2+3+5);
//     printf("MEDIA = %.1lf\n",MEDIA);
// }

// //B-1007
// #include<stdio.h>
// int main(){
//     long long int a,b,c,d;
//     scanf("%lld",&a);
//     scanf("%lld",&b);
//     scanf("%lld",&c);
//     scanf("%lld",&d);
//     printf("DIFERENCA = %lld\n",(a*b-c*d));
// }

// //B-1008
// #include<stdio.h>
// int main(){
//     long long int n,h;double a;
//     scanf("%lld",&n);
//     scanf("%lld",&h);
//     scanf("%lf",&a);
//     printf("NUMBER = %lld\n",n);
//     printf("SALARY = U$ %.2lf\n",h*a);
// }

// //B-1009
// #include<stdio.h>
// int main(){
//     char name[]="none";
//     double s,t;
//     scanf("%s",name);
//     scanf("%lf",&s);
//     scanf("%lf",&t);
//     printf("TOTAL = R$ %.2lf\n",s+.15*t);
// }

// //B-1010
// #include<stdio.h>
// int main(){
//     int c,u;float p;
//     scanf("%d %d %f",&c,&u,&p);
//     double a = u*p; 
//     scanf("%d %d %f",&c,&u,&p);
//     a += u*p;
//     printf("VALOR A PAGAR: R$ %.2lf\n",a);
// }

// //B-1011
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double r;
//     scanf("%lf",&r);
//     printf("VOLUME = %.3lf\n",(4/3.0)*3.14159*pow(r,3));
// }

// //B-1012
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double a,b,c;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     printf("TRIANGULO: %.3lf\n",0.5*a*c);
//     printf("CIRCULO: %.3lf\n",3.14159*pow(c,2));
//     printf("TRAPEZIO: %.3lf\n",(a+b)*c/2);
//     printf("QUADRADO: %.3lf\n",pow(b,2));
//     printf("RETANGULO: %.3lf\n",a*b);
// }

// //B-1013
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int mj = (a+b+abs(a-b))/2;
//     mj = (mj+c+abs(mj-c))/2;
//     printf("%d eh o maior\n",mj);
// }

// //B-1014
// #include<stdio.h>
// int main(){
//     int x;double y;
//     scanf("%d ",&x);
//     scanf("%lf ",&y);
//     printf("%.3lf km/l\n",x/y);
// }

// //B-1015
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double x1,x2,y1,y2;
//     scanf("%lf %lf",&x1,&y1);
//     scanf("%lf %lf",&x2,&y2);
//     printf("%.4lf\n",sqrt((pow(x2-x1,2)+pow(y2-y1,2))));
// }

// //B-1016
// #include<stdio.h>
// int main(){
//     int y;
//     scanf("%d",&y);
//     printf("%d minutos\n",2*y);
// }

// //B-1017
// #include <stdio.h>
// int main() {
 
//     int h,as;
//     scanf("%d",&h);
//     scanf("%d",&as);
//     long long int d = h*as;
//     printf("%.3lf\n",d/12.0);  
// }

// //B-1018
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int temp = n;
//     int arr[7]={100,50,20,10,5,2,1};
//     printf("%d\n",n);
//     for(int i=0;i<7;i++){
//         int count =0;
//         if(temp>=arr[i]){ //This if wasnt even needed. The code will run 7 times anyway.
//             count = temp/arr[i];
//             temp = temp%arr[i];
//         }
//         printf("%d nota(s) de R$ %d,00\n",count,arr[i]);
//     }
// }

// //B-1019
// #include<stdio.h>
// int main(){
//     long long int n;
//     scanf("%lld",&n);
//     int h,m,s;
//     h=n/3600;
//     m=(n%3600)/60;
//     s=n%60;
//     printf("%d:%d:%d\n",h,m,s);
// }

// // //B-1020
// #include<stdio.h>
// int main(){
//     int d;
//     scanf("%d",&d);
//     printf("%d ano(s)\n",d/365);
//     printf("%d mes(es)\n",(d%365)/30);
//     printf("%d dia(s)\n",d%365%30);
// }

// //B-1021
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double n;
//     scanf("%lf",&n);
//     int ndc= floor(n);
//     int dc=(n-ndc)*100;
//     int note[6]={100,50,20,10,5,2};
//     int coin[6]={100,50,25,10,5,1};
//     printf("NOTAS:\n");
//     for(int i=0;i<6;i++){
//         int countN=0;
//         countN = ndc/note[i];
//         ndc = ndc%note[i];
//         printf("%d nota(s) de R$ %d.00\n",countN,note[i]);
//     }
//     printf("MOEDAS:\n");
//     ndc = ndc*100;
//     int countT=0;
//     countT=ndc/coin[0];
//     printf("%d moeda(s) de R$ %.2f\n",countT,coin[0]/100.00);
//     for(int i=1;i<6;i++){
//         int countC=0;
//         countC= dc/coin[i];
//         dc= dc%coin[i];
//         printf("%d moeda(s) de R$ %.2f\n",countC,coin[i]/100.00);
//     }
// }

// //B-1035
// #include <stdio.h>
// int main() {
//     int a,b,c,d;
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     int sumCD =c+d;
//     int sumAB=a+b;
//     if((b>c)&&(d>a)&&(sumCD>sumAB)&&(c>0)&&(d>0)&&(a%2==0)){
//         printf("Valores aceitos\n");
//     }else printf("Valores nao aceitos\n");   
// }

// //B-1036
// #include <stdio.h>
// #include <math.h>
// int main() {
//     double a,b,c;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     double x = pow(b,2)-4*a*c;
//     if(a!=0&&x>0){
//         double r1 = (-b+sqrt(x))/(float)(2*a);
//         double r2 = (-b-sqrt(x))/(float)(2*a);
//         printf("R1 = %.5lf\n",r1);
//         printf("R2 = %.5lf\n",r2);
//     }else{printf("Impossivel calcular\n");}
// }