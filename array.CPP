#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>

main()
{
 int i;
 char nama[5][20];
 float nilai1[5];
 float nilai2[5];
 float hasil[5];
 clrscr();

 for(i=1;i<=2;i++)
 {

 cout<<"data ke-"<<i<<endl;
 cout<<"nama siswa:";gets(nama[i]);
 cout<<"nilai midtest:";cin>>(nilai1[i]);
 cout<<"nilai final:";cin>>nilai2[i];
 hasil[i]=(nilai1[i]*0.40)+(nilai2[i]*0.60);
 cout<<endl;
}
cout<<"--------------------"<<endl;
cout<<"No.nama siswa nilai nilai";
cout<<"hasil"<<endl;
cout<<"midtest final";
cout<<"ujian"<<endl;
cout<<"-----------------------"<<endl;
for(i=1;i<=2;i++)
{
 cout<<setiosflags(ios::left)<<setw(4)<<i;
 cout<<setiosflags(ios::left)<<setw(10)<<nama[i];
 cout<<setprecision(2)<<" "<<nilai1[i];
 cout<<setprecision(2)<<" "<<nilai2[i];
 cout<<setprecision(2)<<" "<<hasil[i]<<endl;
}
cout<<"------------------------------------"<<endl;
 getch();
}
