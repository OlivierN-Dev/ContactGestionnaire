#pragma once
#include "ContactManager.h"
#include <string>

class FileStorage {
public:
    static void save(const std::string& filename, const ContactManager& manager);
    static void load(const std::string& filename, ContactManager& manager);
};
