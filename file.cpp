    // #include <iostream>
    // #include <string>

    // using namespace std;

    // int main()
    // {
    //     vector<int> vec;

    //     for (int i = 1; i <= 30; i = i * 3)
    //         vec.push_back(i);

    //     cout << "Output with vec.begin() and vec.end(): ";
    //     for (auto i = vec.begin(); i != vec.end(); i++)
    //         cout << *i << " ";

    //     cout << "\nOutput with vec.rbegin() and vec.rend(): ";
    //     for (auto ir = vec.rbegin(); ir != vec.rend(); ir++)
    //         cout << *ir << " ";

    //     return 0;
    // }

// void f3() {
// 	int *c = new int[100]; // will be leak
// 	std::string s = "this is stack... would be destroyed";
// 	throw "exception!";
// }

// void f2() { f3(); }

// void f1() { try { f2(); } catch (...) { std::cout << "back to here!\n"; } }

// int main()
// {
//     f1();
//     system("leaks a.out");
// }