const Docker = require('dockerode')

const docker = new Docker({socketPath: '/var/run/docker.sock'});

docker.listContainers({all: true}, function(err, containers) {
    containers.forEach((data) => {
        console.log(data);
    })
});