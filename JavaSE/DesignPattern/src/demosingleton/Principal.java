package demosingleton;

public class Principal {
    private static Principal principal;
    public String name;

    private Principal(String name) {
        this.name = name;
    }

    public static Principal getPrincipal() {
        if (principal == null) {
            principal = new Principal("人名的郝校长");
        }
        return principal;
    }

    // 校长的一些行为
    public void announcement(String message) {
        System.out.println(name + "通知：" + message);
    }

    public void approveDocument(String file) {
        System.out.println(name + "审批通过：" + file);
    }
}
