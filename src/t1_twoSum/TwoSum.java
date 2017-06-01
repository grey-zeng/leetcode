package t1_twoSum;

import java.util.HashMap;
import java.util.Map;

/**
 * Created by zengq on 2017/5/18.
 */
public class TwoSum {
    public static void main(String[] args) {
        int[] num1 = new int[]{3,2,4};
        TwoSum twoSum = new TwoSum();
        int[] res1 = twoSum.good(num1, 6);
        for(int res: res1) {
            System.out.println(res);
        };
    }

    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> tmpMap = new HashMap<Integer, Integer>();
        for (int index = 0; index < nums.length; index ++) {
            tmpMap.put(nums[index], index);
        }
        int[] res = new int[2];
        for (int index = 0; index < nums.length; index ++) {
            int findValue = target - nums[index];
            if (tmpMap.containsKey(findValue)) {
                int findIndex = tmpMap.get(findValue);
                if (findIndex != index) {
                    res[0] = index;
                    res[1] = findIndex;
                    break;
                }
            }
        }
        return res;
    }

    public int[] good(int[] nums, int target) {
        int[] result = new int[2];
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                result[1] = i;
                result[0] = map.get(target - nums[i]);
                return result;
            }
            map.put(nums[i], i);
        }
        return result;
    }
}
