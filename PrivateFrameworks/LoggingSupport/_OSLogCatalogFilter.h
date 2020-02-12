//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPredicateVisitor.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor>
{
    NSMutableSet *_pidAccept;
    NSMutableSet *_processLookupSubstr;
    NSMutableSet *_senderLookupSubstr;
    NSMutableSet *_subsysSubstrAccept;
    NSMutableSet *_uuidAccept;
    char *_uuidtext_path;
    BOOL _hasItems;
    BOOL _hasSharedCacheItems;
}

- (void).cxx_destruct;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2;
-     // Error parsing type: v24@0:8^{uuiddb_dsc_map_s=A^{uuiddb_dsc_map_s}^{uuiddb_dsc_header_s}^{uuiddb_dsc_range_entry_s}^{uuiddb_dsc_uuid_entry_s}[16C]I}16, name: handleDSCContents:
-     // Error parsing type: ^{uuiddb_dsc_map_s=A^{uuiddb_dsc_map_s}^{uuiddb_dsc_header_s}^{uuiddb_dsc_range_entry_s}^{uuiddb_dsc_uuid_entry_s}[16C]I}16@0:8, name: getDSCMap
- (void)readDSCUUIDs;
- (void)handleDSOFile:(struct _ftsent *)arg1;
- (void)readDSOUUIDs;
- (void)generateUUIDSet;
- (BOOL)containsSenderLookupSubstr:(id)arg1;
- (BOOL)containsProcessLookupSubstr:(id)arg1;
- (void)addSenderLookupSubstr:(id)arg1;
- (void)addProcessLookupSubstr:(id)arg1;
- (BOOL)containsUUID:(id)arg1;
- (void)addUUID:(id)arg1;
- (BOOL)containsSubsystemSubstr:(id)arg1;
- (void)addSubsystem:(id)arg1;
- (BOOL)containsProcessID:(id)arg1;
- (void)addProcessID:(id)arg1;
- (BOOL)isKeptCatalog:(struct catalog_s *)arg1;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 collection:(id)arg2;

@end

