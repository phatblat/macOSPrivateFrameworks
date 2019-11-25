//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AlignedBuffer<480, 8> {
    char _field1[480];
};

struct ByteString {
    union {
        struct {
            unsigned short _field1;
            char *_field2;
        } _field1;
        struct {
            unsigned short _field1;
            unsigned char _field2[14];
        } _field2;
    } _field1;
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

struct CMTouchHistory;

struct Candidate {
    struct Vector<KB::Word, 3> _field1;
    float _field2;
    struct CandidateScoreFactors _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct LanguageModelContext _field6;
    struct String _field7;
    struct ByteString _field8;
    _Bool _field9;
    _Bool _field10;
    unsigned long long _field11;
    struct retain_ptr<const __CFDictionary *> _field12;
    struct retain_ptr<__CFDictionary *> _field13;
};

struct CandidateCollection {
    struct vector<KB::Candidate, std::__1::allocator<KB::Candidate>> _field1;
    struct vector<KB::Candidate, std::__1::allocator<KB::Candidate>> _field2;
    int _field3;
};

struct CandidateScoreFactors {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct ConfidenceModel {
    struct Params _field1;
};

struct ContinuousPathDetector {
    struct map<int, KB::ContinuousPathDetector::AnnotatedPath, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, KB::ContinuousPathDetector::AnnotatedPath>>> _field1;
    struct Parameters _field2;
    double _field3;
    float _field4;
    float _field5;
};

struct DictionaryContainer;

struct Input;

struct InputManagerSpecialization;

struct KeyboardLayout;

struct LanguageModel;

struct LanguageModelContainer {
    CDUnknownFunctionPointerType *_field1;
    struct vector<std::__1::shared_ptr<KB::LanguageModel>, std::__1::allocator<std::__1::shared_ptr<KB::LanguageModel>>> _field2;
    struct vector<float, std::__1::allocator<float>> _field3;
};

struct LanguageModelContext {
    vector_5bda1073 _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct LockedInput {
    unsigned int _field1;
    unsigned int _field2;
};

struct NSDictionary {
    Class _field1;
};

struct Parameters {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct Params {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    int _field7;
};

struct Path {
    struct vector<TI::CP::PathSample, std::__1::allocator<TI::CP::PathSample>> m_samples;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> m_inflection_points;
};

struct PathResampler {
    struct PathResamplerParams m_params;
    struct Path m_resampled_path;
    struct Path m_raw_path;
    _Bool m_is_final;
    unsigned int m_processed_sample_count;
    unsigned int m_retroactively_processed_sample_count;
};

struct PathResamplerParams {
    double segment_length;
    int inflection_point_detection_mode;
    int inflection_point_type;
    _Bool should_downsample;
    double minimum_pause_length;
    _Bool should_flush_on_pause;
};

struct PathSample;

struct RefPtr<KB::DictionaryContainer> {
    struct DictionaryContainer *m_ptr;
};

struct RefPtr<TI::Favonius::CMTouchHistory> {
    struct CMTouchHistory *m_ptr;
};

struct RefPtr<TI::Favonius::KeyboardLayout> {
    struct KeyboardLayout *m_ptr;
};

struct RefPtr<TI::Favonius::LayoutKey>;

struct StaticDictionary;

struct String {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4;
    char *_field5;
    char _field6[16];
};

struct StrokeBuildManager;

struct TIInputManager {
    CDUnknownFunctionPointerType *_field1;
    struct vector<KB::Input, std::__1::allocator<KB::Input>> _field2;
    struct String _field3;
    struct String _field4;
    unsigned int _field5;
    struct String _field6;
    struct retain_ptr<const __CFLocale *> _field7;
    struct ConfidenceModel _field8;
    struct LockedInput _field9;
    struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> _field10;
    struct String _field11;
    RefPtr_9bddf3b2 _field12;
    shared_ptr_e9f752ce _field13;
    unsigned int _field14;
    Vector_edffb8f6 _field15;
    _Bool _field16;
    struct String _field17;
    RefPtr_54d74a7c _field18;
    struct ContinuousPathDetector _field19;
    int _field20;
    _Bool _field21;
    struct String _field22;
    struct LanguageModelContext _field23;
    struct shared_ptr<KB::InputManagerSpecialization> _field24;
    CDUnknownBlockType _field25;
    struct shared_ptr<KB::TypologyLogger> _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    _Bool _field30;
    _Bool _field31;
    _Bool _field32;
    _Bool _field33;
    _Bool _field34;
    _Bool _field35;
};

struct TITokenID {
    unsigned int lexicon_id;
    unsigned int word_id;
};

struct TypologyLogger;

struct Vector<KB::Word, 3> {
    unsigned long long _field1;
    struct VectorBuffer<KB::Word, 3> _field2;
};

struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    unsigned long long _field1;
    struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field2;
};

struct VectorBuffer<KB::Word, 3> {
    struct Word *_field1;
    unsigned long long _field2;
    struct AlignedBuffer<480, 8> _field3;
};

struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    struct RefPtr<TI::Favonius::LayoutKey> *_field1;
    unsigned long long _field2;
};

struct Word;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _TIRevisionHistoryTokenIterator {
    unsigned long long tokenIndex;
    unsigned long long documentLocation;
};

struct __CFDictionary;

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct map<int, KB::ContinuousPathDetector::AnnotatedPath, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, KB::ContinuousPathDetector::AnnotatedPath>>> {
    struct __tree<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct retain_ptr<__CFDictionary *> {
    struct __CFDictionary *_field1;
};

struct retain_ptr<const __CFDictionary *> {
    struct __CFDictionary *_field1;
};

struct retain_ptr<const __CFLocale *> {
    struct __CFLocale *_field1;
};

struct shared_ptr<KB::InputManagerSpecialization> {
    struct InputManagerSpecialization *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<KB::LanguageModel> {
    struct LanguageModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<KB::TypologyLogger> {
    struct TypologyLogger *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<KB::StaticDictionary, std::__1::default_delete<KB::StaticDictionary>> {
    struct __compressed_pair<KB::StaticDictionary *, std::__1::default_delete<KB::StaticDictionary>> {
        struct StaticDictionary *__value_;
    } __ptr_;
};

struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> {
    struct __compressed_pair<TI::Favonius::StrokeBuildManager *, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> {
        struct StrokeBuildManager *_field1;
    } _field1;
};

struct vector<KB::Candidate, std::__1::allocator<KB::Candidate>> {
    struct Candidate *_field1;
    struct Candidate *_field2;
    struct __compressed_pair<KB::Candidate *, std::__1::allocator<KB::Candidate>> {
        struct Candidate *_field1;
    } _field3;
};

struct vector<KB::Input, std::__1::allocator<KB::Input>> {
    struct Input *_field1;
    struct Input *_field2;
    struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input>> {
        struct Input *_field1;
    } _field3;
};

struct vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<KB::LexiconInfo *, std::__1::allocator<KB::LexiconInfo>> {
        CDStruct_183601bc *_field1;
    } _field3;
};

struct vector<TI::CP::PathSample, std::__1::allocator<TI::CP::PathSample>> {
    struct PathSample *__begin_;
    struct PathSample *__end_;
    struct __compressed_pair<TI::CP::PathSample *, std::__1::allocator<TI::CP::PathSample>> {
        struct PathSample *__value_;
    } __end_cap_;
};

struct vector<TITokenID, std::__1::allocator<TITokenID>> {
    struct TITokenID *__begin_;
    struct TITokenID *__end_;
    struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID>> {
        struct TITokenID *__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<std::__1::shared_ptr<KB::LanguageModel>, std::__1::allocator<std::__1::shared_ptr<KB::LanguageModel>>> {
    shared_ptr_e9f752ce *_field1;
    shared_ptr_e9f752ce *_field2;
    struct __compressed_pair<std::__1::shared_ptr<KB::LanguageModel>*, std::__1::allocator<std::__1::shared_ptr<KB::LanguageModel>>> {
        shared_ptr_e9f752ce *_field1;
    } _field3;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
} CDStruct_2418a849;

typedef struct CDStruct_183601bc;

typedef struct {
    struct String _field1;
    struct String _field2;
    struct String _field3;
    struct String _field4;
    struct String _field5;
    unsigned int _field6;
    float _field7;
} CDStruct_69b8fb94;

// Template types
typedef struct RefPtr<KB::DictionaryContainer> {
    struct DictionaryContainer *m_ptr;
} RefPtr_9bddf3b2;

typedef struct RefPtr<TI::Favonius::CMTouchHistory> {
    struct CMTouchHistory *m_ptr;
} RefPtr_48eecea7;

typedef struct RefPtr<TI::Favonius::KeyboardLayout> {
    struct KeyboardLayout *m_ptr;
} RefPtr_54d74a7c;

typedef struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    unsigned long long _field1;
    struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field2;
} Vector_edffb8f6;

typedef struct shared_ptr<KB::LanguageModel> {
    struct LanguageModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e9f752ce;

typedef struct vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<KB::LexiconInfo *, std::__1::allocator<KB::LexiconInfo>> {
        CDStruct_183601bc *_field1;
    } _field3;
} vector_4dc11a9b;

typedef struct vector<TITokenID, std::__1::allocator<TITokenID>> {
    struct TITokenID *__begin_;
    struct TITokenID *__end_;
    struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID>> {
        struct TITokenID *__value_;
    } __end_cap_;
} vector_5bda1073;

