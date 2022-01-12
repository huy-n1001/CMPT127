/* Points.hpp */

class Points {

private:
	size_t len;
	size_t reserved;
	Point* points;

public:
	void point_array_init();
	void point_array_reset();
	int point_array_append(Point* p);
	int_point_array_remove(unsigned int i);
};
