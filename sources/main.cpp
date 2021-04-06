// Copyright 2020 vlad <Kukrynics@yandex.ru>

#include <Client.hpp>

int main(int argc, [[maybe_unused]] char **argv) {
  Client A(argc, argv);
  return A.clientRequest();
}
