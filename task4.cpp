#include<iostream>
using namespace std; 



int  PrimeNumbers(int num);
bool  IsPrime(int num) ;

 main(){
    int num ;
    cout<<"Enter a number: ";
    cin>> num ;
      
      cout << PrimeNumbers(num) ;

}
    int  PrimeNumbers(int num){
        int counts = 0;
        for(int x = 2; x <= num ; x++){
             
            int primenum = IsPrime(x) ;

            if(primenum == 1){
                counts = counts + 1 ;
            }
        }
          return counts ;
          }
    
        bool  IsPrime(int num){
                int count = 0 ;
            for(int x = 1; x<= num ; x++ ){
                if(num%x == 0){
                     count = count + 1 ;
                }
             }
             if(count==2){

                return true;
            }
            
                return false;
        }