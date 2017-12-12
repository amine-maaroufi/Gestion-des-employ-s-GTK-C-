


#include <gtk/gtk.h>
#include<mysql/mysql.h>



/*void AffecterTaches(){

GtkWidget* progressAffecterWindow;
affectertache(progressAffecterWindow);
}*/


GtkWidget * valider_btn;
GtkWidget * vbox;
GtkWidget *view;
GtkWidget * invalidFrame;
GtkTreeSelection *selection;
typedef struct Membre  Membre;
MYSQL * con;
struct Membre

{

char * cin ;
char * identifiant;
char * motdepasse;
char * nom;
char * prenom;
char * Role;
char * etat;
};

void ValideCompte( GtkWidget *window)
{

 Membre T[20];
con = DBConnect();

    char requete[150] = "";
    sprintf(requete, "SELECT identifiant FROM membres WHERE etat='desactive'");
     MYSQL_RES *result = NULL;
        MYSQL_ROW row;

        unsigned int i = 0;
        unsigned int num_champs = 0;

   mysql_query(con, requete);
  result = mysql_use_result(con);

   //num_champs = mysql_num_fields(result);
int k = 0;
int j=0;
int  taille ;

taille = 0;
 while (row = mysql_fetch_row(result) )
        {
//T[k]= row[0];
T[k].identifiant = row[0];
//printf("%s ", row[0]);
//printf("%s ", T[k]);


printf("%s",T[k].identifiant);
taille++;


k++;/*
                for(i = 0; i < num_champs; i++)
            {
               //On ecrit toutes les valeurs

              printf("%s ", row[i] ? row[i] : "NULL");
            }*/
            printf("\n");



        }


for(j=0;j<k;j++){
printf("%s ", T[j].identifiant);
}

printf("%d",taille);
       printf(" ddd\n");
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_default_size(GTK_WINDOW(window), 1200, 500);
    gtk_window_set_title(GTK_WINDOW(window), "Ajout");
    gtk_window_set_resizable(GTK_WINDOW(window),FALSE);
    vbox = gtk_vbox_new(TRUE,1);

    invalidFrame = gtk_frame_new("Valide Comptes");

    valider_btn =gtk_button_new();

    gtk_container_add(GTK_CONTAINER(window),invalidFrame);

int z = 0;
    gchar * listeTitre = "Tous les membres desactives";
view = create_view_and_model_gen(listeTitre,T,z);
  selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(view));
    GtkWidget * image = gtk_image_new_from_file ("images/Icojam-Blue-Bits-User-add.png");
    GtkWidget * ajouter = gtk_image_new_from_file ("images/add_insert_new_17850.png");
gtk_button_set_image (GTK_BUTTON(valider_btn),ajouter);
    gtk_box_pack_start(GTK_BOX(vbox), image, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), view, TRUE, TRUE, 0);

    gtk_box_pack_start(GTK_BOX(vbox), valider_btn, TRUE, TRUE, 0);
    gtk_container_add(GTK_CONTAINER(invalidFrame),vbox);
    gtk_widget_show_all(window);



}





