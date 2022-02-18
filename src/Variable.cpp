
class Variable
{
private:
    std::vector<std::byte> data;

public:
    template<typename T>
    Variable(T data);
    ~Variable();
};

template<typename T>
Variable::Variable(T data)
{
    type::type = type::get(data);
}