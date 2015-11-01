//
//  main.cpp
//  table
//
//  Created by Никита Пяткин on 29.10.15.
//  Copyright © 2015 Никита Пяткин. All rights reserved.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


#define length 12         //максимальная длина информации
#define colvo 14          //максимальное кол-во элементов таблицы
#define default_info "default"

struct Item{
    int key;              //ключ
    int datalength;       //длина инфомации данного элемента
    char string[length];  //массив символов,из которых складывается информация
    struct Item*next;
};

class table_all{
private:
    Item table[colvo];    //массив структур = таблица
    int filling;          //кол-во заполненных элементов
public:
    table_all();
    table_all(int size);
    void create(int i);int key;char* info,int len);
    
    
    
    
    
    
    
    
};

table_all::table_all()
{
    filling=0;
    table[colvo]={0};
}

table_all::table_all(int size)
{
    if (size>=colvo)
        size=colvo;
    for (int i=0;i<colvo;i++)
    {
        create(i,i,default_info,sizeof(default_info));
    }
    filling=size;
}

void table_all::create(int i,int key,char* info,int len)
{
    table[i].key=key;
    table
    
}

    









































