#include <conio.h>
#include <iostream.h>

main() {
int A,B,C,maks;
cout<<"A : ";
cin>> A;
cout<<"B : ";
cin>>B;
cout<<"C : ";
cin>>C;
if((A>B) && (A>C))
maks = A;
else if ((B>A) && (B>C))
maks = B;
else
maks = C;
cout<<"bilangan terbesar adalah "<<maks;
getch();
return 0;
}
