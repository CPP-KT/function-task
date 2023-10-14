# function
Класс [`std::function`](https://en.cppreference.com/w/cpp/utility/functional/function) представляет собой оболочку для полиморфных функций. Экземпляры `std::function` могут хранить, копировать и вызывать любой копируемый [`Callable-объект`](https://en.cppreference.com/w/cpp/named_req/Callable) - функции (через указатели на них), лямбда-выражения, объекты `bind`, а также указатели на методы классов и указатели на члены данных.

`std::function` может не хранить внутри себя `callable-объект`. Тогда в случае вызова opeartor() должно быть выброшенно исключение `bad_function_call`

Также требуется small-object оптимизация на объект `callable`
