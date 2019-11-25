//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, RLMRealmConfiguration, RLMSchema;

@interface RLMRealm : NSObject
{
    shared_ptr_130f66cc _realm;
    struct RLMSchemaInfo _info;
    struct unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo>> _resultsSetInfo;
    NSHashTable *_collectionEnumerators;
    _Bool _sendingNotifications;
    BOOL _dynamic;
    RLMSchema *_schema;
    NSHashTable *_notificationHandlers;
}

+ (BOOL)performMigrationForConfiguration:(id)arg1 error:(id *)arg2;
+ (unsigned long long)schemaVersionAtURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
+ (void)resetRealmState;
+ (id)uncachedSchemalessRealmWithConfiguration:(id)arg1 error:(id *)arg2;
+ (id)realmWithConfiguration:(id)arg1 error:(id *)arg2;
+ (id)realmWithSharedRealm:(shared_ptr_130f66cc)arg1 schema:(id)arg2;
+ (id)asyncOpenWithConfiguration:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)realmWithURL:(id)arg1;
+ (id)defaultRealm;
+ (BOOL)isCoreDebug;
@property(readonly, nonatomic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(retain, nonatomic) NSHashTable *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(retain, nonatomic) RLMSchema *schema; // @synthesize schema=_schema;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)detachAllEnumerators;
- (void)unregisterEnumerator:(id)arg1;
- (void)registerEnumerator:(id)arg1;
- (BOOL)writeCopyToURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
- (id)createObject:(id)arg1 withValue:(id)arg2;
- (id)objectWithClassName:(id)arg1 forPrimaryKey:(id)arg2;
- (id)objects:(id)arg1 withPredicate:(id)arg2;
- (id)objects:(id)arg1 where:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (id)objects:(id)arg1 where:(id)arg2;
- (id)allObjects:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObjects:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)addOrUpdateObjects:(id)arg1;
- (void)addOrUpdateObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)refresh;
- (void)dealloc;
- (BOOL)compact;
- (id)resolveThreadSafeReference:(id)arg1;
- (void)invalidate;
- (void)cancelWriteTransaction;
- (BOOL)transactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)commitWriteTransactionWithoutNotifying:(id)arg1 error:(id *)arg2;
- (BOOL)commitWriteTransaction:(id *)arg1;
- (void)commitWriteTransaction;
- (void)beginWriteTransaction;
@property(readonly, nonatomic) RLMRealmConfiguration *configuration;
- (void)sendNotifications:(id)arg1;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (void)verifyNotificationsAreSupported:(_Bool)arg1;
@property(nonatomic) BOOL autorefresh;
// Error parsing type for property group:
// Property attributes: T^{Group=^^?{SlabAlloc=^^?Q^{Replication}Q{atomic<unsigned long long>=AQ}{atomic<unsigned long long>=AQ}{Config=BBBBBBB*}{map<int, realm::SlabAlloc::FreeBlock *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, realm::SlabAlloc::FreeBlock *> > >={__tree<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true> >=Q}}}{shared_ptr<realm::SlabAlloc::MappedFile>=^{MappedFile}^{__shared_weak_count}}{unique_ptr<std::__1::shared_ptr<const realm::util::File::Map<char> > [], std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char> > []> >={__compressed_pair<std::__1::shared_ptr<const realm::util::File::Map<char> > *, std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char> > []> >=^{shared_ptr<const realm::util::File::Map<char> >}}}Q*QQi{unique_ptr<unsigned long [], std::__1::default_delete<unsigned long []> >={__compressed_pair<unsigned long *, std::__1::default_delete<unsigned long []> >=^Q}}Qii{vector<realm::SlabAlloc::Slab, std::__1::allocator<realm::SlabAlloc::Slab> >=^{Slab}^{Slab}{__compressed_pair<realm::SlabAlloc::Slab *, std::__1::allocator<realm::SlabAlloc::Slab> >=^{Slab}}}{map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >={__tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> >=Q}}}QB[256{hash_entry=Q*Q}]Q}i{Array=^^?^{VTable}*qqQQ^{Allocator}Q^{ArrayParent}QCBBB}{ArrayInteger=^^?^{VTable}*qqQQ^{Allocator}Q^{ArrayParent}QCBBB}{ArrayString=^^?^{VTable}*qqQQ^{Allocator}Q^{ArrayParent}QCBBBB}{vector<realm::Table *, std::__1::allocator<realm::Table *> >=^^{Table}^^{Table}{__compressed_pair<realm::Table **, std::__1::allocator<realm::Table *> >=^^{Table}}}BB{function<void (const realm::Group::CascadeNotification &)>={__value_func<void (const realm::Group::CascadeNotification &)>={type=[32C]}^{__base<void (const realm::Group::CascadeNotification &)>}}}{function<void ()>={__value_func<void ()>={type=[32C]}^{__base<void ()>}}}{shared_ptr<realm::metrics::Metrics>=^{Metrics}^{__shared_weak_count}}Q},R,N

@property(readonly, nonatomic) BOOL inWriteTransaction;
- (void)verifyThread;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)initPrivate;

@end

