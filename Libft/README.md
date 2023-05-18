# Projet Libft

## Table des matières

- [Introduction](#introduction)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Exemple d'utilisation](#exemple-d'utilisation)
- [Tests](#tests)
- [Contact](#contact)
- [Licence](#licence)

## Introduction

Bienvenue sur le dépôt de mon projet Libft. Ce projet fait partie de mon cursus à l'école 42, qui nous encourage à créer notre propre bibliothèque de fonctions de base en C. L'objectif de ce projet est de coder une bibliothèque C personnelle pour réutiliser ces fonctions dans le cadre des futurs projets de l'école 42.

## Fonctionnalités

Le projet Libft recrée certaines des fonctions standard de la bibliothèque C, ainsi que quelques fonctions supplémentaires que nous avons trouvées utiles. Les fonctions sont réparties en plusieurs catégories : fonctions de manipulation de chaînes de caractères, de manipulation de mémoire, de manipulation de nombres et de caractères, et d'autres fonctions utilitaires.

## Installation

Pour installer et compiler la bibliothèque, clonez ce dépôt et utilisez la commande `make` à la racine du projet :

```bash
git clone https://github.com/JB-Doffemont/42_school.git
cd libft
make
```

Cela créera une bibliothèque statique `libft.a` que vous pouvez lier à vos fichiers lors de la compilation de votre programme.

## Exemple d'utilisation

```c
#include "libft.h"

int main()
{
    char *str = ft_strdup("école 42");
    ft_putendl(str);
    free(str);
    return (0);
}
```

## Tests

Pour tester le code, vous pouvez utiliser votre propre main.c et comparer la sortie à celle de la véritable fonction de la bibliothèque standard C. Des suites de tests complémentaires créées par d'autres étudiants de l'école 42 sont également disponibles sur GitHub.
