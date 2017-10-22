'''
Flask webapp for QEA M2 Project 2
'''

from flask import Flask
import os
from flask import render_template, request, send_from_directory

#HOST = '0.0.0.0' if 'PORT' in os.environ else '127.0.0.1'
#PORT = int(os.environ.get('PORT', 5000))

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('QEA_home.html')


if __name__ == '__main__':

    app.run()

    #app.run(app.run(host=HOST, port=PORT))
