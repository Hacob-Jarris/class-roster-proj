#include "degree.h"

class Student {
    private:
        //D.1
        std::string studentID;
        std::string firstName;
        std::string lastName;
        std::string email;
        std::string age;
        int daysArray[3];
        DegreeProgram degree; //NETWORK, SECURITY, SOFTWARE enums

    public: 
        //D.2
        //default constructor
        Student();

        //getters
        std::string getID();
        std::string getFirstName();
        std::string getLastName();
        std::string getEmail();
        std::string getAge();
        int getDays();
        DegreeProgram getDegree();

        //setters
        void setID(std::string studentID);
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setEmail(std::string email);
        void setAge(std::string age);
        void setDays(int days1, int days2, int days3);
        void setDegree(DegreeProgram degree);

};