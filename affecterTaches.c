
#include <gtk/gtk.h>
#include<string.h>
gchar  *selectedglobal1 = "dd";
GtkWidget * selectentry;
GtkWidget * selectentry1;
struct tache{
  // gchar text[500];
   GtkWidget * button;
};

GtkTreeSelection  * selection1;
enum {
  COLUMN = 0,
  NUM_COLS
};
void select1();

void submit1(){
gchar  *selectedglobal1 = gtk_entry_get_text(selectentry);
gchar  *selectedglobal2 = gtk_entry_get_text(selectentry1);
  int i=3;

char  s1[]= "hhh",s2;

GtkWidget *widget;
 //select1(selection1,&selectedglobal1,&i);
 // select2(selection2,&selectedglobal2,&i);
//printf("%d",i);
printf("%s",selectedglobal1);
printf("%s",selectedglobal2);
  }
void select2();

GtkWidget * btnsubmit;
void on_changed(GtkWidget *widget, gpointer statusbar) {

  GtkTreeIter iter;
  GtkTreeModel *model;
  gchar *value;

  if (gtk_tree_selection_get_selected(
      GTK_TREE_SELECTION(widget), &model, &iter)) {

    gtk_tree_model_get(model, &iter, COLUMN, &value,  -1);
    gtk_statusbar_push(GTK_STATUSBAR(statusbar),
        gtk_statusbar_get_context_id(GTK_STATUSBAR(statusbar),
            value), value);
    g_free(value);
  }
}

GtkTreeModel *create_and_fill_model(void) {

  GtkTreeStore *treestore;
  GtkTreeIter toplevel, child;

  treestore = gtk_tree_store_new(NUM_COLS,
                  G_TYPE_STRING);

  gtk_tree_store_append(treestore, &toplevel, NULL);
  gtk_tree_store_set(treestore, &toplevel,
                     COLUMN, "Staff",
                     -1);

  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,
                     COLUMN, "Directeur",
                     -1);

   gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,
                     COLUMN, "Responsable",
                     -1);


  gtk_tree_store_append(treestore, &toplevel, NULL);
  gtk_tree_store_set(treestore, &toplevel,
                     COLUMN, "Employe",
                     -1);

  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,
                     COLUMN, "Ingenieur",
                  -1);




  return GTK_TREE_MODEL(treestore);
}
GtkTreeModel *create_and_fill_model1(void) {

  GtkTreeStore *treestore;
  GtkTreeIter toplevel, child;

  treestore = gtk_tree_store_new(NUM_COLS,
                  G_TYPE_STRING);

  gtk_tree_store_append(treestore, &toplevel, NULL);
  gtk_tree_store_set(treestore, &toplevel,
                     COLUMN, "Projet1",
                     -1);
  gtk_tree_store_append(treestore, &toplevel, NULL);
  gtk_tree_store_set(treestore, &toplevel,
                     COLUMN, "Projet2",
                     -1);




  return GTK_TREE_MODEL(treestore);
}
GtkWidget *create_view_and_model1(void){
GtkTreeViewColumn *col;
  GtkCellRenderer *renderer;
  GtkWidget *view;
  GtkTreeModel *model;

  view = gtk_tree_view_new();

  col = gtk_tree_view_column_new();
  gtk_tree_view_column_set_title(col, "Tous les Projets");
  gtk_tree_view_append_column(GTK_TREE_VIEW(view), col);

  renderer = gtk_cell_renderer_text_new();
  gtk_tree_view_column_pack_start(col, renderer, TRUE);
  gtk_tree_view_column_add_attribute(col, renderer,
      "text", COLUMN);

  model = create_and_fill_model1();
  gtk_tree_view_set_model(GTK_TREE_VIEW(view), model);
  g_object_unref(model);

  return view;
}
GtkWidget *create_view_and_model(void) {

  GtkTreeViewColumn *col;
  GtkCellRenderer *renderer;
  GtkWidget *view;
  GtkTreeModel *model;

  view = gtk_tree_view_new();

  col = gtk_tree_view_column_new();
  gtk_tree_view_column_set_title(col, "Tous les membres");
  gtk_tree_view_append_column(GTK_TREE_VIEW(view), col);

  renderer = gtk_cell_renderer_text_new();
  gtk_tree_view_column_pack_start(col, renderer, TRUE);
  gtk_tree_view_column_add_attribute(col, renderer,
      "text", COLUMN);

  model = create_and_fill_model();
  gtk_tree_view_set_model(GTK_TREE_VIEW(view), model);
  g_object_unref(model);

  return view;
}



