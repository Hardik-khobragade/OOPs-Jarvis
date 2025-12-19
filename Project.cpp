//Menu  function-1
/* 
1. Espresso  -80
2. Cappuchino  -120
3. LAtte 100
4. Black Cofee 100
5. Exit
*/

//Admin select
//Ingredients  function-2
/* check avaILBILTY  --haNDLE error  >= 0
1. Water
2. Milk
3. Coffee Powder
4. Sugar
*/

//payment handling  user select


// /brewrage --> ingredit avaialbe aand payment valid  i less money order must canceleed
//invalid select (error handling)

//machine user exit


#include<iostream>
using namespace std;

//classes and object
class CoffeeMachine{
    private:
        float water; //in ltr
        float milk; // in ltr  
        float coffePow; // in grams
        float sugar ; // in grams




    public:
          
        CoffeeMachine()
        {
            water=10;
            milk=10;
            coffePow=500;
            sugar=1000;
        }
        CoffeeMachine(float water,float milk,float coffePow,float sugar)
        {
            this->water=water;
            this->milk=milk;
            this->coffePow=coffePow;
            this->sugar=sugar;
        }

        void showMenu()
        {
            cout<<"-------------Wel-come-------------------"<<endl;
            cout<<"Enter the code for the coffee"<<endl;
            cout<<"1. Espresso  -80"<<endl;
            cout<<"2. Cappuchino  -120"<<endl;
            cout<<"3. Latte 100"<<endl;
            cout<<"4. Black Cofee 100"<<endl;
            cout<<"0. Exit"<<endl;
        }
        int chooseMenu()
        {
            int option;
            cin>>option;
            return option;
        }

        bool isAvailable()
        {
            if(water < 0 || milk < 0 || sugar < 0 || coffePow < 0)
            {
                cout<<"Insuffiect ingredients";
                return 0;
            }
            return 1;
        }

        bool isValidPayment(int value)
        {
            int cash;
            cout<<"Enter the amount you have:";
            cin>>cash;

            if(value > cash) 
            {
                cout<<"Sorry Order is of higher value \n Payment declined"<<endl;
                return 0;
            }
            return 1;
        }

        void makeCoffee(float w,float m ,float c,float s)
        {
            this->water -= w;
            this -> milk -= m;
            this -> coffePow -= c;
            this -> sugar -=s;
            cout<<"Milk is boiling"<<endl;
            cout<<"Coffe making is in Progress"<<endl;
            cout<<"Coffe is made"<<endl;
            cout<<"Thank you come again"<<endl;
        }

        void selectedOption(int cash,int milk,int water,int coffePow,int sugar)
        {
                    bool avail=this->isAvailable();
                    bool isPaymentValis=this->isValidPayment(cash);
                    if(avail == 0 || isPaymentValis == 0)return;
                    makeCoffee(milk,water,coffePow,sugar);
        }

};

int main()
{
    CoffeeMachine m1;
    while(true)
    {
        m1.showMenu();
         int opt= m1.chooseMenu();
         if(opt == 0)
         {
            cout<<"Thank for your day.\n It was lovely meeting you all";
            break;
         }
        //  bool avail,isPaymentValis;
          switch (opt){
                case 1: 
                    cout<<"Espresso Selected"<<endl;
                    m1.selectedOption(80,10,10,5,15);
                    break;
                case 2: 
                    cout<<"Cappuchino Selected"<<endl;
                    m1.selectedOption(120,0,12,0,15);
                    break;
                case 3:
                    cout<<"Latte Selected"<<endl;
                    m1.selectedOption(100,0,12,10,15);
                    break;
                case 4:
                    cout<<"Black Cofee Selected"<<endl;
                    m1.selectedOption(100,0,12,0,25);

                    break;
                case 0:
                    break;
                default:
                    cout<<"Enter correct input field"<<endl;
            }

    }
    return 0;
}
