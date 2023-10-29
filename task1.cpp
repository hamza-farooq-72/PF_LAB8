#include<iostream>
using namespace std;
bool IsBrickFits(int h ,int w, int d, int h1 , int w1);


main(){

        int h , w,  d,  h1 ,  w1 ;

    int days;
    cout<<"Enter the height of brick: ";
    cin>>h;
    cout<<"Enter the width of brick: ";
    cin>>w;
    cout<<"Enter the depth of brick: ";
    cin>>d;
    cout<<"Enter the height of hole: ";
    cin>>h1;
    cout<<"Enter the width of hole: ";
    cin>>w1;
  
    
    cout << IsBrickFits( h , w,  d,  h1 ,  w1);

}
     bool IsBrickFits(int h ,int w, int d, int h1 , int w1){


        if(h == h1 && w == w1){

        return true ;
    }
        
         else if(h == w1 &&  w == h1){

        return true ;
    }
       
        else  if(w == h1 && d == w1){

        return true ;
    }
        
        else  if(w ==w1&& d == h1){

        return true ;
    }
        
        else  if(h == h1 && d == w1){

        return true ;
    }
         else if(h ==w1 && d == h1){

        return true ;
    }

        else
            return false ;
        
    }



