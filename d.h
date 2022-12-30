/* * @файл
* * @author Кулаков И.С.
* * @версия 1.0.0
* * @дата 20.11.2022
* * @brief Заголовочный файл для модуля modAlphaCipher
*/
#pragma once
#include <vector>
#include <string>
#include <map>
#include <locale>
#include <codecvt>
#include <iostream>
#include <cctype>
using namespace std;

/* * @класс modAlphaCipher
** @author Кулаков И.С.
** @дата 20.11.2022
** @файл modAlphaCipher.h
** @brief Шифрование методом Маршрутной перестановки
** @detalies Для зашифрования и расшифрования сообщений используются наиболее эффективные методы шифрования и расшифровки. Текст на подходе к выбору операции. Доступна отмена выполнения программы.
** @warnings Реализация только для английского языка!
 */

class modAlphaCipher
{
private:
    int key;
   
    std::string getValidOpenText(const std::string & s);
    /* * @brief Метод класса, проверяющий расшифрованный текст на достоверность
     ** @param [in] s Зашифрованный текст на русском языке
     ** @вернуть результат
     */
     std::string getValidCipherText(const std::string & s);
public:
    modAlphaCipher()=delete;
    modAlphaCipher(const string& key1);
    /* * @brief Зашифрование
     ** @param [in] text Открытый текст на русском языке
     ** @warnings Текс не должен быть пустым, строки не должны быть перезаписаны. В тексте были зарегистрированы знаки перпинания и цифры.
     ** Результат @return Зашифрованный текст
     ** @throw cipher_error Если вместо текста ввеена пустая строка
     */
    std::string encrypt(const std::string& open_text);
    /* * @brief Расшифрование
     ** @param [in] text Зашифрованный текст на русском языке
     ** @warnings Текс не должен быть пустым, строки не должны быть перезаписаны. В тексте были зарегистрированы знаки перпинания и цифры.
     ** @return result Расшифрованный текст
     ** @throw cipher_error Если вместо текста ввеена пустая строка
     */
    std::string decrypt ( const std::string& cipher_text);
};
    /* * @class cipher_error
     ** @файл modAlphaCipher.h
     ** @brief Класс исключений
     */
class cipher_error: public std::invalid_argument
{
public:
    /* * @brief Проверка текста
     ** @param [in] what_arg После проверки текста при помощи getValidText, если возвращается вызов параметра исключения, причина исключения возникает в качестве параметра параметра.
     ** @warnings Текс не должен быть пустым, строки не должны быть перезаписаны. В тексте были зарегистрированы знаки перпинания и цифры.
     ** @return result Расшифрованный текст
     ** @throw cipher_error Если вместо текста ввеена пустая строка
     */
     explicit cipher_error (const std::string& what_arg):
        std::invalid_argument(what_arg) {}
    /* * @brief Проверка текста
     ** @param [in] what_arg После проверки номера операции, если возвращенный запрос вызова проблемы, причина исключения исключается в качестве параметра функции.
     ** @warnings Текс не должен быть пустым, строки не должны быть перезаписаны. В тексте были зарегистрированы знаки перпинания и цифры.
     ** @return result Расшифрованный текст
     ** @throw cipher_error Если вместо текста ввеена пустая строка
     */
    explicit cipher_error (const char* what_arg):
        std::invalid_argument(what_arg) {}
};
