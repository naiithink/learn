## **Responsive Design**

**HTML** > **Responsive Design**

----

<br>

<ul>
    <li>viewport</li>
    <li>flexbox</li>
</ul>

<br>

### **viewport**

----

<br>

```html
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>Hello!</title>
        <style>
            @media (min-width: 600px) {
                body {
                    background-color: red;
                }
            }

            @media (max-width: 599px) {
                body {
                    background-color: blue;
                }
            }
        </style>
    </head>
    <body>
        <h1>Hello, World!</h1>
    </body>
</html>
```

