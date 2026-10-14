
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