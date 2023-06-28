
//class Customer;

#include<string>
using namespace std;

class Customer{

    public:
    int userid;
    std::string name;
    std::string password;
    int phno;
    std::string date;       //change later
    int duration ;
    int no_halls;
    int hallid;


    Customer(string name,string password){
        this->name = name;
        this->password=password;
    }
};