//
//  Subscriber.hpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 01.02.2023.
//

#ifndef Subscriber_hpp
#define Subscriber_hpp

#include <stdio.h>
#include <string>

static int ID_SUBSCRIBER =0;//статическая глобальная переменная при компиляции создастся и будет храниться до окончания программы
class  Subscriber {
public:
    Subscriber(const std::string & subname, const std::string & bookWanted);
    
    void  setSubName(std::string subname);//вводим имя пользователя
    void  setBookWanted(std::string bookWanted);//вводим название требуемой книги
    
   const std::string & getName() const;//выводим имя пользователя
   const std::string & getBookWanted() const;//выводим название требуемой книги
     int getId() const;

private:
    std::string  _subname;
    std::string  _bookWanted;
    int _id;
};





#endif /* Subscriber_hpp */
