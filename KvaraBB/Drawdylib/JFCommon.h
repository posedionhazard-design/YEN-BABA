

#ifndef JFCommon_h
#define JFCommon_h


#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

typedef long kaddr;

struct Vector2 {
    float X;
    float Y;

    Vector2() {
        this->X = 0;
        this->Y = 0;
    }

    Vector2(float x, float y) {
        this->X = x;
        this->Y = y;
    }

    static Vector2 Zero() {
        return Vector2(0.0f, 0.0f);
    }

    static float Distance(Vector2 a, Vector2 b) {
        Vector2 vector = Vector2(a.X - b.X, a.Y - b.Y);
        return sqrt((vector.X * vector.X) + (vector.Y * vector.Y));
    }
    
    Vector2 operator+(const Vector2 &v) {
        return Vector2(X + v.X, Y + v.Y);
    }
    
    Vector2 operator-(const Vector2 &v) {
        return Vector2(X - v.X, Y - v.Y);
    }
    
    Vector2 operator*(float a) {
        return Vector2(X * a, Y * a);
    }
    
    Vector2 operator/(float a) {
        return Vector2(X / a, Y / a);
    }
    

    bool operator!=(const Vector2 &src) const {
        return (src.X != X) || (src.Y != Y);
    }

    Vector2 &operator+=(const Vector2 &v) {
        X += v.X;
        Y += v.Y;
        return *this;
    }

    Vector2 &operator-=(const Vector2 &v) {
        X -= v.X;
        Y -= v.Y;
        return *this;
    }
};

typedef struct Circle2:public Vector2{
    float radius;
    
    Circle2():Vector2(),radius(0){}
    Circle2(float _x,float _y,float _radius):Vector2(_x,_y),radius(_radius){}

} Circle2;

struct Vector3 {
    float X;
    float Y;
    float Z;

    Vector3() {
        this->X = 0;
        this->Y = 0;
        this->Z = 0;
    }

    Vector3(float x, float y, float z) {
        this->X = x;
        this->Y = y;
        this->Z = z;
    }

    Vector3 operator+(const Vector3 &v) const {
        return Vector3(X + v.X, Y + v.Y, Z + v.Z);
    }

    Vector3 operator-(const Vector3 &v) const {
        return Vector3(X - v.X, Y - v.Y, Z - v.Z);
    }

    bool operator==(const Vector3 &v) {
        return X == v.X && Y == v.Y && Z == v.Z;
    }

    bool operator!=(const Vector3 &v) {
        return !(X == v.X && Y == v.Y && Z == v.Z);
    }

    static Vector3 Zero() {
        return Vector3(0.0f, 0.0f, 0.0f);
    }

    static float Dot(Vector3 lhs, Vector3 rhs) {
        return (((lhs.X * rhs.X) + (lhs.Y * rhs.Y)) + (lhs.Z * rhs.Z));
    }

    static float Distance(Vector3 a, Vector3 b) {
        Vector3 vector = Vector3(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
        return sqrt(((vector.X * vector.X) + (vector.Y * vector.Y)) + (vector.Z * vector.Z));
    }
};

struct MyRect {
    float X;
    float Y;
    float Width;
    float Height;

    MyRect() {
        this->X = 0;
        this->Y = 0;
        this->Width = 0;
        this->Height = 0;
    }

    MyRect(float x, float y, float width, float height) {
        this->X = x;
        this->Y = y;
        this->Width = width;
        this->Height = height;
    }

    float GetCenterX() {
        return this->X + this->Width * 0.5f;
    }

    float GetCenterY() {
        return this->Y + this->Height * 0.5f;
    }

    float GetMaxX() {
        return this->X + this->Width;
    }

    float GetMaxY() {
        return this->Y + this->Height;
    }

    bool operator==(const MyRect &src) const {
        return (src.X == this->X && src.Y == this->Y && src.Height == this->Height &&
                src.Width == this->Width);
    }

    bool operator!=(const MyRect &src) const {
        return (src.X != this->X && src.Y != this->Y && src.Height != this->Height &&
                src.Width != this->Width);
    }
};

struct FMatrix {
    float Matrix[4][4];

    float *operator[](int index) {
        return Matrix[index];
    }
};

struct Quat {
    float x;
    float y;
    float z;
    float w;
};

struct FTransform {
    Quat Rotation;
    Vector3 Translation;
    float w;
    Vector3 Scale3D;
};

struct FRotator {
    float Pitch;
    float Yaw;
    float Roll;
};

struct MinimalViewInfo {
    Vector3 Location;
    Vector3 LocationLocalSpace;
    FRotator Rotation;
    float FOV;
};


struct BoneData
{
    Vector2 head;
    Vector2 neck;// 颈部
    Vector2 chest;
    Vector2 leftShoulder;
    Vector2 rightShoulder;
    Vector2 leftElbow;
    Vector2 rightElbow;
    Vector2 leftHand;
    Vector2 rightHand;
    Vector2 pelvis;
    Vector2 leftThigh;
    Vector2 rightThigh;
    Vector2 leftKnee;
    Vector2 rightKnee;
    Vector2 leftFoot;
    Vector2 rightFoot;
    
    
    Vector3 headV3; // 头
    Vector3 neck3;//颈部
    Vector3 chestV3; // 胸部
    Vector3 leftShoulderV3; // 左肩
    Vector3 rightShoulderV3; // 右肩
    Vector3 leftElbowV3; // 左手肘
    Vector3 rightElbowV3; // 右手肘
    Vector3 leftHandV3; // 左手
    Vector3 rightHandV3; // 右手
    Vector3 pelvisV3; // 盆骨
    Vector3 leftThighV3; // 左大腿
    Vector3 rightThighV3; // 右大腿
    Vector3 leftKneeV3; // 左膝盖
    Vector3 rightKneeV3; // 右膝盖
    Vector3 leftFootV3; // 左脚
    Vector3 rightFootV3; // 右脚
};


struct BoneVisibleData
{
    bool head;
    bool chest;
    bool neck; //颈部
    bool leftShoulder;
    bool rightShoulder;
    bool leftElbow;
    bool rightElbow;
    bool leftHand;
    bool rightHand;
    bool pelvis;
    bool leftThigh;
    bool rightThigh;
    bool leftKnee;
    bool rightKnee;
    bool leftFoot;
    bool rightFoot;
};

typedef enum : NSUInteger {
    PlayerTypeMyself,
    PlayerTypeTeam,
    PlayerTypeEnemy
} PlayerType;

typedef enum : NSUInteger {
    PropsTypeVehicle,
    PropsTypeWeapon,
    PropsTypeArmor,
    PropsTypeSight,
    PropsTypeAccessory,
    PropsTypeBullet,
    PropsTypeDrug,
    PropsTypeBox,
    PropsTypeEarlyWarning,
    PropsTypeOther,
    PropsTypeNone,
    PickUpListWrapperActor,
    AirDropBox,
    Flaregun,

    
} PropsType;

#endif
