//
//  Book.cpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 01.02.2023.
//

#include "Book.hpp"

Book::Book( int yearIssue, const std::string author, const std::string title,const  std::string content): _yearIssue(yearIssue), _author(author),_title(title),_content(content){}



void Book::setAuthor(const std::string& author){
    _author = author;
}
void Book::setTitle(const std::string& title){
    _title = title;
}
void Book::setContent(const std::string& content){
    _content = content;
}
void Book::setYearIssue (int yearIssue){
    _yearIssue = yearIssue;
}



const std::string &Book::getAuthor(){
    return _author;
}
const std::string &Book::getTitle(){
    return _title;
}
const std::string &Book::getContent(){
    return _content;
}
int Book::getYearIssue (){
    return _yearIssue;
}
