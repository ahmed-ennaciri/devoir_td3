#include <iostream>
#include <vector>
#include <algorithm>

void affiche_liste(const std::vector<int>& liste) {
    for (int nombre : liste) {
        std::cout << nombre << " ";
    }
    std::cout << std::endl;
}

void tri_a_bulle(std::vector<int>& liste) {
    int n = liste.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (liste[j] > liste[j+1]) {
                std::swap(liste[j], liste[j+1]);
            }
        }
    }
}

void tri_par_selection(std::vector<int>& liste) {
    int n = liste.size();
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (liste[j] < liste[min_index]) {
                min_index = j;
            }
        }
        std::swap(liste[min_index], liste[i]);
    }
}

void tri_par_insertion(std::vector<int>& liste) {
    int n = liste.size();
    for (int i = 1; i < n; ++i) {
        int key = liste[i];
        int j = i - 1;
        while (j >= 0 && liste[j] > key) {
            liste[j+1] = liste[j];
            j = j - 1;
        }
        liste[j+1] = key;
    }
}

int main() {
    std::