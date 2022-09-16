#include <string>
#include <iostream>

using namespace std;

   class MotorVehicle {
    public : //metodos
         //Constructor
         MotorVehicle ( string _marca , string _combustible , int _año , string _color , int _capacidadM)
            {
            marca = _marca;
            combustible = _combustible;
            año = _año;
            color = _color;
            capacidadM = _capacidadM;

            }

            void setmarca (string _marca){
               marca = _marca;
            }

            void setcombustible (string _combustible){
               combustible = _combustible;
            }

            void setaño (int _año){
               año = _año;
            }

            void setColor (string _color){
               color = _color;
            }

            void setcapacidadM (int _capacidadM){
               capacidadM = _capacidadM;
            }
            string getmarca () const {
               return marca;
            }
            string getcombustible() const{
               return combustible;
            }
            int getaño() const{
               return año;
            }
            string getColor() const{
               return color;
            }
            int getcapacidadM() const{
               return capacidadM;
            }
            
            void displayCarDetails(){
               cout << "marca: " << marca << endl;
               cout << "combustible: " << combustible << endl;
               cout << "año: " << año << endl;
               cout << "Color: " << color << endl;
               cout << "capacidadM: " << capacidadM << endl;
            }
         
         
      private://atributos
         string marca;
         string combustible;
         int año;
         string color;
         int capacidadM;
   };