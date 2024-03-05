//
// Created by Ruud Wijnands on 02/03/2024.
//
#include <gtest/gtest.h>
#include "example_component.h"

TEST(ExampleComponent, HelloWorld) {
    ExampleComponent exampleComponent;
    ASSERT_EQ(exampleComponent.printHelloWorld(), "Hello, World!");
}