public class HelloWorld {
    //文件名和最外面的这个类名一致
    /*
          经典多行注释
    */
    //顺带强调一下 多行注释不能嵌套使用
    //单行注释
    //Java的函数叫做方法
    //下面这个叫做文档注释 一般放在方法前面或者类前面来说明
    /**
     * 这是一个 main 方法
     * @param args 参数的说明
     */
    public static void main(String[] args) {
        System.out.println("Hello World");
        System.out.println("你好");
        add();
        //Java标识符 可以有美元符号$ 甚至可以在最前面
        int $a = 1;
        int _a = 2;
        int aa = 3;
        //【硬性规则】
        //标识符中可以包含：字母、数字以及 下划线和 $ 符号等等。
        //注意：标识符不能以数字开头，也不能是关键字，且严格区分大小写。
        //【软性建议】 行业里面可以说是约定熟成的共识了 学校里面甚至会有考题
        //类名：每个单词的首字母大写(大驼峰) HelloWorld
        //方法名：首字母小写，后面每个单词的首字母大写(小驼峰) calcAdd
        //变量名：与方法名规则相同
    }
    //外面那层主类里面可以有多个public声明的方法
    public static void add() {
        System.out.println("good start");
    }
}

/**
 * 下面这个类和主类同级别 不能用 public 修饰
 */
class Mars {
    /*
     * 一些习惯上的改变
     *
     */
}
//在 cmd 中,使用javadoc工具从Java源码中抽离出注释
// -d 创建目录 myHello为目录名
// -author  显示作者
// -version 显示版本号
// -encoding UTF-8 -charset UTF-8 字符集修改为UTF-8
//javadoc -d myHello -author -version -encoding UTF-8 -charset UTF-8 HelloWorld.java