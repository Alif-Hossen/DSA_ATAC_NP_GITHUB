
// SUM OF TWO NUMBERS --> 

        #include<iostream>
        using namespace std;

        double sum( double a, double b ) {
            double sum = a + b;
            return sum;
        }


        // FUNCTION OF TWO NUMBER, WHICH IS SMALLEST.?
        int minOfTwoNumbers ( int a, int b ) {
            if( a < b ) {
                cout << "A Is The Smallest Number.!" ;
            } else { 
                cout << " B Is The Smallest Number.!" ;
            }
        }

        int main() {

            cout << "The Sum Is : " << sum( 10.99, 5.65) << endl;
            minOfTwoNumbers( 30, 653 );

            return 0;
        }



// CALCULATE SUM OF NUMBERS FROM 1 TO N --> 


        #include<iostream>
        using namespace std;

        int sumOfAllNumber( int a, int z ) {
            int sum = 0;
            for ( int i=a; i<= z; i++ ) {
                sum += i;
            }
            return sum;
        }

        int main() {

            int result = sumOfAllNumber( 1, 10 );
            cout << "The Sum Of Numbers From 1 To 10 Is : " << result << endl;

            return 0;
        }



// CALCULATE N FACTORIAL --> 


        #include<iostream>
        using namespace std;

        int calculateFactorial ( int n ) {
            int fact = 1;
            for( int i = 1; i<= n ; i++ ) {
                fact *=i;
            }
            return fact;
        }

        int main() {
            
            int number;
            cout << "Enter A number : ";
            cin >> number;

            int resultFactorial = calculateFactorial ( number );
            cout << "The Factorial Of " << number << " Is : " << resultFactorial << endl;

            return 0;
        }



//  CALCULATE SUM OF DIGITS OD A NUMBER ---> 


        #include<iostream>
        using namespace std;

        int sumOfDigits( int number ) {
            int sum = 0, lastDigit;

            while( number > 0 ) {
                lastDigit = number % 10;
                number = number / 10;
                sum += lastDigit;
            }
            return sum;
        }


        int main() {

            int number;
            cout << "Enter A Number : ";
            cin >> number;

            int result = sumOfDigits( number );
            cout << "The Sum Of Digits Of " << number << " Is : " << result;
            
            return 0;
        }



// CALCULATE nCr BINOMIAL COEFFICIENT FOR n & R --->


        #include<iostream>
        using namespace std;

        int factorial( int x ) {
            int fact = 1;
            for ( int i = 1; i<= x ; i++ ) {
                fact *= i;
            }
            return fact;
        }

        int nCr ( int n, int r ) {
            int fact_n = factorial( n );
            int fact_r = factorial( r );
            int fact_nmr = factorial( n-r );

            int result = fact_n / (fact_r * fact_nmr);
            return result;

        }

        int main() {

            int n, r;
            cout << "Enter N : ";
            cin >> n;

            cout << "Enter R : ";
            cin >> r;

            cout << nCr( n, r ) << endl ;

            return 0;
        }



