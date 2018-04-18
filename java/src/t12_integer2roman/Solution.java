package t12_integer2roman;

/**
 * Created by zengq on 2017/5/21.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println("6:\t" + solution.intToRoman(6));
        System.out.println("9:\t" + solution.intToRoman(9));
        System.out.println("11:\t" + solution.intToRoman(11));
        System.out.println("18:\t" + solution.intToRoman(18));
        System.out.println("30:\t" + solution.intToRoman(30));
        System.out.println("40:\t" + solution.intToRoman(40));
        System.out.println("101:\t" + solution.intToRoman(101));
        System.out.println("900:\t" + solution.intToRoman(900));
        System.out.println("1884:\t" + solution.intToRoman(1884));
        System.out.println("3900:\t" + solution.intToRoman(3900));
    }

    /**
     I = 1;
     V = 5;
     X = 10;
     L = 50;
     C = 100;
     D = 500;
     M = 1000;
     左加右减,只能用IXCM来进行减法操作,还不能越位置
     同一数码只能连续出现3次,比如使用40要用XL
     */

    /**
     * 将数字转换为字符串表示的罗马数字
     * 最大为3999
     * @param num
     * @return
     */
    public String intToRoman(int num) {
        StringBuffer sb = new StringBuffer();
        int thousand = num / 1000;
        while (thousand -- > 0) {
            sb.append('M');
        }
        num = num % 1000;
        if (num >= 900 ) {
            sb.append('C');
            sb.append('M');
            num -= 900;
        }
        if (num >= 500) {
            sb.append('D');
            num -= 500;
        }
        if (num >= 400) {
            sb.append('C');
            sb.append('D');
            num -= 400;
        }
        int hundred = num / 100;
        while (hundred -- > 0) {
            sb.append('C');
        }
        num = num % 100;
        if (num >= 90) {
            sb.append('X');
            sb.append('C');
            num -= 90;
        }
        if (num >= 50) {
            sb.append('L');
            num -= 50;
        }
        if (num >= 40) {
            sb.append('X');
            sb.append('L');
            num -= 40;
        }
        int ten = num / 10;
        while (ten -- > 0) {
            sb.append('X');
        }
        num = num % 10;
        if (num >= 9) {
            sb.append('I');
            sb.append('X');
            num -= 9;
        }
        if (num >= 5) {
            sb.append('V');
            num -= 5;
        }
        if (num >= 4) {
            sb.append('I');
            sb.append('V');
            num -= 4;
        }
        while (num -- > 0) {
            sb.append('I');
        }
        return sb.toString();
    }

    /**
     * leetcode上有更加直接的查表法,每位数都可以使用唯一确定的罗马数字来确定
     * @param num
     * @return
     */
    public String good(int num) {
        StringBuffer sb = new StringBuffer();
        String[] symbol = new String[]{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int[] value     =    new int[]{1000, 900, 500,  400, 100,  90,   50,   40,  10,   9,   5,   4,    1};
        for (int i = 0; num > 0; i ++) {
            while(num >= value[i]) {
                num -= value[i];
                sb.append(symbol[i]);
            }
        }
        return sb.toString();
    }
}
