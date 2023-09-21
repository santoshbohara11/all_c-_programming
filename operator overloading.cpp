
#include <iostream>
using namespace std;

class kist {
   private:
    int a;
    int b;
   public:

    // Constructor to initialize count to 5
    kist()
	{
		a=10;
		b=20;
	}

    // Overload ++ when used as prefix
    void operator ++ () 
	{
        a=a+5;
        b=b-10;
    }

    void display() {
        cout << "value of a "<< a <<endl;
    	cout << "value of b "<< b <<endl;
	}
};

int main() {
    kist obj1;
    

    // Call the "void operator ++ ()" function
    ++obj1;
    //cout<<a<<endl;

    obj1.display();
    return 0;
}
