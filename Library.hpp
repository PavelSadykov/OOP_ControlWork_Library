//
//  Library.hpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 01.02.2023.
//

#ifndef Library_hpp
#define Library_hpp
#include "Header.hpp"
#include <stdio.h>
#include <string>
#include <map>
#include <utility>//std::pair
#include <unordered_map>
#include <queue>



class Library :public ILibrary{
public:
    Library(const std::string & name);
    void addBook(const Book& book) override;
    void modifyBook(int key,  std::string & newName)override;
    void removeBook(int _idCounterBooks) override;
    void registerSubscriber(const Subscriber & sub)override;
    void pop();
    void showBooks();
    int getID();
    
private:
    int ID;
    std::string _name;
    std::map<int,Book>_books;//список книг хранится в мапе
    int _idCounterBooks;
    std::queue<Subscriber>_subs;//пользователи записываются в очередь
   
};





#endif /* Library_hpp */
