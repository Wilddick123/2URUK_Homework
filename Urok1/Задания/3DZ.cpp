#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

class Stack {
private:
    int lenth;
    int arr[10];
public:
    void reset() {
        lenth = 0;
        for (int i = 0; i < 10; i++) {
            arr[i] = 0;
        }
    }
    double push(int a) {
        
        if (lenth == 10) {
            return false;
        }
        else {
            arr[lenth] = a;
            lenth++;
            return true;
        }
    }

 int pop() {
     int c = arr[lenth - 1];
        if (lenth == 0) {
            cout << "Ai Ai" << endl;
        }
        else {
         
          
            lenth--;
            arr[lenth] = 0;
            
            
        }
        return c;
    }
    void print() {
        
        cout << "(" << " ";
        for (int i = 0; i < 10; i++) {

            cout << arr[i] << " ";
           
        }
        cout << ")" << endl;
    }
};




int main()
{
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();
    
    stack.pop();
    stack.print();
  

    stack.pop();
    stack.pop();
    stack.print();

   
    return 0;
}