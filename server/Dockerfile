FROM ruby:latest

RUN apt-get update -qq && apt-get install -y build-essential libpq-dev nodejs default-mysql-client vim

RUN mkdir -p /myapp/server

WORKDIR /myapp/server

COPY Gemfile /myapp/server/Gemfile
COPY Gemfile.lock /myapp/server/Gemfile.lock

RUN gem install bundler

RUN bundle install

COPY . /myapp/server