from flask import Flask, render_template, request

# Tells Python to turn this file into a Flask app
app = Flask(__name__)

# Defines a route for "/"
"""
@app.route("/")
def index():
    return render_template("index.html")
"""

@app.route("/")
def index():
    name = request.args.get("name")
    return render_template("index.html", name=name)
