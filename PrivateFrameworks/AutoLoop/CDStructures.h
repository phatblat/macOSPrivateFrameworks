//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FloatRect {
    struct Point2f _field1;
    struct Point2f _field2;
};

struct FrameTimeNormalizer {
    CDUnknownFunctionPointerType *_field1;
    vector_4f732a7b _field2;
    vector_4f732a7b _field3;
    unsigned int _field4;
    CDStruct_1b6d18a9 _field5;
    CDStruct_1b6d18a9 _field6;
};

struct HomographyInfoRecord;

struct HomographyRecordVector {
    struct HomographyInfoRecord **_field1;
    struct HomographyInfoRecord **_field2;
    struct __compressed_pair<HomographyInfoRecord **, std::__1::allocator<HomographyInfoRecord *>> {
        struct HomographyInfoRecord **_field1;
    } _field3;
};

struct ImageFeatureMatchParamRec {
    int blocksX;
    int blocksY;
    int blockOverlap;
    int detectMethod;
    int extractMethod;
    _Bool justAffine;
    _Bool rescalePoints;
    float angleTolerance;
    float distanceToleranceFraction;
    float metricTolerance;
    unsigned int maxAllowedMatches;
    unsigned int minFeaturesPerFrame;
    unsigned int maxFeaturesPerFrame;
    _Bool useOpenCVMatching;
    float nonmaxSuppressionRadius;
    float maxReprojectionErrorBase;
    float maxReprojectionErrorSlope;
    _Bool useOpenCL;
};

struct ImageFeaturePair;

struct MetadataFloatVector {
    float _field1;
    float _field2;
};

struct Point2f {
    float _field1;
    float _field2;
};

struct VTDecompressionOutputCallbackRecord {
    CDUnknownFunctionPointerType decompressionOutputCallback;
    void *decompressionOutputRefCon;
};

struct WorkingPixmapRecord {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    struct __CVBuffer *_field7;
    int _field8;
};

struct ransac_homography_record {
    float _field1[9];
};

struct vector<CMTime, std::__1::allocator<CMTime>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<CMTime *, std::__1::allocator<CMTime>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
};

struct vector<FloatPoint, std::__1::allocator<FloatPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
};

struct vector<ImageFeaturePair, std::__1::allocator<ImageFeaturePair>> {
    struct ImageFeaturePair *_field1;
    struct ImageFeaturePair *_field2;
    struct __compressed_pair<ImageFeaturePair *, std::__1::allocator<ImageFeaturePair>> {
        struct ImageFeaturePair *_field1;
    } _field3;
};

struct vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    float _field1[9];
    CDStruct_1b6d18a9 _field2;
} CDStruct_d7aed2b2;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Template types
typedef struct vector<CMTime, std::__1::allocator<CMTime>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<CMTime *, std::__1::allocator<CMTime>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
} vector_4f732a7b;

typedef struct vector<FloatPoint, std::__1::allocator<FloatPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
} vector_5dae144b;

typedef struct vector<ImageFeaturePair, std::__1::allocator<ImageFeaturePair>> {
    struct ImageFeaturePair *_field1;
    struct ImageFeaturePair *_field2;
    struct __compressed_pair<ImageFeaturePair *, std::__1::allocator<ImageFeaturePair>> {
        struct ImageFeaturePair *_field1;
    } _field3;
} vector_9ddfe0fc;

typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;

