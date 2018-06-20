//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassroomKit/CRKCloudOperation.h>

#import "CRKCloudResetable.h"

@class CKRecordZoneID;

@interface CRKCloudPeekRecordZoneOperation : CRKCloudOperation <CRKCloudResetable>
{
    CKRecordZoneID *_zoneId;
}

@property(readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
- (void).cxx_destruct;
- (id)resetOperation;
- (void)main;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2;

@end

