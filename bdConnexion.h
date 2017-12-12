#include<stdio.h>
#include<stdio.h>
#include<mysql/mysql.h>
//#include<my_global.h>
MYSQL* BDconnect(){

 MYSQL *conn;
   conn = mysql_init(NULL);


  if (mysql_real_connect(conn, "127.0.0.1", "root", "",
          "projet", 0, NULL, 0) == NULL)
  {
      finish_with_error(conn);
  }

 return(conn);

 }
