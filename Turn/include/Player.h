#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Enemy.h"

class Player : public Entity {
    // Contains the functions needed to construct the player's character.
    public:
        void SaveGame();

        void SetPlayerData();
        int Attack();
        void AddToInventory(int, int, int, int, int);
		
        void DisplayHUD(Enemy*);
        void ReplenishHealth();

        void AddExperience(int);
        void LoseExperience(int);

        void AddQueens(int q);
        void LoseQueens(int);

        void DisplayInventory();

    private:
        int GenericAttack();
        int RiskAttack();
        int BowAndArrow();

        void UseWhetstone();
        void UsePotion();
        int UseBomb();
        void DeductDamage(int&);
        int ReturnBowDamage();

        int Flee();
        

		int player_type;
        int level;
		int experience;
        int whetstones;
        int arrows;
        int potions;
        int bombs;
        int weaponstrength;
        int queens;
};

#endif // PLAYER_H