void hel(){
printf("hello");}
void affectertache(GtkWidget *window) {


selectentry= gtk_entry_new();
selectentry1= gtk_entry_new();
struct tache emp[500];

  GtkWidget *hbox;
  GtkWidget *vbox;
  GtkWidget *halign;
  GtkWidget *balign;
  GtkWidget *button1;
  GtkWidget *button2;
  GtkWidget *statusbar;
 GtkWidget table;
GtkWidget * text;
  GtkWidget* vbox1;

  GtkWidget *vProjet;
    GtkWidget* textbox;

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 1200, 500);
  gtk_window_set_title(GTK_WINDOW(window), "Affecter les taches");
    gtk_window_set_resizable(GTK_WINDOW(window),FALSE);
    //hbox = gtk_hbox_new(TRUE, 3);
 vbox = gtk_vbox_new(FALSE, 0);
vProjet = gtk_vbox_new(FALSE,0);
  //  GtkWidget* scrollbar = gtk_scrolled_window_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER(window),vbox);
//gtk_scrolled_window_set_policy ( scrollbar,
  //                                GTK_POLICY_NEVER,
    //                            GTK_POLICY_ALWAYS);


 // hbox = gtk_hbox_new(FALSE, 0);
  //gtk_container_add(GTK_CONTAINER(window), vbox);
 GtkWidget *view;
  GtkTreeSelection *selection;
  halign = gtk_alignment_new(0, 0, 0, 0);
 // gtk_container_add(GTK_CONTAINER(halign), hbox);

// gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scrollbar), vbox);
 int i;
  for (i=0;i<1;i++){
  GtkWidget *  projet = gtk_combo_box_new();
  gtk_widget_set_size_request(projet, 10, 10);
  //gtk_combo_box_append_text(GTK_COMBO_BOX(projet), "Ubuntu");
//  gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(projet),1 ,"Projet1");
//    gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT(projet),2, "Projet2");
 GtkWidget * description = gtk_frame_new("description du tache");
 GtkWidget * employe = gtk_frame_new("Membre");
  GtkWidget * projetframe = gtk_frame_new("Projet");
vbox1 = gtk_vbox_new(FALSE, 0);
textbox = gtk_vbox_new(FALSE,0);
text = gtk_text_view_new ();
  hbox = gtk_hbox_new(TRUE, 0);
  halign = gtk_alignment_new(0, 1, 1, 0);
   GtkWidget * label1 = gtk_label_new("nid2");

btnsubmit =gtk_button_new_with_mnemonic("Envoyer");

 GtkWidget * label3 = gtk_label_new("name");

   gtk_container_add(employe,vbox1 );
   gtk_container_add(projetframe,vProjet);
// GtkWidget * description = gtk_label_new("description du tache");
  gtk_container_add(description,textbox );
  //GtkWidget * label4 = gtk_label_new("nid5");
GtkWidget* view1 = create_view_and_model1();
view = create_view_and_model();
  selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(view));
selection1 = gtk_tree_view_get_selection(GTK_TREE_VIEW(view1));


  //gtk_widget_set_size_request(btnsubmit, 20, 10);
//gtk_box_pack_start(GTK_BOX(textbox), description, TRUE, TRUE, 5);
gtk_box_pack_start(GTK_BOX(textbox), text, TRUE, TRUE, 5);
GtkWidget * projetimage = gtk_image_new_from_file ("images/projet_image.png");
GtkWidget * image = gtk_image_new_from_file ("images/employe.png");
gtk_box_pack_start(GTK_BOX(vbox1), image, TRUE, TRUE, 5);
gtk_box_pack_start(GTK_BOX(vProjet), projetimage, TRUE, TRUE, 5);
gtk_container_add(GTK_CONTAINER(hbox), employe);
gtk_container_add(GTK_CONTAINER(hbox), projetframe);
gtk_box_pack_start(GTK_BOX(vbox1), view, TRUE, TRUE, 5);
gtk_box_pack_start(GTK_BOX(vProjet), view1, TRUE, TRUE, 5);
gtk_container_add(GTK_CONTAINER(hbox), description);


 gtk_container_add(GTK_CONTAINER(halign), hbox);
