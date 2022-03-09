//change the below code
// the function below now only works with OperandTypeegers, change it to work with any type
// also fill out the body

template<class OperandType>
class Calculator {
private:
    OperandType num1, num2;

public:
    Calculator(OperandType n1, OperandType n2) {
        num1 = n1;
        num2 = n2;
    }

    OperandType add(){ return num1 + num2; }
    OperandType subtract() { return num1 - num2; }
    OperandType multiply() { return num1 * num2; }
    OperandType divide() { return num1 / num2; }
};
