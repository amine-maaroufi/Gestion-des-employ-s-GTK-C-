



#include<gtk/gtk.h>
//void validate();
//void supprime();
  GtkWidget *valideBtn,*supprimeBtn;
GtkWidget * imageApprover,*imageSupprimer;
    GtkWidget *frame1,*frame2;
GtkWidget *table;
GtkWidget *vbox;
void Responsableacceuil(GtkWidget * window){
    gtk_window_set_resizable(GTK_WINDOW(window),FALSE);
gtk_window_set_title(GTK_WINDOW(window),"Responsable");
imageApprover = gtk_image_new_from_file ("images/launch.png");
    imageSupprimer = gtk_image_new_from_file ("images/gerer_fichier.png");
  vbox = gtk_vbox_new(FALSE, 0);
  valideBtn =  gtk_button_new();
  supprimeBtn = gtk_button_new();
    frame1 = gtk_frame_new("Lancer un projet");
     frame2 = gtk_frame_new("Gerer les fichiers");
    //gtk_container_add()
table = gtk_table_new(50, 50, FALSE);
 gtk_button_set_image (valideBtn,imageApprover);
  gtk_button_set_image (supprimeBtn,imageSupprimer);
  gtk_container_add(GTK_CONTAINER(window), vbox);
  gtk_container_add(frame1,valideBtn);
    gtk_container_add(frame2,supprimeBtn);
    gtk_table_attach_defaults(GTK_TABLE(table), frame1, 0, 1, 0, 1);
gtk_table_attach_defaults(GTK_TABLE(table), frame2, 0, 1, 1, 2);
 /* gtk_table_attach_defaults(GTK_TABLE(table), frame3, 1, 2, 0, 1);
  gtk_table_attach_defaults(GTK_TABLE(table), frame4, 1, 2, 1, 2);*/
   gtk_box_pack_start(GTK_BOX(vbox), table, TRUE, TRUE, 20);

  gtk_widget_show_all(window);

//  gtk_main();

/*

      g_signal_connect(valideBtn, "clicked",
        G_CALLBACK(validate), NULL);
*//*
      g_signal_connect(supprimeBtn, "clicked",
        G_CALLBACK(supprime), NULL);
*/

  return 0;

}


/*
void supprime(){
GtkWidget * window;
SupprimeCompte(window);

}*/
/*
void validate(){
GtkWidget * window;
ValideCompte(window);
}*/
