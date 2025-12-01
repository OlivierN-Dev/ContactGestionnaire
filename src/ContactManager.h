#pragma once
#include "Contact.h"
#include <vector>
#include <string>
class ContactMananger {
    public:
        void addContact(const Contact& c);
        bool deleteContact(const std::string& name);
        bool updateContact(const std::string& name, const Contact& newData);
        Contact* searchContact(const std::string& name);
        void listContact() const;
        std::vector<Contact>& getAllContacts() {return contacts;}
    private:
        std::vector<Contact>& contacts;
};
