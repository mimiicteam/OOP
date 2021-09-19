//
//
// Iterators: Trình lặp lại

// 1.begin() - Trả về một trình lặp trỏ đến phần tử đầu tiên trong vectơ.
// 2.end() - Trả về một trình lặp trỏ đến phần tử lý thuyết theo sau phần tử cuối cùng trong vectơ.
// 3.rbegin() - Trả về một trình lặp ngược trỏ đến phần tử cuối cùng trong vectơ (đầu ngược). Nó di chuyển từ phần tử cuối cùng đến phần tử đầu tiên.
// 4.rend() - Trả về một trình lặp ngược trỏ đến phần tử lý thuyết đứng trước phần tử đầu tiên trong vectơ (được coi là kết thúc ngược).
// 5.cbegin() - Trả về một trình lặp hằng trỏ đến phần tử đầu tiên trong vectơ.
// 6.cend() - Trả về một trình lặp hằng trỏ đến phần tử lý thuyết theo sau phần tử cuối cùng trong vectơ.
// 7.crbegin() - Trả về một trình lặp ngược liên tục trỏ đến phần tử cuối cùng trong vectơ (đầu ngược). Nó di chuyển từ phần tử cuối cùng đến phần tử đầu tiên.
// 8.crend() - Trả về một trình lặp đảo ngược không đổi trỏ đến phần tử lý thuyết đứng trước phần tử đầu tiên trong vectơ (được coi là kết thúc ngược).

// C++ program to illustrate the
// iterators in vector

// CODE

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> g1;

//     for (int i = 1; i <= 5; i++)
//         g1.push_back(i);

//     cout << "Output of begin and end: ";
//     for (auto i = g1.begin(); i != g1.end(); ++i)
//         cout << *i << " ";

//     cout << "\nOutput of cbegin and cend: ";
//     for (auto i = g1.cbegin(); i != g1.cend(); ++i)
//         cout << *i << " ";

//     cout << "\nOutput of rbegin and rend: ";
//     for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
//         cout << *ir << " ";

//     cout << "\nOutput of crbegin and crend : ";
//     for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
//         cout << *ir << " ";

//     return 0;
// }

// OUTPUT

// Output of begin and end: 1 2 3 4 5
// Output of cbegin and cend: 1 2 3 4 5
// Output of rbegin and rend: 5 4 3 2 1
// Output of crbegin and crend : 5 4 3 2 1

// =======================================================================================================================================

// Capacity: Sức chứa

// 1.size() - Trả về số phần tử trong vectơ.
// 2.max_size() - Trả về số phần tử tối đa mà vectơ có thể chứa.
// 3.capacity() - Trả về kích thước của không gian lưu trữ hiện được phân bổ cho vectơ được biểu thị bằng số phần tử.
// 4.resize(n) - Thay đổi kích thước vùng chứa để nó chứa các phần tử ‘n’
// 5.empty() - Trả về liệu vùng chứa có trống không
// 6.shrink_to_fit() - Giảm dung lượng của vùng chứa để phù hợp với kích thước của nó và phá hủy tất cả các phần tử vượt quá dung lượng.
// 7.reserve() - Yêu cầu vectơ công suất ít nhất đủ để chứa n phần tử.

// C++ program to illustrate the
// capacity function in vector

// CODE

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> g1;

//     for (int i = 1; i <= 5; i++)
//         g1.push_back(i);

//     cout << "Size : " << g1.size();
//     cout << "\nCapacity : " << g1.capacity();
//     cout << "\nMax_Size : " << g1.max_size();

//     // Thay đổi kích thước kích thước vectơ thành 4
//     g1.resize(4);

//     // In kích thước vectơ sau khi thay đổi kích thước ()
//     cout << "\nSize : " << g1.size();

//     // kiểm tra nếu vectơ trống hay không
//     if (g1.empty() == false)
//         cout << "\nVector is not empty";
//     else
//         cout << "\nVector is empty";

//     // Co lại vector.
//     g1.shrink_to_fit();
//     cout << "\nVector elements are: ";
//     for (auto it = g1.begin(); it != g1.end(); it++)
//         cout << *it << " ";

//     return 0;
// }

// OUTPUT

// Size : 5
// Capacity : 8
// Max_Size : 4611686018427387903
// Size : 4
// Vector is not empty
// Vector elements are: 1 2 3 4

// =======================================================================================================================================

// Element access: Quyền truy cập phần tử.

