
namespace type
{
    typedef uint8_t type_t;

    const type_t UNKNOWN   = -1;
    const type_t NONE      =  0;
    const type_t BOOL      =  1;
    const type_t NUMBER    =  2;
    const type_t FLOAT     =  3;
    const type_t STRING    =  4;

    const type_t ITERABLE  = 10;
    const type_t LIST      = 11;
    const type_t OBJECT    = 12;

    // NONE
    type_t get(                    ) { return NONE; }
    type_t get(const nullptr_t     ) { return NONE; }

    // BOOL
    type_t get(const bool          ) { return BOOL;    }
    
    // NUMBER
    type_t get(const type       ) { return NUMBER;  }
    type_t get(const uint16_t      ) { return NUMBER;  }
    type_t get(const uint32_t      ) { return NUMBER;  }
    type_t get(const uint64_t      ) { return NUMBER;  }
    type_t get(const int8_t        ) { return NUMBER;  }
    type_t get(const int16_t       ) { return NUMBER;  }
    type_t get(const int32_t       ) { return NUMBER;  }
    type_t get(const int64_t       ) { return NUMBER;  }
    
    // FLOAT
    type_t get(const float         ) { return FLOAT;   }
    type_t get(const double        ) { return FLOAT;   }
    type_t get(const long double   ) { return FLOAT;   }

    // STRING
    type_t get(const std::string   ) { return STRING;  }
    
    // LIST
    template<typename T>
    type_t get(const std::vector<T>) { return LIST;    }
    template<typename T>
    type_t get(const T *           ) { return LIST;    }

    // OBJECT
    template<typename T, typename U>
    type_t get(const std::map<T, U>) { return OBJECT;  }

    // UNKNOWN
    template<typename T>
    type_t get(const T             ) { return UNKNOWN; }


    int test[6] = {23, 234, 236, 263, 4, 3};
    type_t vartype = get(test);
} // namespace type