/*
           GtkWidget *label;
        char texte[10];
  GtkWidget * label = gtk_label_new("nid");
        sprintf(texte, "user %d", i);
   label = gtk_label_new(texte);
   gtk_container_add(GTK_CONTAINER(hbox), label2);*/
   // button1 = gtk_button_new_with_label("OK");
 // gtk_widget_set_size_request(button1, 70, 30 );
  //button2 = gtk_button_new_with_label("Apply");
  //gtk_widget_set_size_request(button2, 70, 30 );

 // gtk_box_pack_start(GTK_BOX(hbox), label, TRUE, TRUE, 5);
 // gtk_box_pack_start(GTK_BOX(hbox), button2, TRUE, TRUE, 0);
 gtk_box_pack_start(GTK_BOX(vbox), halign, TRUE, TRUE, 5);
 gtk_box_pack_start(GTK_BOX(vbox), btnsubmit, TRUE, TRUE, 5);

  }
//  GtkWidget * label = gtk_label_new("nid");
  //balign = gtk_alignment_new(0, 1, 1, 0);
  //  GtkWidget * label1 = gtk_label_new("nid2");
    //    GtkWidget * label2 = gtk_label_new("nid3");
 //balign = gtk_alignment_new(0, 1, 1, 0);



//gtk_container_add(GTK_CONTAINER(hbox), label2);
//gtk_container_add(GTK_CONTAINER(hbox), label1);

 // statusbar = gtk_statusbar_new();
  //gtk_container_add(GTK_CONTAINER(hbox), label);
 //gtk_container_add(GTK_CONTAINER(halign), hbox);

  //gtk_container_add(GTK_CONTAINER(balign), label);

  //gtk_box_pack_start(GTK_BOX(vbox), halign, FALSE, FALSE, 0);


  //g_signal_connect(G_OBJECT(btnsubmit), "destroy",
    //    G_CALLBACK(submit_tache), NULL);


  /*g_signal_connect(G_OBJECT(window), "destroy",
        G_CALLBACK(gtk_main_quit), NULL);*/

g_signal_connect(selection, "changed",
        G_CALLBACK(select1), NULL);
         g_signal_connect(selection1, "changed",
        G_CALLBACK(select2), NULL);

      g_signal_connect(btnsubmit, "clicked",
        G_CALLBACK(submit1), NULL);

  gtk_widget_show_all(window);



}
    void select2(GtkWidget *widget,char *selected){
     GtkTreeIter iter;
  GtkTreeModel *model;
  gchar *value;
  if (gtk_tree_selection_get_selected(
      GTK_TREE_SELECTION(widget), &model, &iter)) {

    gtk_tree_model_get(model, &iter, COLUMN, &value,  -1);
gtk_entry_set_text(selectentry1,value);
   // gtk_statusbar_push(GTK_STATUSBAR(statusbar),
   //     gtk_statusbar_get_context_id(GTK_STATUSBAR(statusbar),
     //       value), value);
selectedglobal1 = "lol";

//printf("%s",selectentry1);
    g_free(value);
  }
}


  select1(GtkWidget *widget,char  * selected){
     GtkTreeIter iter;
  GtkTreeModel *model;
  gchar *value;
  if (gtk_tree_selection_get_selected(
      GTK_TREE_SELECTION(widget), &model, &iter)) {

    gtk_tree_model_get(model, &iter, COLUMN, &value,  -1);
   // gtk_statusbar_push(GTK_STATUSBAR(statusbar),
   //     gtk_statusbar_get_context_id(GTK_STATUSBAR(statusbar),
     //       value), value);
//  *pj=2;
 // strcpy(selected,"lol");
gtk_entry_set_text(selectentry,value);
//printf("%s",value);
//printf("%s",selected);
    g_free(value);
  }


  }




