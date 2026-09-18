#include "utils.h"

// Data Structures

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