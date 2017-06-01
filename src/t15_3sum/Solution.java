package t15_3sum;

import javafx.collections.transformation.SortedList;

import java.util.*;

/**
 * Created by zengq on 2017/5/24.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] nums = new int[]{-1, 0, 1, 2, -1, -4};
        List<List<Integer>> res = solution.threeSum(nums);
        for (List<Integer> item: res) {
            System.out.println(item);
        }
    }

    public List<List<Integer>> threeSum(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
//        Arrays.sort(nums);
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], i);
        }

        List<List<Integer>> result = new LinkedList<List<Integer>>();
        for (int firstIndex = 0; firstIndex < nums.length; firstIndex ++) {
            for (int secondIndex = firstIndex + 1; secondIndex < nums.length; secondIndex ++) {
                if (map.containsKey(- (nums[firstIndex] + nums[secondIndex]))) {
                    int threeIndex = map.get(- (nums[firstIndex] + nums[secondIndex]));
                    if (threeIndex > secondIndex) {
                        int[] tmpArr = new int[]{nums[firstIndex], nums[secondIndex], nums[threeIndex]};
                        Arrays.sort(tmpArr);
                        List<Integer> tmp = new LinkedList<>();
                        for (int num: tmpArr) {
                            tmp.add(num);
                        }
                        if (!result.contains(tmp)) {
                            result.add(tmp);
                        }
                    }
                }
            }
        }
        return result;
    }

    public List<List<Integer>> good(int[] num) {
        Arrays.sort(num);
        List<List<Integer>> res = new LinkedList<>();
        for (int i = 0; i < num.length-2; i++) {
            // 排除重复项
            if (i == 0 || (i > 0 && num[i] != num[i-1])) {
                int lo = i+1, hi = num.length-1, sum = 0 - num[i];
                // 使用二分查找
                while (lo < hi) {
                    if (num[lo] + num[hi] == sum) {
                        res.add(Arrays.asList(num[i], num[lo], num[hi]));
                        // 排除重复项
                        while (lo < hi && num[lo] == num[lo+1]) lo++;
                        while (lo < hi && num[hi] == num[hi-1]) hi--;
                        lo++; hi--;
                    } else if (num[lo] + num[hi] < sum) lo++;
                    else hi--;
                }
            }
        }
        return res;
    }
}
