#ifndef BASE_MVC_H
#define BASE_MVC_H

template <typename T>
class MVC
{
public:
    MVC(T* mvc)
    {
        _mvc = mvc;
    }

    virtual ~MVC()
    {
    }

    T* mvc()
    {
        return _mvc;
    }

private:
    T* _mvc;
};

#endif // BASE_MVC_H
