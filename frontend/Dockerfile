FROM node:14.17.1-alpine

RUN mkdir -p /myapp/frontend

WORKDIR /myapp/frontend

COPY package.json /myapp/frontend/package.json
COPY package-lock.json /myapp/frontend/package-lock.json

RUN npm install

COPY . /myapp/frontend