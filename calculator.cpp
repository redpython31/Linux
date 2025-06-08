#include <iostream>
using namespace std;

//Declare all function.

    void sum();  
    void Subtract();
    float multiply(float value1, float value2);
    float divide(float value1, float value2);
    int fibonacci(int num);
    void prime(int num);
    void oddEven(int num);
    void posNeg(int num);
    void binary(int num);


//Define main function.
    
    int main(){

    //Main Page

        cout <<"\n------------------Calculator-----------------"<< endl;
        cout <<"\nChoose any option by entring number 1 to 8." <<endl;

        bool homepage = true;

        while(homepage) {

            int userInput;

            cout <<"1. Addition.\n";
            cout <<"2. Subtract.\n";
            cout <<"3. Multiply.\n";
            cout <<"4. Divide.\n";
            cout <<"5. Fibonacci.\n";
            cout <<"6. Prime numbers.\n";
            cout <<"7. Odd & Even.\n";
            cout <<"8. Positive & Negative.\n";
            cout <<"9. Binary into Decimal.\n";

            //User Input.

            cout <<"Enter input: ";
            cin >>userInput;

            switch (userInput) {

                case 1: cout<<"\nYou are on Addition page.\n";
                        
                        sum();
                       /* float addInput = 0;

                        cout <<"Enter Input: ";
                        cin >>addInput;

                        float result = sum(addInput);
                        cout <<"Answer is: "<<result <<endl;*/
                        break;

                case 2: cout<<"You are on Subtraction page.";
                        Subtract();
                        break;

                case 3: cout<<"You are on Multiply page.";
                        break;

                case 4: cout<<"You are on Divide page.";
                        break;

                case 5: cout<<"You are on Fibonacci page.";
                        break;

                case 6: cout<<"You are on Prime number page.";
                        break;
                        
                case 7: cout<<"You are on Positive & Negative page.";
                        break;

                case 8: cout<<"You are on Odd & Even page.";
                        break;

                case 9: cout<<"your are on Binary into Decimal conversion page.";
                        break;

            }
        
        }
        return 0;
    }

//Define Addition function.

    void sum() {

        float result = 0;
       bool abort = true;

        cout <<"NOTE:- If you want to exit this program type ctrl + c \n";
        while(abort) {

            float userInput = 0;

            cout <<"Enter number: ";
            cin >>userInput;

            //Validating
            if (userInput > 0 || userInput < 0){
                
                result += userInput;

                cout<<"Sum is: " <<result <<endl;

            }else{
                cout<<"Invalid input! Only number allowed.\n";
                abort = false;
                break;
            }
        }
        cout <<"Total sum is: " <<result <<endl;
        return;
    }
    }

    //Subtract function.

    void Subtract() {

        cout <<"Note:- If you want to exit press ctrl + c \n";
        float result = 0;

        do {
                float userInput;

                cout <<"Enter number: ";
                cin >>userInput;

                result -= userInput;

                cout <<"Subtraction is: "<<result<<endl;

        }while(1);
    }
