const express = require('express')

const app = express()
const PORT = 3000


app.get('/', (req, res) => {
    
})

app.listen(PORT, () => {
    console.log(`Listen to port ${PORT}`);
})
