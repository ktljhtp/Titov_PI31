﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>
#include <Windows.h>

//проверка гит

struct Content {
    char title[100];  // Название трека/видео
    char artist[50];  // Исполнитель
    float duration;   // Продолжительность в секундах
    char format[10];  // Формат (например, MP3)
};

struct Playlist {
    char name[50];  // Имя плейлиста
    int trackCount;  // Количество треков
};

struct AudioSettings {
    int volume;              // Уровень громкости (0 - 100)
    int balance;             // Баланс между левым и правым каналом (-50 до +50)
};

struct Equalizer {
    int bassLevel;           // Уровень басов (-10 до +10)
    int trebleLevel;         // Уровень высоких частот (-10 до +10)
};

struct User {
    char username[50];          // Имя пользователя
    int preferredVolume;        // Предпочтительный уровень громкости
    char preferredCodec[10];    // Предпочтительный аудиоформат
};

struct Device {
    char deviceName[100];   // Название устройства
    int maxVolume;          // Максимальная громкость устройства
    int currentVolume;      // Текущая громкость устройства
};

struct PlaylistSettings {
    int shuffle;          // Включен ли режим случайного воспроизведения (1 — да, 0 — нет)
    int repeat;           // Включен ли режим повтора (1 — да, 0 — нет)
};

struct TrackProgress {
    float currentTime;  // Текущее время воспроизведения в секундах
    float totalTime;    // Общее время трека в секундах
    int isPlaying;      // Флаг воспроизведения (1 — воспроизводится, 0 — пауза)
};

int main()
{

}
