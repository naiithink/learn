# CSS

https://developer.mozilla.org/en-US/docs/Web/CSS/

## Declarations

```
PROPERTY : VALUE
```

- Both properties and values are case-insensitive by default in CSS.

## Blocks

```
{
    DECLARATION1 ;
    DECLARATION2 ;
    ...
    DECLARATIONn [;]
}
```

- A declaration block may be empty, that is containing null declaration.
- The last declaration of a block doesn't need to be terminated by a semi-colon
    (considered not a good style).

## Statements

Rulesets are the main building blocks of a style sheet.  
There are two kinds of statements:

- Rulesets
- At-rules

### Rulesets

```
SELECTOR1, SELECTOR2 ... {
    DECLARATIONS
}
```

### At-rules

#### General structure

```
@IDENTIFIER (RULE);
```

#### Nested

```
@IDENTIFIER (RULE) {
    STATEMENTS
}
```

---

- `@` U+0040 COMMERCIAL AT
- `{` U+007B LEFT CURLY BRACKET
- `}` U+007D RIGHT CURLY BRACKET
