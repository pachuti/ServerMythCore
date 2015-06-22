#include "ScriptPCH.h"


class bienvenue_players_script : public PlayerScript
{
        public:
                bienvenue_players_script() : PlayerScript("bienvenue_players_script") { }

                char msg[255];
                void OnLogin(Player* player)
                {
                        if (player->GetLevelPlayedTime() <=  90)
                        {
                                sprintf(msg, "Hola %s ! . Bienvenido al mejor servidor de World of Warcraft de Santa Cruz", player->GetName());
                                sWorld->SendWorldText(LANG_AUTO_BROADCAST, msg);
                        }
                }
};

void AddSC_bienvenue()
{
        new bienvenue_players_script;
}
