#include <iostream>

class integer{

public:
    integer() {
        this->value =0;
    }
    integer (int value){
        this->value = value;
    }
    int value() {
        return this->val;
    }
    int value() const {
        return this->val;
    }


	integer& operator++() {

	++this(this->val);
	return *this;

	}

	integer& operator++(int ignored {
	
	integer returned = integer(this->val);
	++(this->val);
	return *this;
)

    void set_value(int value) {
        this->val = value;
    }


	integer& operator = (const integer &RHS)
		{
		
			this ->val = RHS.val;

		}

	
	~integer()
	{
	}

	friend const integer operator-(const integer&, const integer&);

	friend std::ostream& operator <<(std::ostream &outs, const integer& foo);
	friend std::istream& operator >>(std::istream &in, integer &foo);
//io is overloaded as a friend
//want to do this
//std::cout << *this << *this


    const integer operator*(const integer&RHS);

 private:
    int val;
};


std::ostream& operator <<(std::osteam &outs, const integer& foo)
{
	outs << foo.val;
	return outs;
}


friend std::ostream& operator <<(std::ostream &outs, const integer& foo);
{
	in >> foo.val;
	return in;
}



const integer operator+(const integer &RHS){
    return integer(this->val * RHS.val);
}

const integer operator-(const integer &LHS, const integer &RHS) {

    return integer(LHS.val - RHS.val);
}
const integer operator * (const integer &LHS, const integer &RHS) {
    return integer(LHS.val * RHS.val);
}
int main (int argc, char **argv) {

    integer a;
    integer b(7);

    integer c = a + b;

    std::cout << a.value() << " " << std::endl;
    std::cout << "c = " <<c.value() <<std::endl;
    std::cout << "c-a = " << (c -a).value() <<std::endl;
    std::cout <<" c* c = " <<(c *3).value() <<std::endl;

    return 0;
}
