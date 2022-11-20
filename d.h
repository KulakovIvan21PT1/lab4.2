/* * @файл
* * @author Кулаков И.С.
* * @версия 1.0.0
* * @дата 20.11.2022
* * @brief Заголовочный файл для модуля modAlphaCipher
*/
# прагма один раз
# включить  < вектор >
# включить  < строка >
# включить  < карту >
# включить  < локаль >
# включить  < codecvt >
# включить  < iostream >
# включить  < cctype >
используя  пространство имен  std ;

/* * @класс modAlphaCipher
** @author Кулаков И.С.
** @дата 20.11.2022
** @файл modAlphaCipher.h
** @brief Шифрование методом Маршрутной перестановки
** @detalies Для зашифрования и расшифрования сообщений используются наиболее эффективные методы шифрования и расшифровки. Текст на подходе к выбору операции. Доступна отмена выполнения программы.
** @warnings Реализация только для английского языка!
 */

класс  modAlphaCipher
{
частный:
    внутренний ключ;
    /* * @brief Метод класса, проверяющий текс на валидность
     ** @param [in] s Текст на русском языке
     ** @вернуть результат
     */
    std::string getValidOpenText ( const std::string & s);
    /* * @brief Метод класса, проверяющий расшифрованный текст на достоверность
     ** @param [in] s Зашифрованный текст на русском языке
     ** @вернуть результат
     */
    std::string getValidCipherText ( const std::string & s);
публичный:
    modAlphaCipher () = удалить ;
    modAlphaCipher ( константная строка и ключ1 );
    /* * @brief Зашифрование
     ** @param [in] text Открытый текст на русском языке
     ** @warnings Текс не должен быть пустым, строки не должны быть перезаписаны. В тексте были зарегистрированы знаки перпинания и цифры.
     ** Результат @return Зашифрованный текст
     ** @throw cipher_error Если вместо текста ввеена пустая строка
     */
    std::string encrypt ( const std::string& open_text);
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
класс  cipher_error : общедоступный  стандарт ::invalid_argument
{
публичный:
    /* * @brief Проверка текста
     ** @param [in] what_arg После проверки текста при помощи getValidText, если возвращается вызов параметра исключения, причина исключения возникает в качестве параметра параметра.
     ** @warnings Текс не должен быть пустым, строки не должны быть перезаписаны. В тексте были зарегистрированы знаки перпинания и цифры.
     ** @return result Расшифрованный текст
     ** @throw cipher_error Если вместо текста ввеена пустая строка
     */
    явный  cipher_error ( const std::string& what_arg):
        std::invalid_argument(what_arg) {}
    /* * @brief Проверка текста
     ** @param [in] what_arg После проверки номера операции, если возвращенный запрос вызова проблемы, причина исключения исключается в качестве параметра функции.
     ** @warnings Текс не должен быть пустым, строки не должны быть перезаписаны. В тексте были зарегистрированы знаки перпинания и цифры.
     ** @return result Расшифрованный текст
     ** @throw cipher_error Если вместо текста ввеена пустая строка
     */
    явный  cipher_error ( const  char * what_arg):
        std::invalid_argument(what_arg) {}
};