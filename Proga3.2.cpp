#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>
#include <Windows.h>

struct Content {
    char title[100];  // Название трека/видео
    char artist[50];  // Исполнитель
    float duration;   // Продолжительность в секундах
    char format[10];  // Формат (например, MP3)
};

struct Playlist {
    char name[50];  // Имя плейлиста
    struct Content tracks[100];  // Массив треков (используем структуру Content)
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

struct Device {
    char deviceName[100];   // Название устройства
    int maxVolume;          // Максимальная громкость устройства
    int currentVolume;      // Текущая громкость устройства
};

struct User {
    char username[50];          // Имя пользователя
    struct AudioSettings audioSettings;  // Настройки аудио (используем структуру AudioSettings)
    struct Device device;       // Устройство пользователя (используем структуру Device)
    char preferredCodec[10];    // Предпочтительный аудиоформат
};

struct TrackProgress {
    float currentTime;  // Текущее время воспроизведения в секундах
    float totalTime;    // Общее время трека в секундах
    int isPlaying;      // Флаг воспроизведения (1 — воспроизводится, 0 — пауза)
};

int main() {

}
