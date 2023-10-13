from flask import Flask, render_template, request

app = Flask(__name__)

registerants = {}

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/register", methods=["POST"])
def register():
    name = request.from.get("name")
    sport = request.form.get("sport")
    registerants[name] = sport
    return render_template("success.html")