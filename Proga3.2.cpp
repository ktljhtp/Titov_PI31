#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
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
    struct Content tracks[100];  // Массив треков
    int trackCount;  // Количество треков
};

struct AudioSettings {
    int volume;    // Уровень громкости (0 - 100)
    int balance;   // Баланс между левым и правым каналом (-50 до +50)
};

struct Device {
    char deviceName[100];   // Название устройства
    int maxVolume;          // Максимальная громкость устройства
    int currentVolume;      // Текущая громкость устройства
};

struct User {
    char username[50];               // Имя пользователя
    struct AudioSettings audioSettings;  // Настройки аудио
    struct Device device;               // Устройство пользователя
    char preferredCodec[10];            // Предпочтительный аудиоформат
};

// Функция для добавления треков в плейлист
void add_tracks_to_playlist(struct Playlist* myPlaylist) {
    strcpy(myPlaylist->name, "My Playlist");
    myPlaylist->trackCount = 2;

    // Заполняем информацию о первом треке
    strcpy(myPlaylist->tracks[0].title, "Song 1");
    strcpy(myPlaylist->tracks[0].artist, "Artist 1");
    myPlaylist->tracks[0].duration = 180.0;
    strcpy(myPlaylist->tracks[0].format, "MP3");

    // Заполняем информацию о втором треке
    strcpy(myPlaylist->tracks[1].title, "Song 2");
    strcpy(myPlaylist->tracks[1].artist, "Artist 2");
    myPlaylist->tracks[1].duration = 200.0;
    strcpy(myPlaylist->tracks[1].format, "MP3");
}

// Функция для заполнения информации о пользователе
void fill_user_data(struct User* user) {
    strcpy(user->username, "TitovVD");
    user->audioSettings.volume = 80;
    user->audioSettings.balance = 0;
    strcpy(user->device.deviceName, "Speakers");
    user->device.maxVolume = 100;
    user->device.currentVolume = 80;
    strcpy(user->preferredCodec, "MP3");
}

// Функция для вывода информации о плейлисте
void print_playlist_info(struct Playlist* myPlaylist) {
    printf("Playlist: %s\n", myPlaylist->name);
    for (int i = 0; i < myPlaylist->trackCount; i++) {
        printf("Track %d: %s by %s (Duration: %.2f sec, Format: %s)\n", i + 1, myPlaylist->tracks[i].title, myPlaylist->tracks[i].artist, myPlaylist->tracks[i].duration, myPlaylist->tracks[i].format);
    }
}

// Функция для вывода информации о пользователе
void print_user_info(struct User* user) {
    printf("\nUser: %s\nPreferred Volume: %d\nDevice: %s (Current Volume: %d)\n", user->username, user->audioSettings.volume, user->device.deviceName, user->device.currentVolume);
}

int main() {
    struct Playlist myPlaylist;
    struct User user;

    // Добавляем треки в плейлист
    add_tracks_to_playlist(&myPlaylist);

    // Заполняем данные пользователя
    fill_user_data(&user);

    // Выводим информацию о плейлисте и пользователе
    print_playlist_info(&myPlaylist);
    print_user_info(&user);

    return 0;
}
