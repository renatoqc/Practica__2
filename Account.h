#include <string>
#include <iostream>

using namespace std;

   class Account {
      public :
         Account ( std::string accountName , int initialBalance)
            : name{accountName} {
               if(initialBalance > 0 ) {
                  balance = initialBalance;
               }
            }
         void deposit ( int depositAmount ) {
            if( depositAmount > 0 ) {
               balance = balance + depositAmount;
            }
         }
         void withdraw(int wdrawAmount) {
            if (wdrawAmount <= balance){
               balance = balance - wdrawAmount;

            
            
            } else{cout << "Withdrawal amount exceeded account balance." << endl;
               return ;
            }   
         }
         int getBalance () const {
            return balance ;
         }
         void setName (std::string accountName) {
            name = accountName ;
         }

         std :: string getName() const {
            return name;
         }
      private:
         std :: string name ;
         int balance {0} ;
   };