// 1.reference operator[g] - Trả về một tham chiếu đến phần tử ở vị trí ‘g 'trong vectơ.
// 2.at(g) - Trả về một tham chiếu đến phần tử ở vị trí ‘g 'trong vectơ.
// 3.front() - Trả về một tham chiếu đến phần tử đầu tiên trong vectơ
// 4.back() - Trả về một tham chiếu đến phần tử cuối cùng trong vectơ
// 5.data() - Trả về một con trỏ trực tiếp đến mảng bộ nhớ được vector sử dụng bên trong để lưu trữ các phần tử thuộc sở hữu của nó.

// C++ program to illustrate the
// element accesser in vector

// CODE

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10); // 10 20 30 40 50 60 70 80 90 100

    cout << "\nReference operator [g] : g1[2] = " << g1[2]; // g1[2] = 30

    cout << "\nat : g1.at(4) = " << g1.at(4); // g1.at(4) = 50

    cout << "\nfront() : g1.front() = " << g1.front(); // g1.front() = 10

    cout << "\nback() : g1.back() = " << g1.back(); // g1.back() = 100

    // con trỏ đến yếu tố đầu tiên
    int *pos = g1.data();

    cout << "\nThe first element is " << *pos; // g1.data() = 10
    return 0;
}

// OUTPUT:

// Reference operator [g] : g1[2] = 30
// at : g1.at(4) = 50
// front() : g1.front() = 10
// back() : g1.back() = 100
// The first element is 10

// =======================================================================================================================================

// Modifiers:

// 1.assign() - Nó chỉ định giá trị mới cho các phần tử vectơ bằng cách thay thế các giá trị cũ
// 2.push_back() - Nó đẩy các phần tử vào một vector từ phía sau
// 3.pop_back() - Nó được sử dụng để bật hoặc xóa các phần tử khỏi một vectơ từ phía sau.
// 4.insert() - Nó chèn các phần tử mới trước phần tử ở vị trí được chỉ định
// 5.erase() - Nó được sử dụng để xóa các phần tử khỏi vùng chứa khỏi vị trí hoặc phạm vi được chỉ định.
// 6.swap() - Nó được sử dụng để trao đổi nội dung của một vectơ này với một vectơ khác cùng loại. Kích thước có thể khác nhau.
// 7.clear() - Nó được sử dụng để loại bỏ tất cả các phần tử của vùng chứa vector
// 8.emplace() - Nó mở rộng vùng chứa bằng cách chèn phần tử mới vào vị trí
// 9.emplace_back() - Nó được sử dụng để chèn một phần tử mới vào vùng chứa vectơ, phần tử mới được thêm vào cuối vectơ

// C++ program to illustrate the
// Modifiers in vector

// CODE

// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     // Assign vector
//     vector<int> v;

//     // fill the array with 10 five times
//     v.assign(5, 10);

//     cout << "The vector elements are: ";
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << " ";

//     // inserts 15 to the last position
//     v.push_back(15);
//     int n = v.size();
//     cout << "\nThe last element is: " << v[n - 1];

//     // removes last element
//     v.pop_back();

//     // prints the vector
//     cout << "\nThe vector elements are: ";
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << " ";

//     // inserts 5 at the beginning
//     v.insert(v.begin(), 5);

//     cout << "\nThe first element is: " << v[0];

//     // removes the first element
//     v.erase(v.begin());

//     cout << "\nThe first element is: " << v[0];

//     // inserts at the beginning
//     v.emplace(v.begin(), 5);
//     cout << "\nThe first element is: " << v[0];

//     // Inserts 20 at the end
//     v.emplace_back(20);
//     n = v.size();
//     cout << "\nThe last element is: " << v[n - 1];

//     // erases the vector
//     v.clear();
//     cout << "\nVector size after erase(): " << v.size();

//     // two vector to perform swap
//     vector<int> v1, v2;
//     v1.push_back(1);
//     v1.push_back(2);
//     v2.push_back(3);
//     v2.push_back(4);

//     cout << "\n\nVector 1: ";
//     for (int i = 0; i < v1.size(); i++)
//         cout << v1[i] << " ";

//     cout << "\nVector 2: ";
//     for (int i = 0; i < v2.size(); i++)
//         cout << v2[i] << " ";

//     // Swaps v1 and v2
//     v1.swap(v2);

//     cout << "\nAfter Swap \nVector 1: ";
//     for (int i = 0; i < v1.size(); i++)
//         cout << v1[i] << " ";

//     cout << "\nVector 2: ";
//     for (int i = 0; i < v2.size(); i++)
//         cout << v2[i] << " ";
// }

// OUTPUT

// The vector elements are: 10 10 10 10 10
// The last element is: 15
// The vector elements are: 10 10 10 10 10
// The first element is: 5
// The first element is: 10
// The first element is: 5
// The last element is: 20
// Vector size after erase(): 0

// Vector 1: 1 2
// Vector 2: 3 4
// After Swap
// Vector 1: 3 4
// Vector 2: 1 2