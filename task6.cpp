
#include<iostream>
#include<cmath>
using namespace std; 



int  PileCubes(double vol);


 main(){
    double vol ;
    cout<<"Enter a number: ";
    cin>> vol ;

      cout << PileCubes(vol) ;

}
    int  PileCubes(double vol){
        double  cubeCounts = 0;
        double count = 0 ;
        
        for(int x = 1 ; x <= vol ; x++){
            
            cubeCounts =  pow(x,3) + cubeCounts ;
             count++ ;

             if(cubeCounts==vol){

                return count ;
        }
            }

            if(cubeCounts > vol ){

                


                return -1 ;
            }
    
    }