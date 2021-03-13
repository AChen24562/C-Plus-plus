// (c) S. Trowbridge 2019
// ex3 Person class interface

// if job.h is already defined, dont define it (skip this code)
#ifndef JOB_H  // conditional-compilation preprocessor directive
#define JOB_H  // conditional-compilation preprocessor directive

#include <iostream>  // #includes should be limited to the bare minimum
using namespace std;

/*
* Person Class
* @author S. Trowbridge
*/
class Job {
public:
    // initializes object's company to ""
    // initalizes object's title to ""
    Job();
    // @param c - set the value for job's company
    // @param t - set the value for job's title
    Job(string c, string t);
    // @return - person's name as a string
    string getCompany() const;
    // @return - person's age as an integer
    string getTitle() const;
    // @param n - set the value for the person's name
    void setCompany(string c);
    // @param a - set the value for the person's age
    void setTitle(string t);
    // outputs person's name and age
    void output() const;
private:
    string company;
    string title;
};

#endif  // conditional-compilation preprocessor directive
