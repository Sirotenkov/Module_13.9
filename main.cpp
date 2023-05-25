#include <iostream>
#include "socialnet.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SocialNetwork sn;

    sn.addnewMan("Олег");
    sn.addnewMan("Никита");
    sn.addnewMan("Настя");
    sn.addnewMan("Ваня");
    sn.addnewMan("Женя");

    sn.delMan("Ваня");
    sn.addnewMan("Аня");

    sn.addFriendship("Олег", "Никита");
    sn.addFriendship("Никита", "Настя");
    sn.addFriendship("Настя", "Аня");
    sn.addFriendship("Аня", "Женя");

    sn.showThreeHandshakes();

    return 0;
}

