//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKRecord;

@interface WFCloudKitItemRecord : NSObject
{
    CKRecord *_record;
    id <WFCloudKitItem> _item;
}

@property(readonly, nonatomic) id <WFCloudKitItem> item; // @synthesize item=_item;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 item:(id)arg2;

@end
