class Solution {
    public int calculate(String s) {
        Stack<Integer> st = new Stack<>();
        int n = s.length();
        long number = 0;
        int result = 0;
        int sign = 1;
        for (int i = 0; i < n; i++) {
            char ch = s.charAt(i);
            if (Character.isDigit(ch)) {
                number = number * 10 + (ch - '0');
            } else if (ch == '+') {
                result += (number * sign);
                number = 0;
                sign = 1;
            } else if (ch == '-') {
                result += (number * sign);
                number = 0;
                sign = -1;
            } else if (ch == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                number = 0;
                sign = 1;

            } else if (ch == ')') {
                result += number * sign;
                number = 0;
                int last_sign = st.peek();
                st.pop();
                int last_result = st.peek();
                st.pop();
                result = last_result + (result * last_sign);
            }
        }
        result += number * sign;
        return result;
    }
}