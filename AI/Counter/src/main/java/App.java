import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Font;
import javafx.stage.Stage;

public class App extends Application {
    @Override
    public void start(Stage primaryStage) {
        Label label = new Label("0");
        label.setAlignment(Pos.CENTER); // 设置居中
        label.setFont(Font.font(48));

        Button btn1 = new Button("+");
        btn1.setFont(Font.font(20));
        btn1.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent e) {
                int val = Integer.parseInt(label.getText()) + 1;
                label.setText(String.valueOf(val));
            }
        });

        Button btn2 = new Button("-");
        btn2.setFont(Font.font(20));
        btn2.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent e) {
                int val = Integer.parseInt(label.getText()) - 1;
                label.setText(String.valueOf(val));
            }
        });
        // VBox 和 HBox 用户看不到
        HBox hbox = new HBox(10, btn1, btn2);    // 能够水平排列元素
        hbox.setAlignment(Pos.CENTER);

        VBox root = new VBox(20, label, hbox);   // 能够竖直排列元素
        root.setAlignment(Pos.CENTER);

        Scene scene = new Scene(root, 500, 500);
        primaryStage.setTitle("counter");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
