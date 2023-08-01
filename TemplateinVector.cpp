//#include <iostream>
//#include <cassert>
//using namespace std;
//
//
//
//
//
//
//template<typename T>
//class Vector
//{
//private:
//    T* _array = NULL;
//    int _size = 0;
//    int _capacity = 15;
//public:
//    Vector()
//    {
//        _array = new T[_capacity];
//    }
//    Vector(int lenght)
//    {
//        while (_capacity <= lenght)
//            _capacity *= 2;
//        _array = new T[_capacity];
//    }
//
//
//
//    T* getData() const { return _array; }
//    size_t getSize() const { return _size; }
//    size_t getCapacity() const { return _capacity; }
//
//    void setCapacity(int _cap) {
//
//        if (_cap > 15) {
//
//            this->_capacity = _cap;
//        }
//        else
//            assert(!"Capacity defaultdan kicik ola bilmez !");
//    }
//
//
//    Vector& push_back(T item);
//
//
//
//    Vector& push_front(T item)
//    {
//        if (_size < _capacity)
//        {
//            T* temp = new T[_capacity];
//
//            temp[0] = item;
//            _size++;
//            for (size_t i = 0; i < _size; i++)
//                temp[i + 1] = _array[i];
//
//            delete[] _array;
//            _array = temp;
//            return *this;
//        }
//
//        _capacity *= 2;
//        T* temp = new T[_capacity];
//
//        temp[0] = item;
//        _size++;
//        for (size_t i = 0; i < _size; i++)
//            temp[i + 1] = _array[i];
//
//        delete[] _array;
//        _array = temp;
//
//        return *this;
//
//    }
//
//    Vector& pop_back() {
//
//        if (_size == 0) {
//
//            assert(!"Element yoxdur !");
//        }
//
//        _size--;
//        return *this;
//    }
//
//
//    Vector& pop_front() {
//
//        if (_size == 0) {
//
//            assert(!"Element yoxdur !");
//        }
//
//        T* temp = new T[_capacity];
//
//
//        for (size_t i = 1; i < _size; i++)
//        {
//            temp[i - 1] = _array[i];
//        }
//        _size--;
//        delete[]_array;
//        _array = temp;
//
//        return *this;
//
//    }
//
//    void delete_by_index(int index) {
//
//        if (_size == 0) {
//
//            assert(!"Element yoxdur !");
//        }
//
//        T* temp = new T[_capacity];
//
//
//        for (size_t i = 0; i < index; i++)
//        {
//            temp[i] = _array[i];
//        }
//
//        for (size_t i = index; i < _size; i++)
//        {
//            temp[i] = _array[i + 1];
//        }
//
//        _size--;
//        delete[]_array;
//        _array = temp;
//    }
//
//    void operator()()
//    {
//        for (size_t i = 0; i < _size; i++)
//            cout << _array[i] << " ";
//        cout << endl;
//
//    }
//
//
//    void insert_by_index(const size_t index, const T element) {
//
//        if (_size < _capacity)
//        {
//            T* temp = new T[_capacity];
//
//            _size++;
//
//            temp[index] = element;
//            for (size_t i = 0; i < index; i++) {
//
//                temp[i] = _array[i];
//
//            }
//
//            for (size_t i = index + 1; i < _size; i++)
//            {
//                temp[i] = _array[i - 1];
//            }
//
//            delete[] _array;
//            _array = temp;
//            return;
//        }
//
//        _capacity *= 2;
//        T* temp = new T[_capacity];
//
//        _size++;
//
//        temp[index] = element;
//        for (size_t i = 0; i < index; i++) {
//
//            temp[i] = _array[i];
//
//        }
//
//        for (size_t i = index + 1; i < _size; i++)
//        {
//            temp[i] = _array[i - 1];
//        }
//        delete[] _array;
//        _array = temp;
//    }
//
//
//    int find(const T element) {
//
//        for (size_t i = 0; i < _size; i++)
//        {
//            if (_array[i] == element)
//                return i;
//        }
//        return -1;
//    }
//
//    int rfind(const T element) {
//
//        for (size_t i = _size - 1; i >= 0; i--)
//        {
//            if (_array[i] == element)
//                return i;
//        }
//        return -1;
//    }
//
//
//    void sort(bool reverse = false) {
//
//        for (int i = 0; i < _size - 1; i++) {
//            for (int j = i + 1; j < _size; j++) {
//                if ((int(_array[i]) < int(_array[j]) && reverse) || (int(_array[i]) > int(_array[j]) && !reverse)) {
//                    int temp = _array[i];
//                    _array[i] = _array[j];
//                    _array[j] = temp;
//                }
//            }
//        }
//    }
//
//
//    template<typename T>
//    friend ostream& operator<<(ostream& out, Vector<T>& v);
//
//    template<typename T>
//    friend istream& operator>>(istream& out, Vector<T>& v);
//};
//
//template<typename T>
//Vector<T>& Vector<T>::push_back(T item)
//{
//    if (_size < _capacity)
//    {
//        _array[_size] = item;
//        _size++;
//        return *this;
//    }
//    _size++;
//    _capacity *= 2;
//    T* temp = new T[_capacity];
//    for (size_t i = 0; i < _size; i++)
//        temp[i] = _array[i];
//    temp[_size] = item;
//
//    delete[] _array;
//    _array = temp;
//
//    return *this;
//
//}
//
// template<typename T>
// ostream& operator<<(ostream& out, Vector<T>& v)
// {
//     for (size_t i = 0; i < v._size; i++)
//         cout << v._array[i] << " ";
//     cout << endl;
//     return out;
// }
//
//
// template<typename T>
// istream& operator>>(istream& in, Vector<T>& v)
// {
//     delete[] v._array;
//
//     cout << "Capacity daxil edin : ";
//     int _cap;
//     in >> _cap;
//     v.setCapacity(_cap);
//
//     return in;
// }
//
//
//
//int main() {
//
//    Vector<char> list1;
//
//    list1.push_back('1');
//    list1.push_back('2');
//    list1.push_back('3');
//    list1.push_back('4');
//    list1.push_back('5');
//
//    list1.pop_back();
//    cout << list1;
//}