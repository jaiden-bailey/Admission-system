//
//  main.cpp
//  Inheritence
//
//  Created by Jaiden Bailey on 1/17/23.
// Future build: Create a section that allows people who have been already registered to go back and see their classes however they have to enter whether or not they are undergrad or a grad student and their ID will distinguish that automatically.

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> //rand() and srand()
#include "Student_class.h"
#include "Grad_Student_class.h"
#include <ctime> //time()

std::string input = " ";
Student jaiden ("jaiden", "bailey", 100729300, 03012003, "ComputerScience"); //test object
Student s1; //objects for students and grad students
Student s2;
Student s3;
Grad_student gs1;
Grad_student gs2;
Grad_student gs3;

// variables for user input and looping
std::string input_fn;
std::string input_ln;
int input_id;
int input_dob;
std::string input_dg;
std::string input_major;
std::string quit_command = "QUIT";
std::string help_command = "HELP";
int loop = 0;
int grad_loop = 0;
int stud_loop = 0;
//vectors for both classes and command inputs
std::vector<std::string> Command_list;
std::vector<Student> Student_list;
std::vector<Grad_student> Grad_list;


void Command_help ()
{
    std::cout << "This website is type sensitive please input responses as shown in the examples. Type without any spaces. If you need to use a space use an underscore instead. There are a max of 6 admissions, 3 undergrad and 3 graduate students. If you surpass the max amount of either you will get an error. " << std::endl << std::endl;
}

void input_menu ()
{
    std::cout << "Welcome to the admission website for James College where you can enroll up to 6 students in one session. 3 undergrad students and 3 graduate students. Instead of spaces please use an underscore. " << std::endl << std::endl;

       while (loop < 6)
       {
           
           std::cout << " Are you a Graduate student or Undergrad? For undergrad type 'undergrad' for graduate type 'graduate'" << std::endl;
           
           std::cin >> input;
           
           if (input == "help")
           {
               Command_help();
           }
               
            else if (input == "undergrad" && stud_loop < 3)
           {
               std::cout << " Please enter your first name" << std::endl;
               std::cin >> input_fn;
               Student_list[stud_loop].setFirstName(input_fn);
               std::cout << " Please enter your Last name" << std::endl;
               std::cin >> input_ln;
               Student_list[stud_loop].setLastName(input_ln);
               Student_list[stud_loop].setID(rand());
               std::cout << "Please enter your date of birth in XX/XX/XXXX format without the slashes example: '04012003'. " << std::endl << std::endl;
               std::cin >> input_dob;
               Student_list[stud_loop].setdob(input_dob);
               std::cout << "Please enter your major." << std::endl;
               std::cin  >> input_major;
               Student_list[stud_loop].setMajor(input_major);
               std::cout << "You have succesfully enrolled in James college " << Student_list[stud_loop].getfirstname() << " " << Student_list[stud_loop].getLastName() << ". Your ID number is " << Student_list[stud_loop].getId()<< std::endl;
               loop ++ ;
               stud_loop ++ ;
               
               
           }
           else if (input == "graduate" && grad_loop < 3)
           {
               
               std::cout << " Please enter your first name" << std::endl;
               std::cin >> input_fn;
               Grad_list[grad_loop].setFirstName(input_fn);
               std::cout << " Please enter your Last name" << std::endl;
               std::cin >> input_ln;
               Grad_list[grad_loop].setLastName(input_ln);
               Grad_list[grad_loop].setID(rand() % 1000000);
               std::cout << "Please enter your date of birth in XX/XX/XXXX format without the slashes example: '04012003'. " << std::endl << std::endl;
               std::cin >> input_dob;
               Grad_list[grad_loop].setdob(input_dob);
               std::cout << "Please enter your major." << std::endl;
               std::cin  >> input_major;
               Grad_list[grad_loop].setMajor(input_major);
               std::cout << "Please enter your degree plan. Examples: Masters, PHD, etc" << std::endl;
               std::cin >> input_dg;
               Grad_list[grad_loop].setDegree(input_dg);
               std::cout << "You have succesfully enrolled in James college " << Grad_list[grad_loop].getfirstname() << " " << Grad_list[grad_loop].getLastName() << ". Your ID number is " << Grad_list[grad_loop].getId()<< std::endl << std::endl;
               
               
               loop ++;
               grad_loop ++;
           }
           else
           {
               std::cout << "Sorry we couldn't recognize your input or you ran out of available enroll slots per session. Please try again. " << std::endl << std::endl;
           }
       }
      
}





int main() {
    Student_list.push_back(s1);
    Student_list.push_back(s2);
    Student_list.push_back(s3);
    Grad_list.push_back(gs1);
    Grad_list.push_back(gs2);
    Grad_list.push_back(gs3);
    Command_list.push_back(help_command);
    
    
    //srand(time(NULL)); //seed for rand() function to create RGN
    

    
    
    
    input_menu();
    
 
    return 0;
    
    
}

