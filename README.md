# pushswap

Project Push Swap at 42

The goal of this project is to sort a pile of integers using another pile and only predetermined operations, in the least number of operations possible. The operations are ra, rb, rra, rrb, pa, pb, sa, sb, rr, ss

Allowed functions:

◦ write ◦ malloc ◦ free ◦ exit

In french:

Le jeu est constitué de 2 piles nommées a et b (si vous savez pas ce qu’est une pile, Google est votre ami).
• Au départ b est vide et a contient un certain nombre de nombres positifs ou négatifs (sans doublons).

• Le but du jeu est de faire en sorte que a contienne les mêmes nombres mais dans l’ordre croissant.

• Pour ce faire, on ne dispose que des opérations suivantes :

◦ sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a.

(ne fait rien s’il n’y en a qu’un ou aucun).

◦ sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b. (ne fait rien s’il n’y en a qu’un ou aucun).

◦ ss : sa et sb en même temps.

◦ pa : pusha - prend le premier élément au sommet de b et le met sur a.

(ne fait rien si b est vide).

◦ pb : pushb - prend le premier élément au sommet de a et le met sur b. (ne fait rien si a est vide).

◦ ra : rotate a - décale d’une position tous les élements de la pile a. (vers le haut, le premier élément devient le dernier).

◦ rb : rotate b - décale d’une position tous les élements de la pile b. (vers le haut, le premier élément devient le dernier).

◦ rr:ra et rb en meme temps.

◦ rra : reverse rotate a

(vers le bas, le dernier élément devient le premier).

◦ rrb : reverse rotate b

(vers le bas, le dernier élément devient le premier).

◦ rrr : rra et rrb en même temps.
