/*
* NO LOOK AT SAUCE!
*/

#pragma once 
#include <string.h>
#include <stdlib.h>
#define class struct
// empty defines just for lulz
#define private  
#define protected  
#define public 
#define auto(name, value) __typeof__(value) (name) = value
#define using(name, type) typedef (type) (name)
#define callMethod(object, function) object->function(object)	


class BirbStruct {
	private int age;
	public void (*printAge)(class BirbStruct *self);
};


public static void printAge(class BirbStruct *self)
{
	printf("I am a birb, and my age is %d\n", self->age);
}
public void * newBirb(int _age) {
	class BirbStruct * object = (class BirbStruct*) malloc(sizeof(class BirbStruct));
	object -> age = _age;
	object -> printAge = &printAge;
	return object;
}


typedef class BirbStruct Birb;

class ParrotStruct {
	public class BirbStruct super;
};

public static void printParrotAge(class ParrotStruct *self) {
    Birb *_self = (Birb *)self;
	printf("I am a parrot, and my age is %d\n", _self->age);
}


public void *newParrot(int _age) {
	Birb * super = newBirb(_age);
    super -> printAge = &printParrotAge;
    class ParrotStruct* object = (class ParrotStruct*) malloc(sizeof(class ParrotStruct));
	object -> super = *super;
	return object;
};

typedef class ParrotStruct Parrot;