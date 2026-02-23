#ifndef LIBRARY_H
#define LIBRARY_H

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class library
{
private:
    int book_id,due_day;
    string title_of_book;
    string author_name;
    int available_book;
    int issue_day,issue_month,issue_year;

public:
    void add_new_book();
    int issue_book(int);
    int return_book(int);
    void show_book();
    int get_available();
    string get_title();
    string get_author();
    int get_id();
};

class user
{
private:
    int stu_id;
    string stu_name;
    int borrowed_book;

public:
    void add_user();
    void borrow_book();
    void return_book();
    void show_user();
    int get_id();
};

#endif
