#include <stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
    const int nSignal=2; //no. of signal fed i.e n
    char andDiode(bool A, bool B, char diodes);//output and diodes that takes 3 inputs, 1 from i/p diode and n=2 from signal sources
                                            //and returns the data of diode only if both 2 input are false
    char orDiode(char w, char x, char y, char z);//or gate that gives the data of diode that has no false value

    int main(){
        char diodes[]={'w','x','y','z'};//input diode i.e 2^n
        char diodeOp[4];//just a buffer to store diode output inside loop from line 16
        bool A,B,newA,newB; //signal input
        int c=0;
        cout<<"type the bool input for signals A and B(0/1)"<<endl;
        cin>>A>>B;
        for(int i=1; i<=4; i++){
            if(i<=(4/2)){
                newA=!A;
                }
            else newA=A;
            if(i%2==0){
                newB=B;
            }
            else newB=!B;
            diodeOp[i-1]=andDiode(newA,newB,diodes[i-1]);
        }
            

        char OP =orDiode(diodeOp[0],diodeOp[1],diodeOp[2],diodeOp[3]);
        cout<<"the output data is "<<OP<<endl;

        getch();
        return 0;
    }
    


char andDiode(bool A, bool B, char diodes){
    if(A==true && B==true) return diodes;
    else return 'g';

}

char orDiode(char w, char x, char y, char z){
        char dn[]={w, x, y, z};
        for(char dnn:dn){
            if(dnn!='g') {
                return dnn;
                break;
                }
        }
        return 'g';
    }
