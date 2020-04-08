#include <iostream>

// use capital begin letter for struct
// end struct needs a semi colon ; 
struct User
{
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
    private:
    std::string status = "Gold";
};

int main()
{
    // create instance / object + define name
    User me;
    me.first_name = "Caleb";
    me.last_name = "Curry";
    // me.status = "Gold";

    std::cout << "Status: " << me.get_status() << std::endl;
    return 0;
}