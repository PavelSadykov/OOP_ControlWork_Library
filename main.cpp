//
//  main.cpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 31.01.2023.
//
#include "Library.hpp"
#include "Book.hpp"
#include "Subscriber.hpp"
#include "Header.hpp"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <list>
#include <map>
#include <utility>//std::pair
#include <unordered_map>
#include <queue>


int main(int argc, const char * argv[]) {
    Library L("abc");
    std::cout<<"LIST  OF  BOOKS :"<<std::endl;
    std::cout<<"========="<<std::endl;
    Book A(2011,"Ivanov","Autosport","Car racing");
    std::cout<< A.getTitle()<<std::endl;
    std::cout<< A.getAuthor()<<std::endl;
    std::cout<< A.getContent()<<std::endl;
    std::cout<< A.getYearIssue()<<std::endl;
    L.addBook(A);
    std::cout<<std::endl;
    
    Book B(2012,"Smith","Winter","Nature");
    std::cout<< B.getTitle()<<std::endl;
    std::cout<< B.getAuthor()<<std::endl;
    std::cout<< B.getContent()<<std::endl;
    std::cout<< B.getYearIssue()<<std::endl;
    L.addBook(B);
    std::cout<<std::endl;
    
    Book C(2010,"Jane","NewAge","History");
    std::cout<< C.getTitle()<<std::endl;
    std::cout<< C.getAuthor()<<std::endl;
    std::cout<< C.getContent()<<std::endl;
    std::cout<< C.getYearIssue()<<std::endl;
    L.addBook(C);
    std::cout<<std::endl;
    
    Book D(2000,"Joe","Quest","Triller");
    std::cout<< D.getTitle()<<std::endl;
    std::cout<< D.getAuthor()<<std::endl;
    std::cout<< D.getContent()<<std::endl;
    std::cout<< D.getYearIssue()<<std::endl;
    L.addBook(D);
    std::cout<<"========="<<std::endl;
    std::cout<<std::endl;
    
    std::cout<<"QUEUE :"<<std::endl;
    std::cout<<"========="<<std::endl;
    Subscriber John("Petrov", "Swimming" );
    std::cout<<John.getName()<<std::endl;
    std::cout<<John.getBookWanted()<<std::endl;
    L.registerSubscriber(John);
    std::cout<<std::endl;
    
    Subscriber Bill("Ivanov", "Autosport" );
    std::cout<<Bill.getName()<<std::endl;
    std::cout<<Bill.getBookWanted()<<std::endl;
    L.registerSubscriber(Bill);
    std::cout<<std::endl;
    
    Subscriber James("Den", "Sprint" );
    std::cout<<James.getName()<<std::endl;
    std::cout<<James.getBookWanted()<<std::endl;
    L.registerSubscriber(James);
    std::cout<<std::endl;
    
    Subscriber Helga("Jane", "NewAge" );
    std::cout<<Helga.getName()<<std::endl;
    std::cout<<Helga.getBookWanted()<<std::endl;
    L.registerSubscriber(Helga);
    std::cout<<"========="<<std::endl;
    std::cout<<std::endl;
   
    /*
    ILibrary* a = new Library("abc"); в методе pop() выдает ошибку  "EXC_BAD_ACCESS"
    Library L("abc");
    a->addBook(A);
    a->addBook(B);
    a->addBook(C);
    a->registerSubscriber(John);
    a->registerSubscriber(Bill);
    a->registerSubscriber(Helga);
   */
    
    int key, i=0,tmp=L.getID();
    std::string bookname;
    L.showBooks();
   
    std::cout<<"Replace the book"<<std::endl;
    std::cout<<"Input ID "<<std::endl;
    std::cin>>key;
    std::cout<<"Input a  new book name "<<std::endl;
    std::cin>>bookname;
    L.modifyBook(key,bookname);
    std::cout<<"New list of books "<<std::endl;
    L.showBooks();
    
    std::cout<<"\nIssuance of books"<<std::endl;
    while(i!=L.getID()){
    std::cout << "Number of subscribers in the queue " << tmp << std::endl;
    L.showBooks();
    L.pop();
        i++;
        tmp--;
    }
    std::cout << "Number of subscribers in the queue " << tmp << std::endl;
    L.showBooks();
   
    std::cout<<"Delete of book"<<std::endl;
    std::cout<<"Input ID "<<std::endl;
    std::cin>>key;
    L.removeBook(key);
    L.showBooks();
    
  
    return 0;
}
