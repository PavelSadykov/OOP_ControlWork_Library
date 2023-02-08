//
//  Library.cpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 01.02.2023.
//
#include <iostream>
#include "Library.hpp"
Library::Library(const std::string & name): _name(name), _idCounterBooks(0),ID(0){}

void Library:: addBook(const Book& book){//добавляем книгу в мапу
    _books.insert({_idCounterBooks, book});
    _idCounterBooks++;
    std::cout<<"The " <<_idCounterBooks<<" book is added"<<std::endl;
    
}

void Library:: modifyBook(int key,  std::string & newName) {//меняем книгу
   auto it = _books.find(key);
    it->second.setTitle(newName);
    std::cout<<"The book has been changed"<<std::endl;
    std::cout<<std::endl;
}

void Library::pop(){//процесс поиска и выдачи книги. или отказ в случае отсутствия
    
    Subscriber & sub =_subs.front();//первый чел в очереди
    std::string subWantedBook = sub.getBookWanted();
    std::cout<<"Looking for a book : "<<subWantedBook<<std::endl;
    for(auto it = _books.begin();it!=_books.end();it++){//перебираем все книги
        if(it->second.getTitle()==subWantedBook){//если название совпало (книга нашлась)
            _books.erase(it);//книгу чел забирает -  книгу удаляем из библиотеки
            _subs.pop();//чел уходит с книгой - его удаляем из очереди
            std::cout<<"Book found"<<std::endl;
            std::cout<<std::endl;
            return;
        }}
    std::cout<<"There is no such book in the library"<<std::endl;
    std::cout<<std::endl;
    _subs.pop();//чел уходит без книги - его удаляем из очереди
    return;
    }

void Library::removeBook(int key) {// удаление книги из мапа по id
        _books.erase(key);
    std::cout<<"The book is erase"<<std::endl;
    std::cout<<std::endl;
}

 void Library:: registerSubscriber(const Subscriber & sub){// регистрируем пользователя - записываем в очередь
     ID++;
     _subs.push(sub);
    std::cout<<"The Subscriber № "<<ID<<" is registered "<<std::endl;
}

void Library::showBooks(){// Список книг
    std::cout<<"List of books: "<<std::endl;
    for( auto &[_idCounterBooks,value ]   :   _books){
   std::cout<< _idCounterBooks << "    "<< value.getTitle()<<"\n";
    }
     std::cout<<"========="<<std::endl;
    
    }
     
int  Library:: getID(){
    return ID;
}
