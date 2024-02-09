

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{   //define variables
    string country;
    int choice;
    double Fahrenheit,Celsius;//temperature(it will transfer to integer later)
    double kilometer, mile,//distance(to get decimals)
    kilogram, pound;//weight
    
    cout<<"Eenter a country name: ";
    getline(cin,country);//get a whole letters with a space.
    
    //display the menu
    cout<<"Converter Toolkit"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"1.Temperature Converter"<<endl;
    cout<<"2.Distance Converter"<<endl;
    cout<<"3.Weight Converter"<<endl;
    cout<<"4.Quit"<<endl<<endl;
    
    //select a choice from the menu
    cout<<"Enter your choice(1-4): ";
    cin>>choice;//input the choice number
    
    //if statement for the choices
    if(choice==1)//temperature
    {cout<<"Please enter temperature in Celsius (such as 24): ";
        cin>>Celsius;
        Fahrenheit=Celsius*(9.0/5.0)+32;//for accuracy, it is better to calculate by double,first.
        cout<<"It is "<<(int)Fahrenheit<<" in Fahrenheit."<<endl<<endl;}//change the double to integer.\
    
    else if(choice==2)//distance
    {cout<<"Please enter distance in kilometer: ";
        cin>>kilometer;
        if(kilometer<0)
        {cout<<"Input is invalid.The value shouldn't be negative"<<endl<<endl;}
        else
        {mile=kilometer*0.6;
        cout<<fixed<<setprecision(2)<<"It is "<<mile<<" miles"<<endl<<endl;}//to get two positions after decimal point.
    }
    
    else if(choice==3)//weight
    {cout<<" please enter weight in Kilogram: ";
        cin>>kilogram;
        if(kilogram<0)
        {cout<<" Input is invalid.The value shouldn't be negative."<<endl<<endl;}
        else
        {pound=kilogram*2.2;
        cout<<fixed<<setprecision(1)<<"It is "<<pound<<" in pound."<<endl<<endl;}//to get one position after decimal point.
    }
    
    else//others
    {cout<<"The input is invalid. "<<endl<<endl;}
    
    cout<<country<<" sounds fun!!"<<endl<<endl<<endl;
    
    //display programmer's name,course,duedate
    cout<<"PROGRAMMER: Boa Kim"<<endl;
    cout<<"CMSC 140 common project 2"<<endl;
    cout<<"Due date:04 21 2021"<<endl<<endl;
    
}
