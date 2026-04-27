#include <string>
#include <iostream>

class User
{
protected:
    // es können nur Attribute übergeben werden an Unterklassen, wenn man protected benutzt.
    // bei private wären sie nicht sichtbar und zugänglich für andere Klassen
    std::string name;   
    int id;

public:
    /**       
     * @brief Constructs a User object.
     *
     * Initializes the user's name and id.
     *
     * @param name Name of the user.
     * @param id Unique user id.
     */
    User(std::string name, int id) : name(name), id(id)
    {
        std::cout << "Constructor of User" << std::endl;
    };
    
    /**
     * @brief Prints the basic user information.
     *
     * Outputs the user's id and name.
     */
    void printInfo();
};
