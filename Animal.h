#ifndef Animal_h
#define Animal_h


class Animal {

 public:

    virtual void dispName();

    virtual void dispCarac();


 protected:
    String name;
    String carac;
};

#endif // Animal_h
