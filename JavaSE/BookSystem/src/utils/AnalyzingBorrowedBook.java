package utils;

import book.PairOfUidAndBookId;
import com.bit.utils.FileUtils;
import constant.Constant;

import java.io.IOException;

//
public class AnalyzingBorrowedBook {
    public PairOfUidAndBookId[] loadObject(String filename) throws IOException {
        String content = FileUtils.readFile(filename);
        if (content == null || content.isEmpty()) { // String 里面是有判空的
            System.out.println("已借阅书籍列表⽆数据，表⽰没有用户借阅过书籍");
            return null;
        }
        String[] JsonStrings = content.split("\n");
        PairOfUidAndBookId[] pairOfUidAndBookIds
                = new
                PairOfUidAndBookId[JsonStrings.length];
        for (int i = 0; i < JsonStrings.length; i++) {
            PairOfUidAndBookId pairOfUidAndBookId = new PairOfUidAndBookId();
            String[] uidAndBookIds = JsonStrings[i].split(",");
            pairOfUidAndBookId.setUid(Integer.parseInt(uidAndBookIds[0]));
            pairOfUidAndBookId.setBookID(Integer.parseInt(uidAndBookIds[1]));
            pairOfUidAndBookIds[i] = pairOfUidAndBookId;
        }
        return pairOfUidAndBookIds;
    }

    public void storeObject(PairOfUidAndBookId[] pairOfUidAndBookIds, String filename) {
        int bookUseLen = 0;
        for (int i = 0; i < pairOfUidAndBookIds.length; i++) {
            if (pairOfUidAndBookIds[i] != null) {
                bookUseLen++;
            }
        }
        StringBuilder jsonArray = new StringBuilder();
        for (int i = 0; i < bookUseLen; i++) {
            if (pairOfUidAndBookIds[i] != null) {
                jsonArray.append(pairOfUidAndBookIds[i].toJson());
                if (i != bookUseLen - 1) {
                    jsonArray.append("\n");
                }
            }
        }
        FileUtils.writeFile(jsonArray.toString(), filename);
    }
}
