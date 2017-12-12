
#include <stdio.h>
#include <stdlib.h>
//#include <winsock.h>
#include <mysql/mysql.h>
#include<gtk/gtk.h>
//#include "functions/bdConnexion.h"

MYSQL * con;
GtkWidget * grid;
  GtkWidget *ImageMembresInscrit;
    GtkWidget *ImageMembresInscrit2;
void ConsulterMembers(GtkWidget * window){

ImageMembresInscrit = gtk_image_new_from_file("images/search_find_user_16727.png");
ImageMembresInscrit2 = gtk_image_new_from_file("images/search_find_user_16727.png");
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
     gtk_window_set_title(GTK_WINDOW(window),"Directeur");
  gtk_window_set_default_size(GTK_WINDOW(window), 230, 250);
//gtk_window_set_resizable(GTK_WINDOW(window),FALSE);

/* grid = gtk_grid_new();

  gtk_grid_insert_row (grid,0);
  gtk_grid_insert_column (grid,
                        1);

                           gtk_grid_attach (grid,
                 ImageMembresInscrit,
                  0,
                 0,
                 200,
                 500);

*/
/*
  gtk_grid_attach_next_to (grid,
                          ImageMembresInscrit2,
                          ImageMembresInscrit,
                         GTK_POS_LEFT,
                         200,
                          500);

*/
  //gtk_container_add(window,grid);
con=  DBConnect();

    char requete[150] = "";
    sprintf(requete, "SELECT * FROM membres");
     MYSQL_RES *result = NULL;
        MYSQL_ROW row;

        unsigned int i = 0;
        unsigned int num_champs = 0;

   mysql_query(con, requete);
  result = mysql_use_result(con);

   num_champs = mysql_num_fields(result);



    while (row = mysql_fetch_row(result) )
        {

                for(i = 0; i < num_champs; i++)
            {
               //On ecrit toutes les valeurs

              printf("%s ", row[i] ? row[i] : "NULL");
            }
            printf("\n");

        }


 gtk_widget_show_all(window);
}


