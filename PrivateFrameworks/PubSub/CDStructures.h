//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct Aggregate;

struct AuthorCore {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
    struct ScalarColumn<const __CFString *> _field7;
    struct ScalarColumn<const __CFString *> _field8;
    struct ScalarColumn<const __CFURL *> _field9;
    struct ScalarColumn<const __CFString *> _field10;
};

struct BasicRowIterator {
    struct Cursor *_field1;
    struct vector<Foundation::Ref<SQLite::Row>, std::__1::allocator<Foundation::Ref<SQLite::Row>>> _field2;
    struct __wrap_iter<const Foundation::Ref<SQLite::Row>*> {
        struct Ref<SQLite::Row> *_field1;
    } _field3;
    struct Ref<SQLite::Row> _field4;
    unsigned int _field5;
};

struct ClientCore {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
    struct ScalarColumn<const __CFString *> _field7;
    struct ScalarColumn<bool> _field8;
    struct ScalarColumn<const __CFDate *> _field9;
    struct ToManyColumn<PubSub::SubscriptionCore> _field10;
    struct Ref<PubSub::SubscriptionCore> _field11;
    _Bool _field12;
    struct ProcessInfo _field13;
};

struct ContentCore {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
    struct ScalarColumn<const __CFData *> _field7;
    struct ScalarColumn<const __CFString *> _field8;
    struct Ref<const __CFString> _field9;
    struct Ref<const __CFString> _field10;
    _Bool _field11;
    struct Ref<const __CFURL> _field12;
};

struct Core {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
};

struct Cursor;

struct EnclosureCore {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
    struct ToOneColumn<PubSub::EntryCore, true> _field7;
    struct ScalarColumn<const __CFURL *> _field8;
    struct ScalarColumn<const __CFString *> _field9;
    struct ScalarColumn<long long> _field10;
    struct ScalarColumn<const __CFString *> _field11;
    struct ScalarColumn<int> _field12;
    struct ScalarColumn<int> _field13;
    struct ScalarColumn<const __CFURL *> _field14;
    struct ScalarColumn<int> _field15;
    struct ScalarColumn<int> _field16;
    int _field17;
    int _field18;
    struct Ref<const __CFURL> _field19;
    struct Ref<const __CFURL> _field20;
    struct Ref<PubSub::EnclosureDownloader> _field21;
    long long _field22;
};

struct EnclosureDownloader;

struct EntryCore {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
    struct ScalarColumn<const __CFString *> _field7;
    struct ScalarColumn<const __CFString *> _field8;
    struct ScalarColumn<const __CFString *> _field9;
    struct ScalarColumn<const __CFString *> _field10;
    struct ToOneColumn<PubSub::ContentCore, false> _field11;
    struct ScalarColumn<const __CFString *> _field12;
    struct ToOneColumn<PubSub::ContentCore, false> _field13;
    struct ScalarColumn<const __CFString *> _field14;
    struct ToOneColumn<PubSub::ContentCore, false> _field15;
    struct ScalarColumn<const __CFString *> _field16;
    struct ScalarColumn<const __CFDate *> _field17;
    struct ScalarColumn<const __CFTimeZone *> _field18;
    struct ScalarColumn<const __CFDate *> _field19;
    struct ScalarColumn<const __CFTimeZone *> _field20;
    struct ScalarColumn<const __CFDate *> _field21;
    struct ScalarColumn<const __CFTimeZone *> _field22;
    struct ScalarColumn<const __CFURL *> _field23;
    struct ScalarColumn<const __CFURL *> _field24;
    struct ToOneColumn<PubSub::AuthorCore, false> _field25;
    struct ToManyColumn<PubSub::AuthorCore> _field26;
    struct ToManyColumn<PubSub::AuthorCore> _field27;
    struct ToManyColumn<PubSub::EnclosureCore> _field28;
    struct ToOneColumn<PubSub::FeedCore, true> _field29;
    struct ScalarColumn<bool> _field30;
    struct ScalarColumn<bool> _field31;
    struct ScalarColumn<bool> _field32;
    struct ScalarColumn<bool> _field33;
    struct ScalarColumn<const __CFDate *> _field34;
    struct ScalarColumn<const __CFDate *> _field35;
    struct ScalarColumn<const __CFDate *> _field36;
    struct ScalarColumn<const __CFDate *> _field37;
    _Bool _field38;
    long long _field39;
};

struct FeedCore {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
    struct ScalarColumn<const __CFString *> _field7;
    struct ScalarColumn<const __CFString *> _field8;
    struct ScalarColumn<const __CFString *> _field9;
    struct ScalarColumn<const __CFString *> _field10;
    struct ScalarColumn<const __CFString *> _field11;
    struct ScalarColumn<double> _field12;
    struct ScalarColumn<const __CFDate *> _field13;
    struct ScalarColumn<const __CFTimeZone *> _field14;
    struct ScalarColumn<const __CFURL *> _field15;
    struct ScalarColumn<const __CFURL *> _field16;
    struct ScalarColumn<const __CFURL *> _field17;
    struct ScalarColumn<const __CFURL *> _field18;
    struct ToManyColumn<PubSub::EntryCore> _field19;
    struct ToManyColumn<PubSub::SubscriptionCore> _field20;
    struct ScalarColumn<int> _field21;
    struct ScalarColumn<int> _field22;
    struct ScalarColumn<const __CFURL *> _field23;
    struct ScalarColumn<const __CFDate *> _field24;
    struct ScalarColumn<const __CFDate *> _field25;
    struct ScalarColumn<const __CFString *> _field26;
    struct ScalarColumn<const __CFString *> _field27;
    struct ScalarColumn<const __CFString *> _field28;
    struct ScalarColumn<const __CFString *> _field29;
    struct ScalarColumn<int> _field30;
    struct ScalarColumn<bool> _field31;
    struct ScalarColumn<int> _field32;
    struct ScalarColumn<const __CFString *> _field33;
    struct ScalarColumn<bool> _field34;
    struct ScalarColumn<const __CFString *> _field35;
    struct ScalarColumn<const __CFDate *> _field36;
    struct Ref<const __CFData> _field37;
    struct Ref<const __CFURL> _field38;
    struct Ref<PubSub::Feeder> _field39;
    struct Ref<const __CFString> _field40;
};

