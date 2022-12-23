#include <iostream>
#include <string>
using namespace std;

int main(){
   string charater;
   int age, height,bounty;
   cout << "Enter your age: ";
   cin >> age;
   if(age <= 25){
      cout << "Enter your height: ";
      cin >> height;
      if(height < 100){
         charater  = "Chopper";
      }else if(height < 180){
         charater = "Usopp";
      }else{
         cout << "Enter your bounty: ";
         cin >> bounty;
         if(bounty > 1100000000){
            charater =  "Zoro";
         }else{
            charater = "Sanji";
         }
      }
   }else if(age <= 60){
      cout << "Enter your bounty: ";
      cin >> bounty;
      if(bounty > 500000000){
         charater = "Jinbe";
      }else{
         charater = "Franky";
      }
   }else{
      charater = "Brook";
   }
   cout << "Your character = " << charater << endl;
}
