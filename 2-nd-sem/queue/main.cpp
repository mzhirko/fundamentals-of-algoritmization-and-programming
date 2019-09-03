#include <iostream>
#include <clocale>
using namespace std;

struct element
{
    int el;
    element *left;
    element *right;
};

void New(element **begin, element **end);       // создание списка
void InBegin(element *begin, int new_el);       // добавление элемента в начало
void InEnd(element *end, int new_el);           // добавление элемента в конец
void Clear(element **begin, element **end);     // очистка списка
void menu(element *begin, element *end);        // меню
void Watch (element *begin, element *end);      // просмотр
void Mission(element *begin, element *end);     // выполнение задания (удаление элементов, заканчивающихся на 5)

int main()
{
    setlocale(LC_ALL, "rus");
    element *begin, *end;
    New(&begin, &end);
    while (true)
    {
        menu(begin, end);
        int Number;
        cin >> Number;
        switch (Number)
        {
        case 1: // Добавление элемента в начало
        {
            cout << "Введите элемент, который желаете добавить в НАЧАЛО:\t";
            int new_el;
            cin >> new_el;
            InBegin(begin, new_el);
            break;
        }
        case 2: // Добавление эдемента в конец
        {
            cout << "Введите элемент, который желаете добавить в КОНЕЦ:\t";
            int new_el;
            cin >> new_el;
            InEnd(end, new_el);
            break;
        }
        case 3: // Задание(удалите все элементы, заканчивающиеся на 5)
        {
            Mission(begin, end);
            break;
        }
        case 4: // Очистка списка
        {
            Clear(&begin, &end);
            break;
        }
        case 0: // Выход
            return 0;
        }
    }
}

void New(element **begin, element **end)
{
    *begin = new element;
    *end = new element;
    (*begin)->left = NULL;
    (*begin)->right = *end;
    (*end)->left = *begin;
    (*end)->right = NULL;
    return;
}
void InBegin(element *begin, int new_el)
{
    element *a = new element;
    a->el = new_el;
    a->left  = begin;
    a->right = begin->right;
    begin->right = a;
    a->right->left = a;
    return;
}
void InEnd(element *end, int new_el)
{
    element *a = new element;
    a->el = new_el;
    a->right = end;
    a->left = end->left;
    end->left = a;
    a->left->right = a;
    return;
}
void Clear(element **begin, element **end)
{
    element *t = (*begin)->right;
    while (t != *end)
    {
        t = t->right;
    }
    delete *end;        *end = NULL;
    delete *begin;        *begin = NULL;
    New(begin, end);
    return;
}
void menu(element *begin, element *end)
{
    Watch(begin, end);
    cout << "\n\nВыберите действие:\n";
    cout << "\t1. Добавление элемента в НАЧАЛО.\n\t2. Добавление элемента в КОНЕЦ.\n\t3. Задание (удаление элементов, заканчивающихся на 5).\n\t4. Удаление списка.\n\t0. Выход.\n";
    cout << "--> ";
}
void Watch (element *begin, element *end)
{
    cout << "Cписок с начала:\t\n";
    element *t = begin->right;
    if (t->right == NULL)
        cout << "Список пуст";
    while (t->right != NULL)
    {
        cout << t->el;
        if (t->right->right != NULL)
            cout << ", ";
        t = t->right;
    }
    if (t->right == NULL)
        cout << "." << endl;

     cout << "Cписок с конца:\t\n";
    element *p = end->left;
    if (p->left == NULL)
        cout << "Список пуст";
    while (p->left != NULL)
    {
        cout << p->el;
        if (p->left->left != NULL)
            cout << ", ";
        p = p->left;
    }
    if (p->left == NULL)
        cout << "." << endl;
    return;
}
void Mission(element *begin, element *end)
{
    element *p = begin->right;
    element *t = new element;
    if (begin->right == end)
    {
        cout << "Ваш список пустой!" << endl;
        return;
    }
    while (p->right != end)
    {
        if (((p->el%10 == 5)||(p->el%10 == -5)) && p!= begin)
        {
            t = p;
            p->right->left = t->left;
            p->left->right = t->right;
            p = p->right;
            delete t;
        }
        else p = p->right;
    }
    if (p->right==end && ((p->el%10 == 5)||(p->el%10 == -5)))
    {
        t = p;
        p->left->right = end;
        end->left = t->left;
        delete t;
    }
    return;
}

