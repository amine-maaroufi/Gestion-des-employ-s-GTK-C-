


#include <gtk/gtk.h>


/*void AffecterTaches(){

GtkWidget* progressAffecterWindow;
affectertache(progressAffecterWindow);
}*/
GtkWidget * valider_btn;
GtkWidget * vbox;
GtkWidget *view;
GtkWidget * invalidFrame;
GtkTreeSelection *selection;
void SupprimeCompte( GtkWidget *window)
{
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_default_size(GTK_WINDOW(window), 1200, 500);
    gtk_window_set_title(GTK_WINDOW(window), "Supprimer");
    gtk_window_set_resizable(GTK_WINDOW(window),FALSE);
    vbox = gtk_vbox_new(TRUE,1);

    invalidFrame = gtk_frame_new("Supprime Comptes");

    valider_btn =gtk_button_new();

    gtk_container_add(GTK_WINDOW(window),invalidFrame);

    GtkWidget*  view = create_view_and_model();
    GtkWidget*   selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(view));
    GtkWidget * image = gtk_image_new_from_file ("images/delete_remove_user_16732.png");
    GtkWidget * ajouter = gtk_image_new_from_file ("images/delete_remove_exit_17812.png");
gtk_button_set_image (valider_btn,ajouter);
    gtk_box_pack_start(GTK_BOX(vbox), image, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), view, TRUE, TRUE, 0);

    gtk_box_pack_start(GTK_BOX(vbox), valider_btn, TRUE, TRUE, 0);
    gtk_container_add(invalidFrame,vbox);
    gtk_widget_show_all(window);


    return 0;
}





