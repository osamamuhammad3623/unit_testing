package Main_Package;

import org.junit.Test;

import static org.junit.Assert.*;

public class CalculatorTest {

    @Test
    public void sum_positive_values() {
        int v1 = 15;
        int v2 = 20;
        int expected_result = v1+v2;
        assertEquals(Calculator.sum(v1,v2), expected_result);
    }

    @Test
    public void sum_negative_values() {
        int v1 = -15;
        int v2 = -20;
        int expected_result = v1+v2;
        assertEquals(Calculator.sum(v1,v2), expected_result);
    }

    @Test
    public void sum_positive_and_negative_values() {
        int v1 = 15;
        int v2 = -20;
        int expected_result = v1+v2;
        assertEquals(Calculator.sum(v1,v2), expected_result);
    }

    @Test
    public void sum_with_zero() {
        int v1 = 15;
        int expected_result = v1;
        assertEquals(Calculator.sum(v1,0), expected_result);
    }

    @Test
    public void subtract_positive_values() {
        int v1 = 15;
        int v2 = 20;
        int expected_result = v1-v2;
        assertEquals(Calculator.subtract(v1,v2), expected_result);
    }

    @Test
    public void subtract_negative_values() {
        int v1 = -15;
        int v2 = -20;
        int expected_result = v1-v2;
        assertEquals(Calculator.subtract(v1,v2), expected_result);
    }

    @Test
    public void subtract_positive_and_negative_values() {
        int v1 = 15;
        int v2 = -20;
        int expected_result = v1-v2;
        assertEquals(Calculator.subtract(v1,v2), expected_result);
    }

    @Test
    public void divide_positive_values() {
        int v1 = 15;
        int v2 = 20;
        int expected_result = v1/v2;
        assertEquals(Calculator.divide(v1,v2), expected_result);
    }

    @Test
    public void divide_negative_values() {
        int v1 = -15;
        int v2 = -20;
        int expected_result = v1/v2;
        assertEquals(Calculator.divide(v1,v2), expected_result);
    }

    @Test
    public void divide_positive_and_negative_values() {
        int v1 = 15;
        int v2 = -20;
        int expected_result = v1/v2;
        assertEquals(Calculator.divide(v1,v2), expected_result);
    }

    @Test
    public void divide_by_zero(){
        int v1 = 15;
        assertEquals(Calculator.divide(v1,0), 0);
    }

    @Test
    public void multiply_positive_values() {
        int v1 = 15;
        int v2 = 20;
        int expected_result = v1*v2;
        assertEquals(Calculator.multiply(v1,v2), expected_result);
    }

    @Test
    public void multiply_negative_values() {
        int v1 = -15;
        int v2 = -20;
        int expected_result = v1*v2;
        assertEquals(Calculator.multiply(v1,v2), expected_result);
    }

    @Test
    public void multiply_positive_and_negative_values() {
        int v1 = 15;
        int v2 = -20;
        int expected_result = v1*v2;
        assertEquals(Calculator.multiply(v1,v2), expected_result);
    }
}