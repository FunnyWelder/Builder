#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

//using centimeters

enum MATHERIAL {
    WOOD,
    STONE,
    STEEL,
    BRICK
};

class Frame{
private:
    MATHERIAL material;
public:
    explicit Frame(MATHERIAL material) : material(material) {}

    void setMaterial(MATHERIAL Material) {
        Frame::material = Material;
    }

    string toString()
    {
        switch (material) {
            case MATHERIAL::WOOD: return "WOOD";
            case MATHERIAL::STONE: return "STONE";
            case MATHERIAL::STEEL: return "STEEL";
            case MATHERIAL::BRICK: return "BRICK";
        }
    }

    friend std::ostream &operator<<(std::ostream &os, Frame frame) {
        os << "material: " << frame.toString();
        return os;
    }


};

class Stair{
private:
    MATHERIAL material;
    unsigned int height;
    unsigned int width;
    unsigned int depth;
public:
    Stair(MATHERIAL material, unsigned int height, unsigned int width, unsigned int depth) : material(material),
                                                                                             height(height),
                                                                                             width(width),
                                                                                             depth(depth) {}

    void setMaterial(MATHERIAL Material) {
        this->material = Material;
    }

    void setHeight(unsigned int Height) {
        this->height = Height;
    }

    void setWidth(unsigned int Width) {
        this->width = Width;
    }

    void setDepth(unsigned int Depth) {
        this->depth = Depth;
    }

    string toString()
    {
        switch (material) {
            case MATHERIAL::WOOD: return "WOOD";
            case MATHERIAL::STONE: return "STONE";
            case MATHERIAL::STEEL: return "STEEL";
            case MATHERIAL::BRICK: return "BRICK";
        }
    }

    friend std::ostream &operator<<(std::ostream &os, Stair stair) {
        os << "material: " << stair.toString() << " height: " << stair.height << " width: " << stair.width << " depth: "
           << stair.depth;
        return os;
    }

};

class Wall{
private:
    MATHERIAL material;
    unsigned int height;
    unsigned int width;
    unsigned int depth;
public:
    Wall(MATHERIAL material, unsigned int height, unsigned int width, unsigned int depth) : material(material),
                                                                                            height(height),
                                                                                            width(width),
                                                                                            depth(depth) {}

    void setMaterial(MATHERIAL Material) {
        this->material = Material;
    }

    void setHeight(unsigned int Height) {
        this->height = Height;
    }

    void setWidth(unsigned int Width) {
        this->width = Width;
    }

    void setDepth(unsigned int Depth) {
        this->depth = Depth;
    }
    string toString()
    {
        switch (material) {
            case MATHERIAL::WOOD: return "WOOD";
            case MATHERIAL::STONE: return "STONE";
            case MATHERIAL::STEEL: return "STEEL";
            case MATHERIAL::BRICK: return "BRICK";
        }
    }

    friend std::ostream &operator<<(std::ostream &os, Wall wall) {
        os << "material: " << wall.toString() << " height: " << wall.height << " width: " << wall.width << " depth: "
           << wall.depth;
        return os;
    }
};

class Window{
private:
    MATHERIAL material;
    unsigned int height;
    unsigned int width;
public:
    Window(MATHERIAL material, unsigned int height, unsigned int width) : material(material), height(height),
                                                                          width(width) {}

    void setMaterial(MATHERIAL Material) {
        this->material = Material;
    }

    void setHeight(unsigned int Height) {
        this->height = Height;
    }

    void setWidth(unsigned int Width) {
        this->width = Width;
    }

    string toString()
    {
        switch (material) {
            case MATHERIAL::WOOD: return "WOOD";
            case MATHERIAL::STONE: return "STONE";
            case MATHERIAL::STEEL: return "STEEL";
            case MATHERIAL::BRICK: return "BRICK";
        }
    }

    friend std::ostream &operator<<(std::ostream &os, Window window) {
        os << "material: " << window.toString() << " height: " << window.height << " width: " << window.width;
        return os;
    }
};

class Door{
private:
    MATHERIAL material;
    unsigned int height;
    unsigned int width;
public:
    Door(MATHERIAL material, unsigned int height, unsigned int width) : material(material), height(height),
                                                                        width(width) {}

    void setMaterial(MATHERIAL Material) {
        this->material = Material;
    }

    void setHeight(unsigned int Height) {
        this->height = Height;
    }

    void setWidth(unsigned int Width) {
        this->width = Width;
    }

    string toString()
    {
        switch (material) {
            case MATHERIAL::WOOD: return "WOOD";
            case MATHERIAL::STONE: return "STONE";
            case MATHERIAL::STEEL: return "STEEL";
            case MATHERIAL::BRICK: return "BRICK";
        }
    }

