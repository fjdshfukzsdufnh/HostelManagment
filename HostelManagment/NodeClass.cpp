#include <iostream>

/// <summary>
/// Класс для номеров.
/// </summary>
class Node {
public:
    int room_capacity = 1;
    int fill_room = 0;
    char name[3][10];
    Node* next;
    Node* previous;
};