# CS 100 Programming Project

Project Name: Legend of the Four Heroes

Group Members: Karina Lee (klee220@ucr.edu), Samiha Kibria (skibr001@ucr.edu), Michael Risher (mrish001@ucr.edu)

App: A RPG style game in the vein of old Final Fantasy games.

The development will focus on the development of the gameplay mechanics and the implementation of design patterns, although if time permits it, the maybe development will include the implementation of story, animation, and other aspects of the game. The hope is to gain experience in the development of a game and create a project that can be used in portfolios as our group members are looking towards graduation and finding internships. We wish to learn about and familiarize ourselves with tools and the process that is currently used in the industry today. With the coronavirus and everyone experiencing self quarantine, it was important for our group to learn something valuable towards our future and at the same time create something that could be used as entertainment to bring joy during these difficult times.

Tools: The plan is to use an engine, either GameMaker or Unreal Engines, as both use C++ scripts.  Our plan is to use Unreal engine as it is a standard used currently in the industry. However, it is known to be difficult to use in 2-D games. If this is the case, then we will use GameMaker instead.

I/O: Input will be keyboard inputs "a", "s", "d", "f", and the directional keys. Output will be as follows: "a" accepts, "b" will cancel, "d" and "f" will be menu buttons. Directional keys will give movement.

## UML Diagram for project
![Image of uml diagram](/uml-diagram.png)
## UML description
In our game, we will be using three design patterns: composite, decorator, and abstract factory. 

The client uses the abstract Character class to create a Player, and the abstract factory pattern to create enemies. Player and Enemy both inherit from Character. 

For the abstract factory pattern, the EnemyFactory class is the abstract factory, which declares the interface for the operations that create the abstract product object: Enemy. CreateWolf, CreateGoblin, CreateOrc, and CreateTroll are concrete factories that implement those operations to create concrete products: Wolf, Goblin, Orc, and Troll. These concrete products  inherit from the abstract product.

The Character objects have an Action. We use the composite pattern to implement Action and its subclasses. Action is the abstract component class that declares the interface for the objects. Defend, Attack, and Magic are leaves that define the behavior for objects. Type is a composite class that can implement any of the leaves’ operations in the component interface. 

We use the decorator pattern to dynamically add additional responsibilities to Magic class’s subclass, BaseSpell. Magic is the abstract component class, which defines the interface for the objects that can have responsibilities added to them. BaseSpell is our concrete component, which defines an object that can have responsibilities added. SpellDecorator is our abstract decorator, which defines an interface that implements Magic’s interface. Fire, Water, and Lightning are our concrete decorators, which extend SpellDecorator and add responsibilities to BaseSpell. 

