#ifndef SETTINGS_H
#define SETTINGS_H

typedef struct
{
    int nb_players;
    int nb_companies;
    int nb_banks;
    float initial_money;
    int ticks;
} Settings;


typedef struct
{
    float price;
    float quantity;
} Share;

typedef struct
{
    float balance;
    Share *shares;
} Bank;

typedef struct
{
    float balance;
    Share *shares;
} Company;

typedef struct
{
    float balance;
    Share *shares;
    float savings;
    Company *companies;
} Player;

#endif