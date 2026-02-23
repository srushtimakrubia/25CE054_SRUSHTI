#include "library.h"

// ---------- USER FUNCTIONS ----------

void user::add_user()
{
    cout<<"enter stu id";
    cin>>stu_id;

    cout<<"enter student name:";
    cin>>stu_name;

    borrowed_book=0;
}

void user::borrow_book()
{
    borrowed_book++;
}

void user::return_book()
{
    if(borrowed_book>0)
        borrowed_book--;
}

void user::show_user()
{
    cout << stu_id << " | "
         << stu_name << " | Books borrowed: "
         << borrowed_book << endl;
}

int user::get_id()
{
    return stu_id;
}

// ---------- LIBRARY FUNCTIONS ----------

void library::add_new_book()
{
    cout << "enter book id : ";
    cin >> book_id;

    cout << "enter title of the book : ";
    cin >> title_of_book;

    cout << "enter author name : ";
    cin >> author_name;

    cout << "enter available book : ";
    cin >> available_book;

    issue_day=issue_month=issue_year=0;
}

int library::issue_book(int id)
{
    if (book_id == id)
    {
        if(available_book>0)
        {
            available_book--;

            time_t t=time(0);
            tm *now=localtime(&t);

            issue_day=now->tm_mday;
            issue_month=now->tm_mon+1;
            issue_year=now->tm_year+1900;

            cout<<"book issued successfully";
            cout<<"\nissuedate:"<<issue_day<<"/"<<issue_month<<"/"<<issue_year;
            cout<<"\nduo period:7 days";

            return 1;
        }
        else
        {
            cout<<"error,all copies already issued";
            return 0;
        }
    }
    return 0;
}

int library::return_book(int id)
{
    if(issue_year==0)
    {
        cout<<"book was not issued";
        return 0;
    }

    if(book_id==id)
    {
        available_book++;

        int r_day,r_month,r_year;
        cout<<"enter return date(dd mm yyyy):";
        cin>>r_day>>r_month>>r_year;

        int issue_total=issue_year*365+issue_month*30+issue_day;
        int return_total=r_year*365+r_month*30+r_day;

        int days_taken=return_total-issue_total;

        cout<<"returned book successfully";

        if(days_taken>7)
        {
            int total_days=days_taken-7;
            int fine=total_days*50;

            cout<<"\nlate return!";
            cout<<"\nyou are "<<total_days<<" days late";
            cout<<"\nso fine applied: rs."<<fine;
        }
        else
        {
            cout<<"\nreturned within due date\nno fine";
        }

        return 1;
    }

    return 0;
}

void library::show_book()
{
    cout<<book_id<<" | "<<title_of_book
        <<" | "<<author_name
        <<" | copies = "<<available_book<<endl;
}

int library::get_available()
{
    return available_book;
}

string library::get_title()
{
    return title_of_book;
}

string library::get_author()
{
    return author_name;
}

int library::get_id()
{
    return book_id;
}
