#include<vector>

namespace lists{

class CustomerList{
    public:
    static int  size;
    static std::vector<int> list;

    CustomerList(){
        size =0;
    }

};

CustomerList list();

}