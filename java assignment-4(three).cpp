import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class TextDisplayApp extends Application {

    @Override
    public void start(Stage primaryStage) {
        TextField textField = new TextField();
        Button button = new Button("Display Text");
        Label label = new Label();

        button.setOnAction(event -> {
            String inputText = textField.getText();
            label.setText(inputText);
        });

        VBox vbox = new VBox(10); // 10 is the spacing between components
        vbox.getChildren().addAll(textField, button, label);

        Scene scene = new Scene(vbox, 300, 200);
        primaryStage.setScene(scene);
        primaryStage.setTitle("Text Display Application");
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}

