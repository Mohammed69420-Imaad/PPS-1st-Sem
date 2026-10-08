#include <stdio.h>
int main()
{
    const int Username = 123;
    const int password =123;
    int Username_ip,password_ip;
    printf("Enter Username & password\n");
    scanf("%d%d", & Username_ip, &password_ip);
    if(Username == Username_ip && password == password_ip)
    {
           printf("User is authorised");
    }
    else
    {
        printf("User is not authorised");
    }
    return 0;
}
