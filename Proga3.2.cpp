#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>
#include <Windows.h>

struct Player {
    char name[50];  // Имя плеера
    int volume;     // Громкость
};

struct Content {
    char title[100];  // Название трека/видео
    char artist[50];  // Исполнитель
    float duration;   // Продолжительность в секундах
    char format[10];  // Формат (например, MP3)
};

struct Playlist {
    char name[50];  // Имя плейлиста
    struct Content* tracks[100];  // Массив указателей на контент
    int trackCount;  // Количество треков
};

struct Effect {
    char effectName[30];  // Название эффекта (например, "Bass Boost")
    float intensity;      // Интенсивность эффекта
};

int main()
{

}
