//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFCloudKitItem.h"

@class CKRecordID, NSArray, NSString;

@interface WFWorkflowOrdering : NSObject <WFCloudKitItem>
{
    CKRecordID *_identifier;
    NSArray *_orderedWorkflowIDs;
}

+ (id)properties;
+ (id)recordType;
@property(copy, nonatomic) NSArray *orderedWorkflowIDs; // @synthesize orderedWorkflowIDs=_orderedWorkflowIDs;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithZoneID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

