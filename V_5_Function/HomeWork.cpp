// WRITE A FUNCTION TO CHECK IF A NUMBER IS PRIME OR NOT ---> 


            #include<iostream>
            using namespace std;

            bool getPrime ( int number ) {
                if ( number <= 1 ) {
                    return false;
                }

                if( number == 2 ) {
                    return true;
                }

                for ( int i = 2; i * i <= number; i++) {
                    if( number % i == 0 ) {
                        return false;
                    }
                }
                return true;
            }

            int main() {
                
                int number;
                cout << "Enter A Number : " ;
                cin >> number ;

                if( getPrime ( number ) ) {
                    cout << "This Is A Prime Number.!" ;
                } else {
                    cout << " This Is Not A Prime Number.!" ;
                }

                return 0;
            }



// WRITE A FUNCTION TO PRINT ALL PRIME NUMBERS FROM 2 TO N ---> 



            #include<iostream>
            using namespace std;

            bool isPrime ( int n ) {

                if ( n <= 1 ) {
                    return false;
                }

                for ( int i = 2; i*i <= n; i++) {

                    if( n % i == 0 ) {
                        return false;
                    }
                }
                return true;
            }

            void printPrimeNumbers( int n ) {

                for ( int i = 2; i <= n; i++) {
                    if ( isPrime( i )) {
                        cout << i << " ";
                    }
                }
            }

            int main() {

                int number;
                cout << "Enter A Number : " ;
                cin >> number ;

                cout << "Prime Numbers Are : - ";
                printPrimeNumbers( number ) ;

                return 0;
            }



//  WAF TO PRINT NTH FIBONACCI NUMBER ->    



            #include<iostream>
            using namespace std;

            int getFibonacci( int n ) {

                int first = 0, second = 1, next;

                for ( int i = 2; i <= n; i++ ) {
                    next = first + second;
                    first = second;
                    second = next;
                }

                return second;
            }


            int main() {

                int number;
                cout << "Enter The Number : ";
                cin >> number;

                cout << getFibonacci ( number );

                return 0;
            }




// WRITE A FUNCTION TO PRINT A YEAR IS LEAP YEAR OR NOT --> 


            #include<iostream>
            using namespace std;

            bool getLeapYear( int y ) {
                if ( ( y % 4 == 0  &&   y % 100 != 0   ) || ( y % 400 == 0) ) {
                    return true;
                }
                return false;
            }

            int main() {

                int year;
                cout << "Enter A Year : " ;
                cin >> year;

                if ( getLeapYear( year ) ) {
                    cout << "This Is A Leap Year.!";
                } else {
                    cout << "This Is Not A Leap Year.!";
                }

                return 0;
            }




