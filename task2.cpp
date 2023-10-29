
#include<iostream>
using namespace std;
float calculatedamage(string myType ,string opponentType, float attackPower, float defence );


main(){

        string myType ,  opponentType ;
        float  attackPower ,  defence ;


    cout<<"Enter your Type: ";
    cin>>myType;
    cout<<"Enter opponent Type: ";
    cin>>opponentType;
    cout<<"Enter your attack power: ";
    cin>>attackPower;
    cout<<"Enter opponent dence power: ";
    cin>>defence;
  
    
    cout <<  calculatedamage( myType , opponentType,  attackPower,  defence );

}
   float calculatedamage(string myType ,string opponentType, float attackPower, float defence ){
    float effectiveness  ;


        if(myType == "fire" && opponentType == "water"){

                effectiveness = 0.5 ;
    
    }
         else if(myType == "fire" && opponentType == "grass"){

                effectiveness = 2 ;
        
    }
     else if(myType == "fire" && opponentType == "electric"){

                effectiveness = 1 ;
        
    }
         else if(myType == "water" && opponentType == "fire"){

                effectiveness = 2 ;
    
    }
         else if(myType == "water" && opponentType == "grass"){

                effectiveness = 1 ;
        
    }
     else if(myType == "water" && opponentType == "electric"){

                effectiveness = 0.5 ;
        
    }
         else if(myType == "grass" && opponentType == "water"){

                effectiveness = 2 ;
    
    }
     else    if(myType == "grass" && opponentType == "fire"){

                effectiveness = 0.5 ;
        
    }
      else  if(myType == "grass" && opponentType == "electric"){

                effectiveness = 1 ;
        
    }

      else  if(myType == "electric" && opponentType == "water"){

                effectiveness = 2 ;
    
    }
       else  if(myType == "electric" && opponentType == "fire"){

                effectiveness = 1 ;
        
    }
     else if(myType == "electric" && opponentType == "grass"){

                effectiveness = 1 ;
        
    }

      else if(myType == opponentType ){

                effectiveness = 0.5 ;
        
    }


            float damage = 50*(attackPower/defence)*effectiveness ;
            return damage ;
               
    
       
    }



