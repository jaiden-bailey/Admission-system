//
//  Student_class.h
//  Inheritence
//
//  Created by Jaiden Bailey on 1/31/23.
//

#ifndef Student_class_h
#define Student_class_h
class Student {
protected:
    std::string firstname;
    std::string lastname;
    int ID;
    int DOB; //day,month,year
    std::string Major;
public:
    //Getter and setter functions
    int setdob(int dob){return DOB = dob;}
    int getdob(){return DOB;}
    int setID(int num){ return ID = num;}
    int getId(){return ID;}
    std::string setFirstName(std::string first)  {return firstname = first;}
    std::string getfirstname() const {return firstname;}
    std::string setLastName (std::string last){return lastname = last;}
    std::string getLastName () const {return lastname;}
    std::string getMajor() const {return Major;}
    std::string setMajor(std::string major){return Major = major;}
    
    Student() //contructor 1
    {
        firstname = " ";
        lastname = " ";
        ID = 0;
        DOB = 0;
        Major = " ";
    }
    Student(std::string f, std::string l, int id, int dob, std::string maj) // contructor 2
    {
        setFirstName(f);
        setLastName(l);
        setID(id);
        setdob(dob);
        setMajor(maj);
    }

  
    
};

#endif /* Student_class_h */
