
#ifndef __TYPE_AST__
#define __TYPE_AST__

typedef enum {OPERATION, VALEUR} TypeAst ;
typedef enum {N_PLUS, N_MUL, N_MOINS , N_DIV,N_EGAL, N_INF, N_SUP, N_DIFF,N_INFE,N_SUPE,N_ET,N_OU,N_NON, N_LIRE, N_ECRIRE, N_IDF} TypeOperateur ;

typedef struct noeud {
	TypeAst nature ;
	TypeOperateur operateur ;
	struct noeud *gauche, *droite,*centre ;
  int valeur ;
  char chaine;
} NoeudAst ;

typedef NoeudAst *Ast ;

#endif