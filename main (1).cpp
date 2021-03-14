#include<iostream>//includes the iostream library 
#include<math.h>//includes the math.h header
using namespace std;
float a,b,c;//declares variables as float

float discrim(float,float,float);//declares discrim function
void discrim(float);//declares overloaded discrim function
float qroots(float,float,float);//declares qroots function

int main (){ //opens main function
float D;//declares variable as float 
float i=1;//declares variable as float and initializes it at 1

while (i!=0){//opens while loop and establishes the condition for termination
cout<<"Please enter the coefficients and the constant value for the quadratic equation.\n";//prompts user to enter specific values
cin>>a>>b>>c;//accepts three values from user and stores in the  corresponding variables
if (a==0){//opens an if statement and gives the condition
cout<<"Error! This equation is not a quadratic.\n";//prints error message
    }// ends 1st if statement
else{//opens the alternative for the second if statement
discrim(D);//calls the overloaded discrim function
qroots(a,b,c);//calls the qroots function
cout<<"Enter '1' (or some other value) to solve another equation or '0' to end it.\n";//prints further instructions to user
cin>>i;//accepts a value from user to either proceed with or end the program
cout<<"\n\n";
    }//ends second if statement
}//ends while loop
}//ends main function

float discrim(float a,float b,float c){//opens definition for discrim function
float D;//declares variable as float
    D=pow(b,2)-(4*a*c);//calculates and stores value of discriminant
return D;// returns value of discriminant
}// ends definition of discrim function

void discrim(float D){//opens definition of overloaded discrim function
    D=discrim(a,b,c);//calls discrim function
if (D<0){
cout<<"Two complex conjugates\n";//prints a description of the discriminant
}
else{
if(D==0){
cout<<"Repeated real number solution\n";
        }
else{
cout<<"Two distinct real number solutions\n";
        }
    }
}// ends definition of overloaded discrim function

float qroots(float a,float b,float c){//opens definition of qroots function
float D=discrim(a,b,c);//calls the discrim function and stores it in a float variable
float R1,R2;//declares variables as float
if (D==0){
        R1=(-b+pow((pow(b,2)-(4*a*c)),0.5))/(2*a);//calculates and stores the value of real repeated root
cout<<"The real repeated root is : "<<R1<<"\n\n"; //prints real repeated root
    }
else{
if (D>0){
            R1=(-b+pow((pow(b,2)-(4*a*c)),0.5))/(2*a);//calculates and stores a distinct root
            R2=(-b-pow((pow(b,2)-(4*a*c)),0.5))/(2*a);//calculates and stores a distinct root
cout<<"The two distinct roots are: "<<R1<<" and "<<R2<<"\n\n";//prints distinct roots
        }
else{
cout<<"The equation is too complex for the program to solve. \n\n";//prints message   }        }       }//ends definition of qroots function
