#pragma once


struct vec4
{
	float x, y, z;
	float w = 1.0f;
};

struct vec3
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;

    vec3 operator -(const vec3& other) const;
    void operator +=(const vec3& other);
    void operator -=(const vec3& other);
    vec3 operator + (const vec3& other);
    vec3 operator - (const vec3& other);
    vec3 operator * (const vec3& other);
    vec3 operator * (float scalar);
    void operator *= (float scalar);
    vec3 operator-() const;


    float mag() const;
    vec4 to_vec4() const;

    static vec3 cross(const vec3& left, const vec3& right);
    static vec3 normalize(const vec3& vec);
    static float dot(const vec3& left, const vec3& right);
};


