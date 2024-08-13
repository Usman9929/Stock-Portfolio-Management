import flask from Flask

@app.route("/")
@app.route("/index")
def index():
    return "hello world"
