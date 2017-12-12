
#include<gtk/gtk.h>
//#include <winsock.h>
#include <mysql/mysql.h>
 GtkWidget *membresInscrit;
  GtkWidget *consulterProjet;
  GtkWidget *consulterFichier;
  GtkWidget *frame4;
   GtkWidget *BtnMembresInscrit;
      GtkWidget *ImageMembresInscrit;
  GtkWidget *BtnConsulterProjet;
  GtkWidget *BtnConsulterFichier;
  GtkWidget *BtnFrame4;
  GtkWidget * table;
    GtkWidget *imageConsulterProjet;
  GtkWidget *imageConsulterFichier;
  GtkWidget *imageFrame4;
  MYSQL * con1;
  void consulterMembers();
void DirecteurAcceuil(GtkWidget * window, MYSQL *con){
gtk_window_set_title(GTK_WINDOW(window),"Directeur");
  gtk_window_set_default_size(GTK_WINDOW(window), 230, 250);
gtk_window_set_resizable(GTK_WINDOW(window),FALSE);

ImageMembresInscrit = gtk_image_new_from_file("images/search_find_user_16727.png");
imageConsulterProjet = gtk_image_new_from_file("images/consulterprojet.png");
imageConsulterFichier = gtk_image_new_from_file("images/search-file_40436.png");
//imageConsulterProjet = gtk_image_new_from_file("images/consulterprojet.png");
  BtnMembresInscrit = gtk_button_new();
  BtnConsulterProjet = gtk_button_new();
  BtnConsulterFichier = gtk_button_new();
  BtnFrame4 = gtk_button_new();



membresInscrit = gtk_frame_new("Consulter les membres inscrits");
  gtk_frame_set_shadow_type(GTK_FRAME(membresInscrit), GTK_SHADOW_IN);
  consulterProjet = gtk_frame_new("Consulter les projets");
  gtk_frame_set_shadow_type(GTK_FRAME(consulterProjet), GTK_SHADOW_OUT);
  consulterFichier = gtk_frame_new("Consulter les fichiers");
  gtk_frame_set_shadow_type(GTK_FRAME(consulterFichier), GTK_SHADOW_ETCHED_IN);
   frame4 = gtk_frame_new("Suivre la progression de les projets");
  gtk_frame_set_shadow_type(GTK_FRAME(frame4), GTK_SHADOW_ETCHED_IN);
  table = gtk_table_new(2, 2, TRUE);
    gtk_button_set_image (BtnMembresInscrit,ImageMembresInscrit);
    gtk_button_set_image (BtnConsulterProjet,imageConsulterProjet);
    gtk_button_set_image (BtnConsulterFichier,imageConsulterFichier);


  gtk_table_attach_defaults(GTK_TABLE(table), membresInscrit, 0, 1, 0, 1);
  gtk_table_attach_defaults(GTK_TABLE(table), consulterProjet, 0, 1, 1, 2);
  gtk_table_attach_defaults(GTK_TABLE(table), consulterFichier, 1, 2, 0, 1);
  gtk_table_attach_defaults(GTK_TABLE(table), frame4, 1, 2, 1, 2);

 gtk_container_add(membresInscrit,BtnMembresInscrit );
 gtk_container_add(consulterProjet,BtnConsulterProjet);
 gtk_container_add(consulterFichier,BtnConsulterFichier);
 gtk_container_add(frame4, BtnFrame4);

con1 = con;


gtk_container_add(GTK_CONTAINER(window),table);
  gtk_widget_show_all(window);

g_signal_connect(BtnMembresInscrit,"clicked",G_CALLBACK(consulterMembers),NULL);

}


void consulterMembers(){

GtkWidget * acceuil;
ConsulterMembers(acceuil,con1);

}
