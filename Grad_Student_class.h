//
//  Grad_Student_class.h
//  Inheritence
//
//  Created by Jaiden Bailey on 1/31/23.
//

#ifndef Grad_Student_class_h
#define Grad_Student_class_h

class Grad_student: public Student {
private:
    std::string Degree;
    
public:
    // setter and getters for child class
    std::string setDegree(std::string degree){return Degree = degree;}
    std::string getDegree() const {return Degree;}
    
    Grad_student(): Student () {Degree = " ";}
    
    Grad_student(std::string f, std::string l, int id, int dob, std::string maj, std::string degree): Student(f, l, id, dob, maj){setDegree(degree);}
    
};




#endif /* Grad_Student_class_h */