    friend std::ostream &operator<<(std::ostream &os, Door door) {
        os << "material: " << door.toString() << " height: " << door.height << " width: " << door.width;
        return os;
    }
};

class Roof{
private:
    MATHERIAL material;
    unsigned int height;
    unsigned int width;
    unsigned int depth;
public:
    Roof(MATHERIAL material, unsigned int height, unsigned int width, unsigned int depth) :
    material(material), height(height), width(width), depth(depth) {}

    void setMaterial(MATHERIAL Material) {
        this->material = Material;
    }

    void setHeight(unsigned int Height) {
        this->height = Height;
    }

    void setWidth(unsigned int Width) {
        this->width = Width;
    }

    void setDepth(unsigned int Depth) {
        this->depth = Depth;
    }

    string toString()
    {
        switch (material) {
            case MATHERIAL::WOOD: return "WOOD";
            case MATHERIAL::STONE: return "STONE";
            case MATHERIAL::STEEL: return "STEEL";
            case MATHERIAL::BRICK: return "BRICK";
        }
    }

    friend std::ostream &operator<<(std::ostream &os, Roof roof) {
        os << "material: " << roof.toString() << " height: " << roof.height << " width: " << roof.width << " depth: "
           << roof.depth;
        return os;
    }
};

class Floor {
private:
    MATHERIAL material;
    unsigned int size; // площадь
public:
    Floor(MATHERIAL material, unsigned int size) : material(material), size(size) {}

    void setMaterial(MATHERIAL Material) {
        this->material = Material;
    }

    void setSize(unsigned int Size) {
        this->size = Size;
    }

    string toString()
    {
        switch (material) {
            case MATHERIAL::WOOD: return "WOOD";
            case MATHERIAL::STONE: return "STONE";
            case MATHERIAL::STEEL: return "STEEL";
            case MATHERIAL::BRICK: return "BRICK";
        }
    }

    friend std::ostream &operator<<(std::ostream &os, Floor floor) {
        os << "material: " << floor.toString() << " size: " << floor.size;
        return os;
    }
};

class House {
public:
    Frame* frame;
    vector<Stair*> stairs;
    vector<Wall*> walls;
    vector<Window*> windows;
    vector<Door*> doors;
    vector<Roof*> roofs;
    vector<Floor*> floors;
    unsigned int levels;
    bool foundation;

    void ListParts() const {
        cout << "Frame: " << *frame << endl;
        cout << endl << "Stairs: " << endl;
        for (size_t i=0;i<stairs.size();i++){
            if(stairs[i]== stairs.back()){
                cout << '[' << i << "] " << *stairs[i] << endl;
            }else{
                cout << '[' << i << "] " << *stairs[i] << endl;
            }
        }
        cout << endl << "Walls: " << endl;
        for (size_t i=0;i<walls.size();i++){
            if(walls[i]== walls.back()){
                cout << '[' << i << "] " << *walls[i] << endl;
            }else{
                cout << '[' << i << "] " << *walls[i] << endl;
            }
        }
        cout << endl << "Windows: " << endl;
        for (size_t i=0;i<windows.size();i++){
            if(windows[i]== windows.back()){
                cout << '[' << i << "] " << *windows[i] << endl;
            }else{
                cout << '[' << i << "] " << *windows[i] << endl;
            }
        }
        cout << endl << "Doors: " << endl;
        for (size_t i=0;i<doors.size();i++){
            if(doors[i]== doors.back()){
                cout << '[' << i << "] " << *doors[i] << endl;
            }else{
                cout << '[' << i << "] " << *doors[i] << endl;
            }
        }
        cout << endl << "Roofs: " << endl;
        for (size_t i=0;i<roofs.size();i++){
            if(roofs[i]== roofs.back()){
                cout << '[' << i << "] " << *roofs[i] << endl;
            }else{
                cout << '[' << i << "] " << *roofs[i] << endl;
            }
        }
        cout << endl << "Floors: " << endl;
        for (size_t i=0;i<floors.size();i++){
            if(floors[i]== floors.back()){
                cout << '[' << i << "] " << *floors[i] << endl;
            }else{
                cout << '[' << i << "] " << *floors[i] << endl;
            }
        }
        cout << endl << "Levels: " << levels << endl;
        cout << endl << "Foundation: ";
        if (foundation) {cout << "is available" << endl;} else {cout << "is not available" << endl;}
    }

    House& operator= (const House *house)
    {
        frame = house->frame;
        stairs = house->stairs;
        walls = house->walls;
        windows = house->windows;
        doors = house->doors;
        roofs = house->roofs;
        floors = house->floors;
        levels = house->levels;
        foundation = house->foundation;
        return *this;
    }
};



class HouseBuilder {
private:
    House* house;

public:

    void Reset(){
        house = new House();
    }
    HouseBuilder(){
        Reset();
    }
    ~HouseBuilder(){
        delete house;
    }