struct Feeder;

struct FunctionReceiver<Foundation::Notification, PSFeed *> {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType _field2;
    id _field3;
};

struct IPAddress {
    struct Ref<const __CFData> _field1;
};

struct NetError {
    long long _field1;
    int _field2;
};

struct ProcessInfo {
    struct Ref<const __CFString> _field1;
    _Bool _field2;
    int _field3;
};

struct Ref<PubSub::Aggregate> {
    struct Aggregate *mValue;
};

struct Ref<PubSub::EnclosureDownloader> {
    struct EnclosureDownloader *_field1;
};

struct Ref<PubSub::Feeder> {
    struct Feeder *_field1;
};

struct Ref<PubSub::SCGIClient> {
    struct SCGIClient *mValue;
};

struct Ref<PubSub::SubscriptionCore> {
    struct SubscriptionCore *_field1;
};

struct Ref<SQLite::Row> {
    struct Row *_field1;
};

struct Ref<const __CFData> {
    struct __CFData *_field1;
};

struct Ref<const __CFDate> {
    struct __CFDate *_field1;
};

struct Ref<const __CFString> {
    struct __CFString *_field1;
};

struct Ref<const __CFTimeZone> {
    struct __CFTimeZone *_field1;
};

struct Ref<const __CFURL> {
    struct __CFURL *_field1;
};

struct Row;

struct SCGIClient;

struct ScalarColumn<bool> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
};

struct ScalarColumn<const __CFData *> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    struct Ref<const __CFData> _field4;
};

struct ScalarColumn<const __CFDate *> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    struct Ref<const __CFDate> _field4;
};

struct ScalarColumn<const __CFString *> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    struct Ref<const __CFString> _field4;
};

struct ScalarColumn<const __CFTimeZone *> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    struct Ref<const __CFTimeZone> _field4;
};

struct ScalarColumn<const __CFURL *> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    struct Ref<const __CFURL> _field4;
};

struct ScalarColumn<double> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    double _field4;
};

struct ScalarColumn<int> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    int _field4;
};

struct ScalarColumn<long long> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    long long _field4;
};

struct SocketSignature {
    struct IPAddress _field1;
    struct {
        int _field1;
        int _field2;
        int _field3;
        struct __CFData *_field4;
    } _field2;
};

struct SubscriptionCore {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    struct Table *_field4;
    long long _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    id _field6;
    struct ToOneColumn<PubSub::ClientCore, true> _field7;
    struct ToOneColumn<PubSub::FeedCore, true> _field8;
    struct ScalarColumn<double> _field9;
    struct ScalarColumn<double> _field10;
    struct ScalarColumn<const __CFDate *> _field11;
    struct ScalarColumn<bool> _field12;
    struct ScalarColumn<bool> _field13;
    struct ScalarColumn<double> _field14;
    struct ScalarColumn<const __CFString *> _field15;
    struct ScalarColumn<int> _field16;
};

struct Table;

struct ToManyColumn<PubSub::AuthorCore> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    char *_field4;
    struct vector<Foundation::Ref<SQLite::Row>, std::__1::allocator<Foundation::Ref<SQLite::Row>>> _field5;
};

struct ToManyColumn<PubSub::EnclosureCore> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    char *_field4;
    struct vector<Foundation::Ref<SQLite::Row>, std::__1::allocator<Foundation::Ref<SQLite::Row>>> _field5;
};

struct ToManyColumn<PubSub::EntryCore> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    char *_field4;
    struct vector<Foundation::Ref<SQLite::Row>, std::__1::allocator<Foundation::Ref<SQLite::Row>>> _field5;
};

struct ToManyColumn<PubSub::SubscriptionCore> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    char *_field4;
    struct vector<Foundation::Ref<SQLite::Row>, std::__1::allocator<Foundation::Ref<SQLite::Row>>> _field5;
};

struct ToOneColumn<PubSub::AuthorCore, false> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    long long _field4;
    struct Row *_field5;
    _Bool _field6;
};

struct ToOneColumn<PubSub::ClientCore, true> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    long long _field4;
    struct Row *_field5;
    _Bool _field6;
};

struct ToOneColumn<PubSub::ContentCore, false> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    long long _field4;
    struct Row *_field5;
    _Bool _field6;
};

struct ToOneColumn<PubSub::EntryCore, true> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    long long _field4;
    struct Row *_field5;
    _Bool _field6;
};

struct ToOneColumn<PubSub::FeedCore, true> {
    struct Row *_field1;
    _Bool _field2;
    _Bool _field3;
    long long _field4;
    struct Row *_field5;
    _Bool _field6;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFData;

struct vector<Foundation::Ref<SQLite::Row>, std::__1::allocator<Foundation::Ref<SQLite::Row>>> {
    struct Ref<SQLite::Row> *_field1;
    struct Ref<SQLite::Row> *_field2;
    struct __compressed_pair<Foundation::Ref<SQLite::Row>*, std::__1::allocator<Foundation::Ref<SQLite::Row>>> {
        struct Ref<SQLite::Row> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

