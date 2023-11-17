#include <iostream>
#include <time.h>
#include "Classroom.h"
using namespace std;


void Classroom::GenerateClass(Classroom& obligitoryarguement){
Classroom::TeacherName = Classroom::StudentList[rand()%Classroom::StudentList.size()]
//allows for any new additons to the list of names still be in the pool of names that can be picked
Classroom::ClassroomType=Classroom::TypeofClass[rand()%Classroom::TypeofClass.size()]
Classroom::NumofStudents=rand()%35;
//need to generate studentes
for(int i=0;i<Classroom::NumofStudents;i++){
Classroom::Studentnamecontainer[i]=Classroom::StudentList[rand()%Classroom::StudentList.size()]
}

}