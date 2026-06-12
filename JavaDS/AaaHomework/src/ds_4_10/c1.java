package ds_4_10;

import java.util.ArrayList;
import java.util.List;

public class c1 {
    // 杨辉三角                              5
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ret = new ArrayList<>();
        // 第一行特殊化处理
        List<Integer> list0 = new ArrayList<>();
        list0.add(1);
        ret.add(list0);
        List<Integer> list1 = new ArrayList<>();
        list1.add(1);
        list1.add(1);
        ret.add(list1);
        for(int i = 2;i < numRows;i++) {
            List<Integer> cur = new ArrayList<>();
            for(int j = 1;j <= i;j++) {
                cur.add(ret.);
            }
        }
    }
}
