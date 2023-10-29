
#include<iostream>
using namespace std; 



void  flower(string seed, int water , int fert , int temp);
bool  IsPrime(int num) ;

 main(){
    string seed ;
    int water, fert, temp ;
    cout<<"Enter the seed type: ";
    cin>> seed ;
     cout<<"Enter the amount of water: ";
    cin>> water ;
     cout<<"Enter the amount of fertilizer: ";
    cin>> fert ;
     cout<<"Enter the temperature: ";
    cin>> temp ;
      
      flower( seed,  water ,  fert ,  temp);

 }


       

void  flower(string seed, int water , int fert , int temp){
             if((temp <= 30) && (temp >= 20)){

            for(int flowers = 1;flowers <= water; flowers++ ){


                    for(int stems= 1; stems <= water ; stems++){

                        cout<<"-";

                    }
                      for(int flower= 1; flower <= fert ; flower++){

                        cout<< seed; 

                    }
            }
}

if(temp > 30 || temp < 20){
            for(int stems= 1; stems <= water ; stems++){

                        cout<<"-"; 
            }
             cout<< seed ;
}      
}