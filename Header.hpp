//
//  Header.hpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 31.01.2023.
//

#ifndef Header_hpp
#define Header_hpp
#include "Subscriber.hpp"
#include "Book.hpp"
#include <string>
#include <stdio.h>
#include <vector>
#include <list>
#include <map>
#include <utility>//std::pair
#include <unordered_map>
#include <queue>

class ILibrary {
public:
    virtual void addBook(const Book& book) = 0;//добавить книги
    virtual void modifyBook(int key,  std::string & newName)=0;//изменить книги (по ключу)
    virtual void removeBook(int key)=0;//удалить книги( по ключу)
    virtual void registerSubscriber(const Subscriber& sub) = 0;//регистрация пользователя
    
    virtual ~ILibrary(){}
};













#endif /* Header_hpp */
