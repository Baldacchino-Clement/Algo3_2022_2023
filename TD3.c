#include <stdio.h>

int longueur(char *chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    return i;
}

void Inverse(char *chaine) {
    int i = longueur(chaine);
    while (i >= 0) {
        printf("%c", chaine[i]);
        i--;
    }
}

int Egales(char *chaine1, char *chaine2) {
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

int appartient(char *chaine, char c) {
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main() {
    char *chaine = "radar";
    printf("%d", longueur(chaine));
    Inverse(chaine);
    printf("%d", Egales("radar", "radar"));
    printf("%d", appartient(chaine, 'a'));

    return 0;
}
















//EXERCICE 2

//a
void puissance(int a, int n)
    {
        int result;
        if (n>0 && a>0)
        if (n == 0)
            result = 1;
         else
         result = n * puissance(a,n-1);
        return result;
    }
    
//b    
    void puissance(int a, int n)
    {
        int result;
        if (n == 0)
            result = 1;
         else
         result = n * puissance(a,n-1);
        return result;
    }

//c
void puissance(int a, int n)
    {
        int result;
        if (n == 0)
            result = 1;
         else
         result = n * puissance(a,(n-1)/2)*puissance(a,(n-1)/2);
        return result;
    }



