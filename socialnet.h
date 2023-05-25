#pragma once

#include "staticarray.h"

#define NAMELENGTH 30

typedef char Name[NAMELENGTH];

class SocialNetwork { // соц. сеть
public:
    struct Human {    // класс человека
        Human();
        Human(const Name _name, int _id);
        Human& operator=(const Human& other);
        Human(const Human& other);
        bool operator==(const Human& other);
        Name name; // имя
        friend class SocialNetwork;

    private:
        int id; // внутренний id
    };
    SocialNetwork();
    
    void addnewMan(const Name name);  // добавление нового человека в сеть
    void delMan(const Name name);     // удаление человека из сети
    void addFriendship(const Name name_1, const Name name_2);   // дружба между двумя людьми
    void showThreeHandshakes();   // алгоритм поиска пар

private:
    bool are_friends(const Human& m1, const Human& m2);   // являются ли друзьями?
    bool man_exists_with_id(int man_id);   // есть ли человек с man_id
    Human findManByName(const Name name);   // поиск по имени
//private:
    int friend_matrix[SIZE][SIZE]; // матрица связей
    StaticArray<Human> people; // список людей внутри сети
    StaticArray<bool> busyids; // занятые id
};
