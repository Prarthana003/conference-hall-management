#include<iostream>
#include<string>
#include "C:\1-pbhat-Folders\Putti\C++\project\Login\customers.cpp"
#include "C:\1-pbhat-Folders\Putti\C++\project\booking\customer.h"
//#include"booking\customer.cpp"

int main(){
    std::string name;
    std::string password;
    std::string conpass;

    //cust::Customer cu();

    std::cout<<"Enter your name"<<std::endl;
    std::cin>>name;

    label:
    std::cout<<"Enter your password"<<std::endl;
    std::cin>>password;

    std::cout<<"Confirm your password"<<std::endl;
    std::cin>>conpass;

    if(password == conpass){
        Customer obj(name, password);
        lists::list.push_back(obj);
         //std::cout<<obj.name<<" "<<obj.password<<std::endl;
}

    else{
        std::cout<<"Incorrect password\nRe-enter your password!"<<std::endl;
        goto label;
    }

    std::cout<<"successfull sign in"<<std::endl;
   
    return 0;

}