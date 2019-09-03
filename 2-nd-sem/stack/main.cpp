#include <iostream>
#include<ctime>
#include <clocale>
using namespace std;

struct Stack
{
    int info;                           // информационная часть элемента, например int
    Stack *adr;                         // адресная часть – указатель на следующий элемент
};

void   Watch(Stack *head);              // вывод элементов
int    menu(Stack *head);               // меню
Stack* DopRand(Stack *head);            // добавление рандомных элементов
Stack* InStack(Stack *p, int in);       // добавление элемента
void   Sort(Stack *head);               // сортировка
void   Sort_p(Stack *&head);
Stack* Mission(Stack *head);            // выполнение задания (удалить все элементы, заканчивающиеся на 5)
Stack* Clear(Stack *head);              // очистка стека

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    Stack *head = NULL;
    while (true)
    {
        int number = menu(head);
        switch (number)
        {
            case 1:
                    //Добавление рандомных элементов

                head = DopRand(head);
                break;

            case 2:
                    //Добавление элемента пользователя

                int x;
                cout << "Введите элемент, который желаете добавить:\t";
                cin >> x;
                head = InStack(head, x);
                break;

            case 3:
                    //сортировка стека

                if (head == NULL || head->adr == NULL)
                    break;
                Sort(head);
                break;

            case 4:
                    //удалить все элементы, заканчивающиеся на 5

                head = Mission(head);
                break;

            case 5:
                    //очистка стека

                head = Clear(head);
                break;

            case 6:

                if (head == NULL || head->adr == NULL)
                    break;
                Sort_p(head);
                break;
            case 7:

                break;

            case 0:
                return 0;
        }
    }
}

void   Watch(Stack *head)
{
    cout << "Cтек:\t";
    Stack *sp = head;           // устанавливаем текущий указатель на начало списка: sp = head
    if (sp == NULL)             // начинаем цикл, работающий до тех пор, пока указатель sp не равен NULL
                                // (признак окончания списка)
        cout << "Cтек пуст";
    while (sp != NULL)
    {
        cout << sp->info;       // выводим информационную часть текущего элемента sp -> info на экран.
        if (sp->adr != NULL)
            cout << ", ";
        sp = sp->adr;           // текущий указатель переставляем на следующий элемент,
                                // адрес которого находится в поле adr текущего элемента:  sp = sp -> adr;
    }
    if (sp == NULL)
        cout << ".";
}
int    menu(Stack *head)
{
    setlocale(LC_ALL, "rus");
    Watch(head);
    int number;
    cout << endl << "  Выберите действие:";
    cout << "\n    1. Добавить случайных элементов в стек.\n    2. Добавить элемент в стек.\n    3. Сортировка стека.\n    4. Выполнение задания (удалить все элементы, заканчивающиеся на 5).\n    5. Очистить стек.\n    6. Sort_p.\n    0. Выход.\n";
    cout << "-->";
    cin >> number;
    return number;
}
Stack* DopRand(Stack *head)
{
    int kol, x;
    cout << "Введите количество элементов, которое желаете добавить:\t";
    cin >> kol;
    for (int i = 0; i < kol; i++)
    {
        x = rand() % 100;
        head = InStack(head, x);
    }
    return head;
}
Stack* InStack(Stack *p, int in)
{
    Stack *t = new Stack;               // захватываем память для элемента
    t->info = in;                       // формируем информационную часть
    t->adr = p;                         // формируем адресную часть
    return t;
}
void   Sort(Stack *head)                // сортировка методом обмена информацией между текущим
{                                       // и следующим элементом
    Stack *t = NULL;
    Stack *t1;
    int x;
    do
    {
        for (t1 = head; t1->adr != t; t1 = t1->adr)
            if (t1->info > t1->adr->info)
            {
                x = t1->info;
                t1->info = t1->adr->info;
                t1->adr->info = x;
            }
        t = t1;
    } while (head->adr != t);

}

void   Sort_p(Stack *&head)
{
    Stack *t = NULL, *t1, *x;

    if ((head) -> adr -> adr == NULL)
    do {
        for (t1=head; t1-> adr->adr  != t; t1=t1-> adr)
            if (t1->adr->info  >  t1-> adr-> adr-> info){
                x = t1->adr->adr;
                t1 -> adr -> adr = x -> adr;
                x-> adr =t1-> adr;
                t1-> adr = x;
            }
        t= t1-> adr;
    } while ((head)-> adr -> adr != t);

}

Stack* Mission(Stack* head)
{
    Stack *P = head;
    if (head == NULL)
        cout << "Ваш стек пустой!";
    while (P->adr != NULL)
    {
        //-------------------
        if ((P->info%10 == 5)||(P->info%10 == -5))
        {
            Stack *st = head;
            head = head->adr;
            P = P->adr;
            delete st;
        }
        //--------------------
        else
        {
            if ((P->adr->info%10 == 5)||(P->adr->info%10 == -5))
            {
                Stack *st = P->adr;
                P->adr = P->adr->adr;
                delete st;
            }
            else P = P->adr;
        }
        //--------------------
    }
    if (head->adr == NULL && ((head->info%10 == 5)||(head->info%10 == -5)))
    {
        Stack *st = head;
        head = head->adr;
        delete st;
    }
    return head;
}
Stack* Clear(Stack *head)
{
    Stack *sp = head;
    Stack *st;
    while (sp != NULL)
    {
        st = sp;
        sp = sp->adr;
        delete st;
    }
    return sp;
}
