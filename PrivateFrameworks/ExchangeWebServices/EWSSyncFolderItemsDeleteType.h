//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class EWSItemIdType, NSString;

@interface EWSSyncFolderItemsDeleteType : NSObject <XSDefinitionProvider>
{
    EWSItemIdType *_ItemId;
}

+ (id)definition;
@property(retain, nonatomic) EWSItemIdType *ItemId; // @synthesize ItemId=_ItemId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