    void setFrame(Frame *Frame) {
        house->frame = Frame;
    }
    void setStair(Stair *Stair) {
        house->stairs.push_back(Stair);
    }
    void setWall(Wall *Wall) {
        house->walls.push_back(Wall);
    }
    void setWindow(Window *Window) {
        house->windows.push_back(Window);
    }
    void setDoor(Door *Door) {
        house->doors.push_back(Door);
    }
    void setRoof(Roof *Roof) {
        house->roofs.push_back(Roof);
    }
    void setFloor(Floor *Floor) {
        house->floors.push_back(Floor);
    }
    void setLevels(unsigned int Levels) {
        house->levels = Levels;
    }
    void setFoundation(bool Foundation) {
        house->foundation = Foundation;
    }

    House* build() {
        House* result= this->house;
        Reset();
        return result;
    }
};

class Director {
private:
    HouseBuilder* builder;
public:


    explicit Director(HouseBuilder *builder) : builder(builder) {}

    ~Director() = default;

    void BuildWoodHouse(){ // this чтобы не запустаться с другими builder
        this->builder->setFloor(new Floor(WOOD, 5000));
        this->builder->setFoundation(false);
        this->builder->setFrame(new Frame(WOOD));
        this->builder->setDoor(new Door(WOOD, 200, 100));
        this->builder->setLevels(1);
        this->builder->setRoof(new Roof(WOOD, 400, 5000, 5000));
        this->builder->setWall(new Wall(WOOD, 250, 500, 50));
        this->builder->setWall(new Wall(WOOD, 250, 500, 50));
        this->builder->setWall(new Wall(WOOD, 250, 500, 50));
        this->builder->setWall(new Wall(WOOD, 250, 500, 50));
        this->builder->setWindow(new Window(WOOD, 100, 100));
        this->builder->setWindow(new Window(WOOD, 100, 100));
        this->builder->setStair(new Stair(WOOD, 400, 150, 50));
    }
    void BuildStoneHouse(){
        this->builder->setFloor(new Floor(STONE, 5000));
        this->builder->setFoundation(true);
        this->builder->setFrame(new Frame(STEEL));
        this->builder->setDoor(new Door(STEEL, 200, 100));
        this->builder->setLevels(1);
        this->builder->setRoof(new Roof(BRICK, 400, 5000, 5000));
        this->builder->setWall(new Wall(STONE, 250, 500, 50));
        this->builder->setWall(new Wall(STONE, 250, 500, 50));
        this->builder->setWall(new Wall(STONE, 250, 500, 50));
        this->builder->setWall(new Wall(STONE, 250, 500, 50));
        this->builder->setWindow(new Window(STEEL, 100, 100));
        this->builder->setWindow(new Window(STEEL, 100, 100));
        this->builder->setStair(new Stair(BRICK, 400, 150, 50));
    }
    void BuildBrickHouse(){
        this->builder->setFloor(new Floor(STONE, 5000));
        this->builder->setFoundation(true);
        this->builder->setFrame(new Frame(STEEL));
        this->builder->setDoor(new Door(STEEL, 200, 100));
        this->builder->setLevels(1);
        this->builder->setRoof(new Roof(BRICK, 400, 5000, 5000));
        this->builder->setWall(new Wall(BRICK, 250, 500, 50));
        this->builder->setWall(new Wall(BRICK, 250, 500, 50));
        this->builder->setWall(new Wall(BRICK, 250, 500, 50));
        this->builder->setWall(new Wall(BRICK, 250, 500, 50));
        this->builder->setWindow(new Window(STEEL, 100, 100));
        this->builder->setWindow(new Window(STEEL, 100, 100));
        this->builder->setStair(new Stair(BRICK, 400, 150, 50));
    }
};

int main() {

    HouseBuilder builder;
    Director director(&builder);
    director.BuildBrickHouse();
    House house;
    house = builder.build();
    cout << "HOUSE: " << endl;
    house.ListParts();
    cout << endl << endl;

    House house1;
    builder.setWindow(new Window(BRICK, 10000, 10000));
    builder.setWindow(new Window(STEEL, 10, 10));
    builder.setWall(new Wall(WOOD, 1000, 500, 10));
    builder.setWall(new Wall(STEEL, 1000, 500, 10));
    builder.setWall(new Wall(STONE, 1000, 500, 10));
    builder.setRoof(new Roof(STONE, 10, 9000, 70));
    builder.setDoor(new Door(STONE, 80, 10));
    builder.setDoor(new Door(BRICK, 600, 200));
    builder.setLevels(2);
    builder.setFrame(new Frame(STONE));
    builder.setFoundation(false);
    builder.setStair(new Stair(STONE, 20, 900, 900));
    house1 = builder.build();
    cout << "HOUSE1: " << endl;
    house1.ListParts();

    return 0;
}
