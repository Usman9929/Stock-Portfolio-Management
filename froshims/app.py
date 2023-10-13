from flask import Flask, render_template, request

app = Flask(__name__)

REGISTERANTS = {}

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")
    REGISTERANTS[name] = sport
    return render_template("success.html")

@app.route("/registerants")
def registerants():
    return render_template("registerants.html", registerants=REGISTERANTS)