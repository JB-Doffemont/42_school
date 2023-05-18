# Ft_printf Project

## Table des matières

- [Introduction](#introduction)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Exemple d'utilisation](#exemple-d'utilisation)
- [Tests](#tests)

## Introduction

Bienvenue sur le dépôt de mon projet Ft_printf. Ce projet fait partie de mon cursus à l'école 42, une école innovante de programmation basée à Paris. L'objectif de ce projet était de recréer la fonction de bibliothèque C `printf`. Cela m'a permis d'approfondir ma compréhension de la gestion de la mémoire en C, des formats de données et de l'affichage des données.

## Fonctionnalités

La fonction `ft_printf` que j'ai créée a le même comportement que la fonction `printf` originale de la bibliothèque standard C. Elle gère les conversions de format suivantes : `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%` et les flags `-`, `0`, `.` et `*`.

## Installation

Pour installer et compiler le projet, clonez ce dépôt et utilisez la commande `make` à la racine du projet :

```bash
git clone https://github.com/[votre_nom_d'utilisateur]/ft_printf.git
cd ft_printf
make
```

Cela créera une bibliothèque statique `libftprintf.a` que vous pouvez lier à vos fichiers lors de la compilation de votre programme.

## Exemple d'utilisation

```c
#include "ft_printf.h"

int main()
{
    int number = 42;
    char *string = "école 42";

    ft_printf("Bienvenue à l'%s. Le nombre du jour est %d\n", string, number);
    return (0);
}
```

## Tests

Pour tester le code, vous pouvez utiliser votre propre main.c et comparer la sortie à celle de la véritable fonction `printf`. Des suites de tests complémentaires créées par d'autres étudiants de l'école 42 sont également disponibles sur GitHub.

