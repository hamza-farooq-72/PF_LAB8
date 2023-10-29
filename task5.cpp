
#include<iostream>
using namespace std; 


bool IsPrime(int num) ;
string  howBad(int num);



 main(){
    int num ;
    cout<<"Enter a number: ";
    cin>> num ;
      
      cout <<  howBad(  num);

}


    string  howBad(int num){
       
    
        int digit  ;
         int countofOnes = 0 ;
         string res ;
         int primeOrnot ;

       while(num>=1){

            digit = num%2 ;

            if(digit == 1){
                 countofOnes++ ;
            }
                
            num = num/2 ;
       }
             primeOrnot = IsPrime(countofOnes) ;
           
             if(countofOnes%2 == 0 && primeOrnot == 1){

                  res = "Evil, Permicious" ;
                
            }


             else if(countofOnes%2 != 0  && primeOrnot == 1){

                res = "Odious, Permicious" ;
                
            }

            
            else if(countofOnes%2 == 0){

                  res = "Evil" ;
                
            }


             else if(countofOnes%2 != 0 ){

                res = "Odious" ;
                
            }
            return res ;

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

            else{
                return false;
            }
        }
        