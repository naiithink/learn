<head>
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Ubuntu">
</head>

<style>
    .flowchart-arrow {
        text-align: center;
        font-weight: bold;
    }

    h1, h2, h3, h4, p, li {
        font-family: Ubuntu, Inter, "Noto Sans Thai Looped";
    }

    code {
        font-family: "Ubuntu Mono", Menlo;
    }

    th, tr {
        font-family: Ubuntu;
        text-align: left;
        vertical-align: top;
    }
</style>

## **SQL**

<br>

[//]: <> (html: breadcrumb here)

Sources:
- CS50's Web Programming with Python and JavaScript

<br>
<br>

### **Database**

----

`Table` is one of the way to represent a bunch of related data.

<table>
    <tr>
        <th>origin</th>
        <th>destination</th>
        <th>duration</th>
    </tr>
    <tr>
        <td>New York</td>
        <td>London</td>
        <td>415</td>
    </tr>
    <tr>
        <td>Shanghai</td>
        <td>Paris</td>
        <td>760</td>
    </tr>
    <tr>
        <td>Istanbul</td>
        <td>Tokyo</td>
        <td>700</td>
    </tr>
    <tr>
        <td>New York</td>
        <td>Paris</td>
        <td>435</td>
    </tr>
    <tr>
        <td>Moscow</td>
        <td>Paris</td>
        <td>245</td>
    </tr>
    <tr>
        <td>Lima</td>
        <td>New York</td>
        <td>455</td>
    </tr>
</table>

<br>

### **SQL**

----

A database language designed with the ability to interact with rational database management system.

<br>

**Database Management Systems**

- MySQL
- PostgreSQL
- SQLite
- ...

<br>

**SQLite Types**

- `TEXT`
- `NUMERIC` (i.e., number-like) &#8212; e.g., Boolean value, Date
- `INTEGER`
- `REAL`
- `BLOB` &#8212; Binary Large Object

<br>

**MySQL Types**

- `CHAR(size)` &#8212; knowing **the certain** data size &#8212; e.g. U.S. zipcode (5 chars)
- `VARCHAR(size)` &#8212; limit the size of the text &#8212; **'Up to'**
- `SMALLINT`
- `INT`
- `BIGINT`
- `FLOAT`
- `DOUBLE`
- ...

<br>

### **Creating a Table**

----

Designing the structure of the table

<br>

For example,

```sql
CREATE TABLE flights (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    origin TEXT NOT NULL,                           /* Col 1 */
    destination TEXT NOT NULL,                      /* Col 2 */
    duration INTEGER NOT NULL                       /* Col 3 */
);
```

<div class="flowchart-arrow">&#8595;</div>

<table>
    <tr>
        <th>Keyword</th>
        <th>Description</th>
    </tr>
    <tr>
        <td><code>CREATE TABLE</code></td>
        <td>Create a new table inside of a database and give the table name.</td>
    </tr>
    <tr>
        <td><code>PRIMARY KEY</code></td>
        <td>Primary way to identify a uniquely element.</td>
    </tr>
    <tr>
        <td><code>NOT NULL</code></td>
        <td>Do not allow for a particular column to be empty.</td>
    </tr>
    <tr>
        <td><code>AUTOINCREMENT</code></td>
        <td>A cue into SQL to automatically update the <code>PRIMARY KEY</code> every time a new row was added to the table.</td>
    </tr>
</table>

<br>

```sql
CREATE TABLE `tableNAME` (

    /* comma-separated list */

);
```

<br>

----

<br>

#### **Constraints**

- `CHECK`
- `DEFAULT`
- `NOT NULL`
- `PRIMARY KEY`
- `UNIQUE`
- ...

<br>

```sql
... (

    id INTEGER PRIMARY KEY AUTOCREMENT,

    /* column 0 */ ,
    /* column 1 */ ,
    /* column 2 */ ,
    ...

);
```

<br>

```sql
... (
    ...,

    col0 `DataType`
    `nameOfCol1` `DataType`
    `nameOfCol2` `DataType`

);
```

<br>

<p>ทดสอบ</p>