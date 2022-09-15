#include <string>

using namespace std;
class Guilde {
    public:
        string nom_guilde;
        Personnage *chef;
        Personnage *membre[250];
        int membreActif();
        void communiquer(string msg);
};

class Personnage {
    public :
        string nom_personnage;
        int force;
        int endu;
        int intel;
        int esprit;
        bool estchef;
        Guilde *membre;
        void attaquer();
        void bloquer();
        void fuir();
};

class Clerc : public Personnage {
    public :
        string dieu;
        string alignement;
        Soin *sort[250];
        Familier *fam[250];
        void invoquer(string nom_familier);
};

class Familier {
    public :
        string nom_familier;
        Soin *sort[250];
        void liberer();
        void modifierComportement(string comportement);
        void apprendreCompetence(string competence);
};

class Soin : public Competence {
    public :
        int pts_rendu;
        int cout_soin;
        Clerc *lanceur[250];
        Familier *fam[250];
};

class Competence {
    public :
        string nom_compétence;
        void declencher();
        void apprendre();
        void oublier();
};