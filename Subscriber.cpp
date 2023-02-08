//
//  Subscriber.cpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 01.02.2023.
//

#include "Subscriber.hpp"


Subscriber::Subscriber(const std::string & subname, const std::string & bookWanted): _subname(subname),_bookWanted(bookWanted),_id(ID_SUBSCRIBER){ID_SUBSCRIBER++;}


const std::string & Subscriber::getBookWanted()const{
    return _bookWanted;
}
const std::string & Subscriber::getName()const{
    return _subname;
}
int  Subscriber::getId()const{
    return _id;
}


void Subscriber:: setSubName(std::string subname){
    _subname = subname;
}
void Subscriber:: setBookWanted(std::string bookWanted){
    _bookWanted = bookWanted;
}
