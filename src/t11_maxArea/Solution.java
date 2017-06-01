package t11_maxArea;

/**
 * Created by zengq on 2017/5/21.
 */
public class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] arr1 = new int[]{1,1};
        System.out.println(solution.maxArea(arr1));
    }

    /**
     * 使用了贪心算法
     * 结果等于最短底长*最低高度,底长一直缩短,那么只要保证高度一直高就好
     * @param height
     * @return
     */
    public int maxArea(int[] height) {
        int left, right, maxArea;
        left = maxArea = 0;
        right = height.length - 1;
        while (left != (right + 1)) {
            maxArea = Math.max(Math.min(height[right], height[left]) * (right - left), maxArea);
            if (height[right] > height[left]) {
                left ++;
            } else {
                right --;
            }
        }
        return maxArea;
    }
}
