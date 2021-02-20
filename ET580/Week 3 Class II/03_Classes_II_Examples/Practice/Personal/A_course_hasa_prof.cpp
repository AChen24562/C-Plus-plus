#include <iostream>

using namespace std;
// A Course has-a Prof
class Prof{
private:
  string profName;

public:
  Prof(): Prof("noName"){}
  Prof(string p): profName(p){}

  string getProf(){return profName;}
  void setProf(string p){profName = p;}

};

class Course{
private:
  string subject;
  int hours;
  Prof prof;

  static int currentStudents; // non- const must be defined externally

public:
  Course(): Course("noSubject", 0){}
  Course(string s, int h): subject(s), hours(h), prof(){currentStudents++;}
  Course(string s, int h, string p):subject(s), hours(h), prof(p){currentStudents++;}
// Accepts Prof Object
  Course(string s, int h, Prof& p):subject(s), hours(h), prof(p){currentStudents++;}

// Accessors
  string getSubject(){return subject;}
  int getHours(){return hours;}
  string getProf(){return prof.getProf();}
// Mutators
  void setSubject(string s){subject = s;}
  void setHours(int h){hours = h;}
  void setProf(string p){prof = p;}


  int getCurrentStudents(){return currentStudents;} // accesses static
};
int Course::currentStudents =0;

void display(Course &c){
  cout << "Subject: " << c.getSubject() << endl
      << "Hours: " << c.getHours() << endl
      << "Prof: " << c.getProf() << endl
      << "Current Students: " << c.getCurrentStudents() << endl << endl;
}

int main(){
  Course c1{};
  cout << c1.getProf() << endl << endl;
  display(c1);
  c1.setProf("Dr. Daniels");
  display(c1);

  Course c2{"Math", 12, "Mr. Smith"};
  display(c2);

  Prof p1{"Dr. Erikson"};
  Course c3{"History", 10, p1};
  display(c3);




  return 0;
}
