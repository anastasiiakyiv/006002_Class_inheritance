#include <iostream>
#include <string>

class Person
{
protected:
    std::string personalID;
    std::string firstName;
    std::string lastName;
    std::string passportNumber;
    std::string dateOfBirth;
    std::string additionalInfo;

public:
    Person(std::string personalID, std::string firstName, std::string lastName, std::string passportNumber, std::string dateOfBirth, std::string additionalInfo)
        : personalID(personalID), firstName(firstName), lastName(lastName), passportNumber(passportNumber), dateOfBirth(dateOfBirth), additionalInfo(additionalInfo) {}

    std::string getPersonalID() const
    {
        return personalID;
    }

    std::string getFirstName() const
    {
        return firstName;
    }

    std::string getLastName() const
    {
        return lastName;
    }

    std::string getPassportNumber() const
    {
        return passportNumber;
    }

    std::string getDateOfBirth() const
    {
        return dateOfBirth;
    }

    std::string getAdditionalInfo() const
    {
        return additionalInfo;
    }

    void setPersonalID(const std::string& newPersonalID)
    {
        personalID = newPersonalID;
    }

    void setFirstName(const std::string& newFirstName)
    {
        firstName = newFirstName;
    }

    void setLastName(const std::string& newLastName)
    {
        lastName = newLastName;
    }

    void setPassportNumber(const std::string& newPassportNumber)
    {
        passportNumber = newPassportNumber;
    }

    void setDateOfBirth(const std::string& newDateOfBirth)
    {
        dateOfBirth = newDateOfBirth;
    }

    void setAdditionalInfo(const std::string& newAdditionalInfo)
    {
        additionalInfo = newAdditionalInfo;
    }
};

class Student : public Person
{
protected:
    std::string school;
    std::string specialty;
    std::string group;

public:
    Student(std::string personalID, std::string firstName, std::string lastName, std::string passportNumber, std::string dateOfBirth, std::string additionalInfo, std::string school, std::string specialty, std::string group) :
        Person(personalID, firstName, lastName, passportNumber, dateOfBirth, additionalInfo), school(school), specialty(specialty), group(group) {}

    std::string getSchool() const
    {
        return school;
    }

    std::string getSpecialty() const
    {
        return specialty;
    }

    std::string getGroup() const
    {
        return group;
    }

    void setSchool(const std::string& newSchool)
    {
        school = newSchool;
    }

    void setSpecialty(const std::string& newSpecialty)
    {
        specialty = newSpecialty;
    }

    void setGroup(const std::string& newGroup)
    {
        group = newGroup;
    }
};

int main()
{
    Student student1("12345", "Dmytro", "Fetsko", "AB883722", "12.08.1998", "None", "CUNTU", "C++ programmer", "Group Pro");
    Student student2("67890", "Anna", "Vynnychenko", "CD643372", "03.04.1999", "None", "CUNTU", "C++ programmer", "Group Pro");

    std::cout << "Student 1:" << std::endl;
    std::cout << "Personal ID: " << student1.getPersonalID() << std::endl;
    std::cout << "First and last name: " << student1.getFirstName() << " " << student1.getLastName() << std::endl;
    std::cout << "Passport number: " << student1.getPassportNumber() << std::endl;
    std::cout << "Date of Birth: " << student1.getDateOfBirth() << std::endl;
    std::cout << "Additional info: " << student1.getAdditionalInfo() << std::endl;
    std::cout << "School: " << student1.getSchool() << std::endl;
    std::cout << "Specialty: " << student1.getSpecialty() << std::endl;
    std::cout << "Group: " << student1.getGroup() << std::endl;
    std::cout << std::endl;

    std::cout << "Student 2:" << std::endl;
    std::cout << "Personal ID: " << student2.getPersonalID() << std::endl;
    std::cout << "First and last name: " << student2.getFirstName() << " " << student2.getLastName() << std::endl;
    std::cout << "Passport number: " << student2.getPassportNumber() << std::endl;
    std::cout << "Date of Birth: " << student2.getDateOfBirth() << std::endl;
    std::cout << "Additional info: " << student2.getAdditionalInfo() << std::endl;
    std::cout << "School: " << student2.getSchool() << std::endl;
    std::cout << "Specialty: " << student2.getSpecialty() << std::endl;
    std::cout << "Group: " << student2.getGroup() << std::endl;
    std::cout << std::endl;

    return 0;
}
