#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

const double g= 9.806;
const double PI = 3.141592654;

int main()
{
    double massa;
    double ax=0;
    double ay=-g;
    double tstep=0.01;
    double t=0;
    double Vo,Vx,Vy,Vxo,Vyo,Xo,Yo,sudut;
    double y = 0;
    double x = 0;
    cout<<"Masukkan Kecepatan Awal (Vo) : "<<endl;
    cin>>Vo;
    cout<<"Masukkan Sudut Kemiringan (sudut) : "<<endl;
    cin>>sudut;

    cout<<ay;

    Vxo = Vo * cos (sudut*PI/180);
    Vy = Vo * sin (sudut*PI/180);
    Vx= Vxo;

    /*do{
        Vy = Vy + (ay*tstep);
        y = (Vo * sin(sudut *PI))+ (0.5 * ay*t*t);
        cout<<Vy<<endl;
        t=t+tstep;
    }while(y >= 0);*/
    while(y >= 0){
        Vy = Vy + (ay*tstep);
        y = y + (Vy*tstep);
        x = x + (Vx * tstep);
        t = t + tstep;
        cout<<y<<endl;
        cout<<x<<endl;
        cout<<t<<endl;
    }




    return 0;
}
