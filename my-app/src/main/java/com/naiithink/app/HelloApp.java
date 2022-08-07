package com.naiithink.app;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class HelloApp extends Application {
    public static void main(String[] args) {
        launch(args);
    }

    public void start(Stage stage) {
        Circle circ = new Circle(40, 40, 30);
        Group root = new Group(circ);
        Scene scene = new Scene(root, 800, 600);

        stage.setTitle("hello, world");
        stage.setScene(scene);
        stage.show();
    }
}
