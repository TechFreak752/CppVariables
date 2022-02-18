
typedef std::vector<uint8_t> bytes;


class Convert
{
private:
    template<typename T>
    bytes convert_int(int64_t data) {
        for (size_t i = 0; i < ; i++)
        {
            
        }
        bytes data = {0xFF, 0xFF, 0xFF, 0xFF};
        return data;
    };
    template<typename T>
    bytes convert_float();

public:
    // BOOL
    bytes from_bool(bool) {};
    
    // NUMBER
    // bytes from_int(uint8_t data) {return this->convert_int((int64_t)data)};
    bytes from_int(uint16_t) {};
    bytes from_int(uint32_t) {};
    bytes from_int(uint64_t) {};
    bytes from_int(int8_t) {};
    bytes from_int(int16_t) {};
    bytes from_int(int32_t) {};
    bytes from_int(int64_t) {};
    
    // FLOAT
    bytes from_float() {};
    
    // STRING
    bytes from_string() {};
};
