package t4_median2Array;

/**
 * Created by zengq on 2017/5/21.
 */
public class Solution {
    public static void main(String[] args) {
        int[] arr1_1 = new int[]{1, 3};
        int[] arr1_2 = new int[]{2};

        int[] arr2_1 = new int[]{1, 2};
        int[] arr2_2 = new int[]{3, 4};

        Solution solution = new Solution();

        System.out.println(solution.findMedianSortedArrays(arr1_1, arr1_2));
        System.out.println(solution.findMedianSortedArrays(arr2_1, arr2_2));
    }

    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] combineArr = new int[nums1.length + nums2.length];
        int index, index1, index2;
        index = index1 = index2 = 0;
        while (index < combineArr.length) {
            if (index1 < nums1.length && index2 < nums2.length) {
                if (nums1[index1] < nums2[index2]) {
                    combineArr[index] = nums1[index1 ++];
                } else {
                    combineArr[index] = nums2[index2 ++];
                }
            } else {
                if (index1 < nums1.length) {
                    combineArr[index] = nums1[index1 ++];
                }
                if (index2 < nums2.length) {
                    combineArr[index] = nums2[index2 ++];
                }
            }
            index ++;
        }

        if (combineArr.length % 2 == 1) {
            return combineArr[(combineArr.length - 1) / 2];
        } else {
            int midIndex = combineArr.length / 2;
            return (combineArr[midIndex - 1] + combineArr[midIndex]) / 2.0;
        }
    }
}
