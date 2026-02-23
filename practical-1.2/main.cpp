
#include "library.h"

int main()
{
    library l[50];
    user u[50];

    int last=0, user_count=0;
    int ch,i,id,found;

    do
    {
        cout << "\n===== LIBRARY MENU =====\n";
        cout << "1. add student\n";
        cout << "2. add new book\n";
        cout << "3. issue book\n";
        cout << "4. return book\n";
        cout << "5. show books\n";
        cout << "6. show students\n";
        cout << "7. exit\n";
        cin >> ch;

        switch(ch)
        {
        case 1:
            u[user_count++].add_user();
            break;

        case 2:
            l[last++].add_new_book();
            break;

        case 3:
        {
            int sid;
            cout<<"enter student id:";
            cin>>sid;

            cout<<"enter book id:";
            cin>>id;

            found=0;

            for(i=0;i<last;i++)
            {
                if(l[i].issue_book(id))
                {
                    for(int j=0;j<user_count;j++)
                        if(u[j].get_id()==sid)
                            u[j].borrow_book();

                    found=1;
                    break;
                }
            }

            if(!found)
                cout<<"book not found";
            break;
        }

        case 4:
        {
            int sid;
            cout<<"enter student id:";
            cin>>sid;

            cout<<"enter book id:";
            cin>>id;

            found=0;

            for(i=0;i<last;i++)
            {
                if(l[i].return_book(id))
                {
                    for(int j=0;j<user_count;j++)
                        if(u[j].get_id()==sid)
                            u[j].return_book();

                    found=1;
                    break;
                }
            }

            if(!found)
                cout<<"book not found";
            break;
        }

        case 5:
            for(i=0;i<last;i++)
                l[i].show_book();
            break;

        case 6:
            for(i=0;i<user_count;i++)
                u[i].show_user();
            break;

        case 7:
            cout<<"Exiting...";
            break;
        }
    }
    while(ch!=7);
}
