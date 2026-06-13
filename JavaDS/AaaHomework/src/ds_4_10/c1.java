package ds_4_10;

import java.util.ArrayList;
import java.util.List;

public class c1 {
    // 杨辉三角                              5
    public List<List<Integer>> generate(int numRows) {
        if (numRows == 1) {
            List<List<Integer>> ret = new ArrayList<>();
            List<Integer> list = new ArrayList<>();
            list.add(1);
            ret.add(list);
            return ret;
        }
        List<List<Integer>> ret = new ArrayList<>();
        // 第一行特殊化处理
        List<Integer> list0 = new ArrayList<>();
        list0.add(1);
        ret.add(list0);
        // 第二行的两个1也是
        List<Integer> list1 = new ArrayList<>();
        list1.add(1);
        list1.add(1);
        ret.add(list1);
        // 下面的除了第一个和最后一个以外 其他的按规则处理
        for (int i = 2; i < numRows; i++) {
            List<Integer> cur = new ArrayList<>();
            cur.add(1);// 普通行的第一个
            for (int j = 1; j < i; j++) {
                cur.add(ret.get(i - 1).get(j) + ret.get(i - 1).get(j - 1));
            }
            cur.add(1);   // 普通行的最后一个
            ret.add(cur);
        }
        return ret;
    }
}
