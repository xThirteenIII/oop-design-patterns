#include "director.h"

void Director::set_builder(Builder* builder){
    this->builder = builder;
}

void Director::BuildMinimalViableProduct(){
    this->builder->ProducePartA();
}

void Director::BuildFullFeatureProduct(){
    this->builder->ProducePartA();
    this->builder->ProducePartB();
    this->builder->ProducePartC();
}
