#include <iostream>

using namespace std;

int main()
{
    cout<<"                 UJIAN AKHIR SEMESTER GENAP                      "<<endl;
    cout<<"                  TAHUN AKADEMIK 2019/2020                       "<<endl;
    cout<<"==============================================================="<<endl;
    cout<<endl;
    cout<<"           <= PROGRAM BINTANG MENGIKUTI INPUTAN=>              "<<endl;
    cout<<endl;
    cout<<"==============================================================="<<endl;
    cout<<endl;
   int jml,i;
   int j=1;

   cout<<"Masukkan sebuah angka : ";
   cin>>jml;

   do{
   	for(i=2;i<jml+2;i++){
   	 if (i<=jml-2)
            cout<<"-";
	   else
            cout<<"*";
		}
		j++;
    cout<<endl;
   } while(j<=jml);


    cout<<"Masukkan sebuah angka : ";
    cin>>jml;
    j=1;
   do{
   	for(i=2;i<jml+2;i++){
   	 if (i<=jml-2)
            cout<<"-";
	   else
            cout<<"*";
		}
		j++;
    cout<<endl;
   } while(j<=jml);


    cout<<"Masukkan sebuah angka : ";
    cin>>jml;
    j=1;
   do{
   	for(i=2;i<jml+2;i++){
   	 if (i<=jml-3)
            cout<<"-";
	   else
            cout<<"*";
		}
		j++;
    cout<<endl;
   } while(j<=jml);


    cout<<"Masukkan sebuah angka : ";
    cin>>jml;
    j=1;
   do{
   	for(i=2;i<jml+2;i++){
   	 if (i<=jml-3)
            cout<<"-";
	   else
            cout<<"*";
		}
		j++;
    cout<<endl;
   } while(j<=jml);

    cout<<"==============================================================="<<endl;
    cout<<"                      ^_^ TERIMAKASIH ^_^                      "<<endl;
    cout<<"==============================================================="<<endl;
   return 0;
}
