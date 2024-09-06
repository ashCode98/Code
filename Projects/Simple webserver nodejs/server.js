const http = require('http')

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
    const { method, url } = req;
    if (url === "/" && method === 'GET') {
        res.end("Hello")
    }
    else if (url === "/home" && method === 'GET') {
        res.end("Home page")
    }
    else if (url === "/profile" && method === 'GET') {
        res.end("Profile page")
    }
    else {
        res.statusCode = 404;
        res.end("Not found")
    }
})

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`)
})