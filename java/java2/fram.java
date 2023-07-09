import java.awt.*;
import java.awt.event.*;

public class fram implements ActionListener
{
    Label x=new Label();
    TextField t1= new TextField();
    TextField t2= new TextField(); 
    public void actionPerformed(ActionEvent a)
    {
        int p = Integer.parseInt(t1.getText());
        int q = Integer.parseInt(t2.getText());
        x.setText("Sum   "+ (p+q));
    }
    fram() {
        Frame f = new Frame();
        Button b = new Button("add");
        b.setBounds(300, 100, 50, 50);
        x.setBounds(400,100,200,100);
        t1.setBounds(100,100,80,20);
        t2.setBounds(200,100,80,20);
        b.addActionListener(this);
        f.add(b);
        f.add(x);
        f.add(t1);
        f.add(t2);
        f.setSize(500, 500);
        f.setLayout(null);
        f.setVisible(true);
    }
    
    public static void main(String[] args) {
        fram i = new fram();
    }
}
