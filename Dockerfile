FROM ubuntu:20.04

RUN apt-get update && \
    DEBIAN_FRONTEND="noninteractive" apt-get install -y make gcc-avr avr-libc && \
    rm -rf /var/lib/apt/lists/*

VOLUME /src

WORKDIR /src

ENTRYPOINT ["make"]
