#include <iostream>
using namespace std;
int main()

{
    cout<<"                 UJIAN AKHIR SEMESTER GENAP                      "<<endl;
    cout<<"                  TAHUN AKADEMIK 2019/2020                       "<<endl;
    cout<<"==============================================================="<<endl;
    cout<<endl;
    cout<<"            <= SUHU RUANGAN BESERTA KETERANGAN =>              "<<endl;
    cout<<endl;
    cout<<"==============================================================="<<endl;
    cout<<endl;
    int suhu[5] = {15,20,28,37,19};

    for(int i =0;i<5;i++){
    if(suhu[i]<20)
    {
        cout<<"Suhu = "<<suhu[i]<<" termasuk SUHU DINGIN"<<endl;
    }
    else if(suhu[i]>=20 && suhu[i] <=35)
    {
        cout<<"Suhu = "<<suhu[i]<<" termasuk SUHU NORMAL"<<endl;
    }
    else if(suhu[i]>35)
    {
        cout<<"Suhu = "<<suhu[i]<<" termasuk SUHU TINGGI"<<endl;
    }
    cout<<endl;
    }

    cout<<"==============================================================="<<endl;
    cout<<"                     ^_^ TERIMAKASIH ^_^                      "<<endl;
    cout<<"==============================================================="<<endl;

    return 0;
}
