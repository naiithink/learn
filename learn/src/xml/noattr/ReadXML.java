package xml.noattr;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;
import java.util.Optional;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.xml.sax.SAXException;

public final class ReadXML {

    public static void main(String[] args) {
        // try (InputStream in = Files.newInputStream(Paths.get(System.getProperty("user.dir") + File.separator + "learn/src/xml/person.xml"), StandardOpenOption.READ)) {
        try (InputStream in = Files.newInputStream(Paths.get(System.getProperty("user.dir") + File.separator + "learn/src/xml/home.fxml"), StandardOpenOption.READ)) {

            DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
            DocumentBuilder builder = dbf.newDocumentBuilder();
            Document doc = builder.parse(in);

            Element root = doc.getDocumentElement();

            System.out.println(doc.getXmlVersion());
            System.out.println(root.getAttributes().getNamedItemNS("fx", "controller").getNodeValue());
            // System.out.println(doc.getElementsByTagNameNS("fx", "controller"));
            // System.out.println(root.getAttribute("fx:controllers"));
            // System.out.println(root.getAttributeNS("fx", "controllers"));

            Optional<String> val = Optional.ofNullable(root.getAttribute("fx:controllers"));

            System.out.println(val.get().isBlank());
            System.out.println(val.get().isEmpty());
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ParserConfigurationException e) {
            e.printStackTrace();
        } catch (SAXException e) {
            e.printStackTrace();
        }
    }
}
