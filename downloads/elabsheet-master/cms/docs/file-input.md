File Input
----------

It is possible to create a task that takes a file as submission input in addition to
text.  To do so, place an HTML input element with the type of
<tt>file</tt> in the task's markdown source.

<pre>
&lt;input type="file" name="f1"&gt;
</pre>

The submitted file's content will be <u>saved as an answer to the first blank</u>.
Therefore, submitting a file or pasting its content in the first blank are
technically identical.  If the first blank is intended for something else,
make a dummy blank at the beginning of the task and set its hidden flag to True.

<pre>
::elab:begincode hidden=True,blank=True
This blank will be filled with submitted file's content.
::elab:endcode
</pre>

Multiple file input tags are allowed.  All files' contents will be sorted by
their *name* attributes, then combined into a single text answer.
