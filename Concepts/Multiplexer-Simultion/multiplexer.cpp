#include <stdlib.h>
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
        bool A,B; //to be reconstructed
        bool signals[2];//to be reconstructed
        int c=0;
        for(int i=1; i<=nSignal; i++){
            for(int j=1; j<=nSignal; j++){
                
                i==1?A=true:A=false;
                j==1?B=true:B=false;
                
                diodeOp[c]=andDiode(A, B, diodes[c]);
                
                c++;
                
            }
        }
        char OP =orDiode(diodeOp[0],diodeOp[1],diodeOp[2],diodeOp[3]);
        
        cout<<"the required diode is :"<<OP;

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