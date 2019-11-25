//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PAMediaConversionServiceResourceURLCollection : NSObject
{
    NSMutableDictionary *_urlReferencesByRole;
}

+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 error:(id *)arg2;
+ (id)collectionWithMainResourceURL:(id)arg1;
@property(retain) NSMutableDictionary *urlReferencesByRole; // @synthesize urlReferencesByRole=_urlReferencesByRole;
- (void).cxx_destruct;
- (BOOL)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;
- (id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id *)arg3;
@property(readonly) unsigned long long urlCount;
- (void)enumerateResourceURLs:(CDUnknownBlockType)arg1;
- (id)fileSizeSummary;
- (id)logMessageSummary;
@property(readonly) BOOL allURLsAreReadable;
- (BOOL)removeExistingEmptyFilesWithError:(id *)arg1;
- (BOOL)ensureFilesExistWithError:(id *)arg1;
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)arg1;
- (id)typeIdentifierForResourceURLWithRole:(id)arg1;
- (BOOL)containsAnyRole:(id)arg1;
- (BOOL)containsAllRoles:(id)arg1;
- (void)setShouldDeleteURLOnDeallocation:(BOOL)arg1 forRole:(id)arg2;
- (id)resourceURLForRole:(id)arg1;
- (void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(BOOL)arg3;
- (void)setResourceURL:(id)arg1 forRole:(id)arg2;
- (id)init;

@end

