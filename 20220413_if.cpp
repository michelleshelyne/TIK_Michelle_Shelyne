#include <iostream>
using namespace std; 

int main(){
    /* 
    jika nilai >= 90 lulus sangat memuaskan
    jika nilai >= 80 lulus memuaskan
    jika nilai >= 75 cukup
    tidak boleh > 100
    tidak boleh < 0 
    <75 tidak lulus
    */
    int nilai;
    cout<<"masukkan nilai = "; cin>>nilai;
    if (nilai >= 100) {
            cout<<"diluar jangkauan";
    }
    else if (nilai >= 90) {
            cout<<"lulus sangat memuaskan";
    }
    else if (nilai >= 80) {
            cout<<"cukup";
    }
    else if (nilai >100) {
        cout<<"lulus memuaskan";
    }
    else if (nilai <0) {
        cout<<"tidak lulus";
    }
    else {
            cout<<"tidak lulus";
    }
    
    
    
    
      return 0;
    }//end of main function
           
