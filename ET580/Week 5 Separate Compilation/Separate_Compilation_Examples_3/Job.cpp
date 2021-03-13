// (c) S. Trowbridge 2019
// ex3 Person class implementation

#include "Job.h"

Job::Job(): Job("", "") {
}
Job::Job(string c, string t): company(c), title(t) {
}
string Job::getCompany() const {
    return company;
}
string Job::getTitle() const {
    return title;
}
void Job::setCompany(string c) {
    company = c;
}
void Job::setTitle(string t) {
    title = t;
}
void Job::output() const {
    cout << "Company: " << company << "\nTitle: " << title << endl;
}
