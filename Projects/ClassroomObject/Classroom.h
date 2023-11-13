struct Classroom{
    string TeachersName;
    string ClassroomType;

    int NumofStudents;
    vector<string> StudentList = {"Alex","Alexander","Brandon","Brandino","Brandinia","Charlie","Charles","Daryl","Derrick","Dick","Eryk","Eric","Frank","Garet","Harold","Harry","Ivan","Issac","Jackson","James","Jack","Jullian","Joey","Joe","Joeseph","Kyle","Liam","Micheal","Nick","Oscar"};
        //all of these are guy names woops
    vector<string> TypeofClass = {"English","History","Science","Math","Programming","IT","Carpentry"};
    string Studentlistcontainer[NumofStudents];

    void GenerateClass(Classroom& obligitoryarguement);


    
}