// GLOBAL -->

    #include <iostream>
    using namespace std;

    int x = 10;    // DECLARE OUTSIDE MAIN FUNCTION.!

    int fun () {
        cout <<"X from function :" << x << endl;
    }

    int main() {

        cout << x << endl;
        fun();

        return 0;
    }


// LOCAL --> 

    // #include <iostream>
    // using namespace std;

    // int fun () {
    //     cout << x;  // error -> x is not define in the scope.!
    // }

    // int main () {

    //    int x = 5;
    //     fun();

    // }