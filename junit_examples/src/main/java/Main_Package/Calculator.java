package Main_Package;

public class Calculator {

    public static int sum(int a, int b){
        return a+b;
    }

    public static int subtract(int a, int b){
        return a-b;
    }

    public static int divide(int a, int b){
        int result = 0;
        if(b != 0){
            result = a/b;
        }

        return result;
    }

    public static int multiply(int a, int b){
        return a*b;
    }
}
