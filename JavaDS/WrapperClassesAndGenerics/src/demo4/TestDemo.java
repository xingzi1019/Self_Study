package demo4;

class Food {
}

class Fruit extends Food {
}

class Apple extends Fruit {
}

class Banana extends Fruit {
}

class Plate<T> { // 设置泛型
    private T data;

    public T getData() {
        return data;
    }

    public void setData(T data) {
        this.data = data;
    }
}

public class TestDemo {
    // 其实感觉 extends 和 super 作为这里的关键字是很好理解的

    // 通配符 下界 super
    public static void func2(Plate<? super Fruit> plate) {
        System.out.println(plate.getData());
        plate.setData(new Apple());
        plate.setData(new Banana());
        Fruit fruit = (Fruit) plate.getData();
    }

    // 通配符 上界 extend
    public static void func(Plate<? extends Fruit> plate) {
        System.out.println(plate.getData());
        // plate.setData(new Apple()); // error
        // 报错的原因: 你不能保证传进来的是 Fruit 类或其子类 所以 上下注释的代码都是有错的
        //             也不清楚是哪个子类所以一定会报错
        // plate.setData(new Fruit());
    }

    public static void main(String[] args) {
        Plate<Apple> plate1 = new Plate<>();
        plate1.setData(new Apple());
        Plate<Banana> plate2 = new Plate<>();
        plate2.setData(new Banana());
        func(plate1);
        func(plate2);
        Plate<Food> plate3 = new Plate<>();
        // func(plate3); // ERROR 得是 Fruit 类及其子类
    }

}
// 通配符的上界