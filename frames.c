
#include <gtk/gtk.h>


GtkWidget * windowglob;
GtkWidget * loginglob;
void ProgressinProjet(){
GtkWidget* progressProjectWindow;
ProgressionProjet(progressProjectWindow);

}
void log_out();
void consulter_fichier();
void ProgressioTaches(){

GtkWidget* progressTacheWindow;
ProgressioTache(progressTacheWindow);

}


void AffecterTaches(){

GtkWidget* progressAffecterWindow;
affectertache(progressAffecterWindow);
}

void frames( GtkWidget *window,GtkWidget * login) {
gtk_window_set_title(window,"Chef des projets");
  GtkWidget *vbox;
  GtkWidget *table;
  GtkWidget  *table1;
  GtkWidget *frame1;
  GtkWidget *frame2;
  GtkWidget *frame3;
  GtkWidget *frame4;
  GtkWidget *frameBtn2;
  GtkWidget *frameBtn4;
//  GtkWidget *okBtn;

  vbox = gtk_vbox_new(FALSE, 0);
  table = gtk_table_new(2, 2, TRUE);


  gtk_container_add(GTK_CONTAINER(window), vbox);

  table1 = gtk_table_new(1, 1, TRUE);
  gtk_table_set_row_spacings(GTK_TABLE(table), 10);
  gtk_table_set_col_spacings(GTK_TABLE(table), 10);
  GtkWidget* okBtn3 = gtk_button_new();
  GtkWidget* okBtn2 = gtk_button_new();
  GtkWidget* okBtn1 = gtk_button_new();
  GtkWidget* okBtn = gtk_button_new();
  frameBtn2 = gtk_button_new();
  frameBtn4 = gtk_button_new();

  GtkWidget *toolbar;
  GtkToolItem *newTb;
  GtkToolItem *openTb;
  GtkToolItem *saveTb;
  GtkToolItem *sep;
  GtkToolItem *exitTb;


//  vbox = gtk_vbox_new(FALSE, 0);
  //gtk_container_add(GTK_CONTAINER(window), vbox);



  toolbar = gtk_toolbar_new();
  gtk_toolbar_set_style(GTK_TOOLBAR(toolbar), GTK_TOOLBAR_ICONS);

  newTb = gtk_tool_button_new_from_stock(GTK_STOCK_NEW);
  gtk_toolbar_insert(GTK_TOOLBAR(toolbar), newTb, -1);

  openTb = gtk_tool_button_new_from_stock(GTK_STOCK_OPEN);
  gtk_toolbar_insert(GTK_TOOLBAR(toolbar), openTb, -1);

  saveTb = gtk_tool_button_new_from_stock(GTK_STOCK_SAVE);
  gtk_toolbar_insert(GTK_TOOLBAR(toolbar), saveTb, -1);

  sep = gtk_separator_tool_item_new();
  gtk_toolbar_insert(GTK_TOOLBAR(toolbar), sep, -1);

  exitTb = gtk_tool_button_new_from_stock(GTK_STOCK_QUIT);
  gtk_toolbar_insert(GTK_TOOLBAR(toolbar), exitTb, -1);

  //gtk_container_add(GTK_CONTAINER(vbox), toolbar);
   gtk_box_pack_start(GTK_BOX(vbox), toolbar, FALSE, FALSE, 5);
  frame1 = gtk_frame_new("Affecter les taches");
  gtk_frame_set_shadow_type(GTK_FRAME(frame1), GTK_SHADOW_IN);
  frame2 = gtk_frame_new("Suivre la progression de les taches");
  gtk_frame_set_shadow_type(GTK_FRAME(frame2), GTK_SHADOW_OUT);
  frame3 = gtk_frame_new("Suivre la progression de les projets");
  gtk_frame_set_shadow_type(GTK_FRAME(frame3), GTK_SHADOW_ETCHED_IN);
  frame4 = gtk_frame_new("Consulter les fichiers");
  gtk_frame_set_shadow_type(GTK_FRAME(frame4), GTK_SHADOW_ETCHED_OUT);

  gtk_table_attach_defaults(GTK_TABLE(table), frame1, 0, 1, 0, 1);
  gtk_table_attach_defaults(GTK_TABLE(table), frame2, 0, 1, 1, 2);
  gtk_table_attach_defaults(GTK_TABLE(table), frame3, 1, 2, 0, 1);
  gtk_table_attach_defaults(GTK_TABLE(table), frame4, 1, 2, 1, 2);

  //gtk_container_add(GTK_CONTAINER(vbox), table);
 gtk_box_pack_start(GTK_BOX(vbox), table, TRUE, TRUE, 20);

 GtkWidget *image = gtk_image_new_from_file ("images/Login-icon.png");
 GtkWidget *taches = gtk_image_new_from_file ("images/taches.png");
 GtkWidget *projets = gtk_image_new_from_file ("images/Logiciel-Gestion-de-Projets.png");
  GtkWidget *fichier = gtk_image_new_from_file ("images/fichier.jpg");
    GtkWidget *affecter = gtk_image_new_from_file ("images/assign tasks.png");
 gtk_container_add(frameBtn2,projets );
 gtk_container_add(frame3,frameBtn2);
 gtk_container_add(frame2, okBtn);
 gtk_container_add(frame4, frameBtn4);
 gtk_container_add(frame1,okBtn1);
 gtk_button_set_image (okBtn,image);
 gtk_button_set_image (okBtn,taches);
 gtk_button_set_image (frameBtn4,fichier);
 gtk_button_set_image (okBtn1,affecter);
windowglob = window;
loginglob = login;
    g_signal_connect(frameBtn4, "clicked",
        G_CALLBACK(consulter_fichier), G_OBJECT(window));


 g_signal_connect(G_OBJECT(window), "destroy",
        G_CALLBACK(gtk_main_quit), G_OBJECT(window));

   g_signal_connect(frameBtn2, "clicked",
        G_CALLBACK(ProgressinProjet), G_OBJECT(window));

   g_signal_connect(okBtn, "clicked",
        G_CALLBACK(ProgressioTaches), G_OBJECT(window));

   g_signal_connect(okBtn1, "clicked",
        G_CALLBACK(AffecterTaches), G_OBJECT(window));


         g_signal_connect(G_OBJECT(exitTb), "clicked",
        G_CALLBACK(log_out), NULL);

  //gtk_widget_show_all(window);

//  gtk_main();




  return 0;
}



void log_out(){
    logout(windowglob);
}

void consulter_fichier(){
GtkWidget * window;
ValideCompte(window);

}
