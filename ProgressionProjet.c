
#include <gtk/gtk.h>
#include <stdio.h>
#include<mysql/mysql.h>
MYSQL * con;
void ProgressionProjet(GtkWidget* window)
{
    GtkWidget* progressbar;
    GtkWidget* box;
    GtkWidget *scrollbar;

con = DBConnect();
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 500, 500);
    gtk_window_set_title(GTK_WINDOW(window), "Suivre la progression des taches");
    g_signal_connect(G_OBJECT(window),"destroy",G_CALLBACK(gtk_main_quit),0);
 gtk_window_set_resizable (GTK_WINDOW(window),TRUE);
    scrollbar = gtk_scrolled_window_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER(window),scrollbar);

    box=gtk_vbox_new(FALSE,5);
    gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scrollbar), box);

    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrollbar), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);
  char requete[150] = "";
   sprintf(requete, "SELECT titre,progression FROM projets ");

  float testprog = 0.1;
    MYSQL_RES *result = NULL;
        MYSQL_ROW row;

        unsigned int i = 0;
        unsigned int num_champs = 0;
          mysql_query(con, requete);

  result = mysql_use_result(con);
   num_champs = mysql_num_fields(result);


    while (row = mysql_fetch_row(result) )
        {
                GtkWidget *label;

  label = gtk_label_new(row[0]);
 // char * c = row[4];

int k= atoi(row[1]);
printf("%d",k);
float percentage = (float)k/100;

  //float fract = (float)row[4];
   progressbar = gtk_progress_bar_new();
    gtk_progress_bar_set_fraction(GTK_PROGRESS_BAR(progressbar), percentage );

         /*       for(i = 0; i < num_champs; i++)
            {
               //On ecrit toutes les valeurs

            //  printf("%s ", row[i] ? row[i] : "NULL");
            }*/
 gtk_box_pack_start(GTK_BOX(box), label, FALSE, FALSE, 1);
 gtk_box_pack_start(GTK_BOX(box), progressbar, FALSE, FALSE, 1);
//            printf("\n");


        }


    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}
