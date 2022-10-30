#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
  float a,b,c;
  float d,root1,root2;

  printf("Enter quadratic equation in the format ax^2+bx+c: ");
  cin>>a>>b>>c;

  d = b * b - 4 * a * c;

  if(d < 0){
    printf("Roots are complex number.\n");

    return 0;
  }

   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f",root1,root2);

  return 0;
}
