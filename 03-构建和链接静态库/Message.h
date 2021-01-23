#pragma once

#include <iosfwd>
#include <string>

class Message {
public:
    Message(const std::string &m):m_strMessage(m){}
    friend std::ostream &operator<<(std::ostream &os, Message &obj) {
        return obj.printObject(os);
    }
private:
    std::string m_strMessage;
    std::ostream& printObject(std::ostream &os);
};