package demoproxy;
// 代理模式
// 分三种:
// 1.静态代理
// 2.动态代理
// 3.CGLIB代理
public class Test {
    public static void main() { // 涉及继承 多态 抽象类等知识
        // 静态代理
        Proxy reader = new Proxy( new Reader("千咲",18));
        Proxy manager = new Proxy(new Manager("莫宁",26));
        reader.show();
        reader.addBooks();
        reader.borrowBooks();

        manager.show();
        manager.addBooks();
        manager.borrowBooks();
    }
}
// 1. 抽象主题类【业务接⼝类】：通过接⼝或者抽象类声明真实主题和代理对象实现的业务⽅法
// 2. 真实主题类【业务实现类】：实现抽象主题重点具体业务，是代理对象所代表的正式对象，也是最终需要引⽤的对象
// 3. 代理类：提供与真实主题相同的接⼝，其内部含有对真实主题的引⽤，他可以访问、控制或扩展真实主题的功能
