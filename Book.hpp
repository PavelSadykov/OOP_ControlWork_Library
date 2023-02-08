//
//  Book.hpp
//  Проверочная работа ООП 31.01.23г.
//
//  Created by Павел on 01.02.2023.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>
class Book   {
public:
    Book(int yearIssue,const std::string  author, const std::string title,const  std::string content);
    
    void setAuthor(const std::string& author);
    void setTitle(const std::string& title);
    void setContent(const std::string& content);;
    void setYearIssue (int yearIssue);
    
    const std::string & getAuthor();
    const std::string &getTitle();
    const std::string &getContent();
    int getYearIssue ();
    
    
    
private:
    int _yearIssue;
    std::string _author;
    std::string _title;
    std::string _content;
    
};




#endif /* Book_hpp */
