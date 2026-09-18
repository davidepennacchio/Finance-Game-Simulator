#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

typedef struct
{
    float initial_money;
    int ticks;
} Start;

typedef struct
{
    float price;
    float quantity;
} Share;

typedef struct
{
    float balance;
    Share *shares;
    float savings;
} Player;

#endif