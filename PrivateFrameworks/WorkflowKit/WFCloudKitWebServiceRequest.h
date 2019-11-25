//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, CKDatabase;

@interface WFCloudKitWebServiceRequest : NSObject
{
    CKContainer *_container;
    CKDatabase *_database;
}

@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)parseRecord:(id)arg1 intoItem:(id)arg2 allKeys:(BOOL)arg3;
- (id)extractRecordDictFromRecordIfNecessary:(id)arg1 recordType:(id)arg2;
- (id)recordsFromQueryResponse:(id)arg1;
- (id)urlForType:(unsigned long long)arg1 parameters:(id)arg2;
- (id)cloudKitAPIToken;
- (id)cloudKitEnvironment;
- (id)pathComponentsForType:(unsigned long long)arg1 parameters:(id)arg2;
- (unsigned long long)webServiceForRequestType:(unsigned long long)arg1;
- (id)databaseName;
- (id)getJSONFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)postJSON:(id)arg1 toURL:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryWithItemType:(Class)arg1 filter:(id)arg2;
- (id)fetchProxiedRecordWithIdentifier:(id)arg1 possibleItemTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fetchRecordsWithItemType:(Class)arg1 filter:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithContainer:(id)arg1 database:(id)arg2;

@end

