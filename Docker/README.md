# Docker

Write a Dockerfile that sets up a web server using Python and serves the `index.html` file located in the same directory as this README.

The Dockerfile should perform the following steps:
1. Install Python
2. Copy the `index.html` file into the container, placing it in a dedicated folder
3. Configure the Dockerfile to start a Python web server that serves files from the folder where the `index.html` file is located

Feel free to use whichever port you find suitable.


HOW TO RUN THE SERVER:
    1. Inside the directory Dockerfile exists run """ docker build . """
    2. Inside the directory run " docker build -t docker-isaac ." 
    3. For running the server run " docker run -d --rm -p 8080:8000 docker-isaac  "

