//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKAsset;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetURLInfo : NSObject
{
    CKAsset *_asset;
    struct _OpaquePCSShareProtection *_recordPCS;
}

@property(nonatomic) struct _OpaquePCSShareProtection *recordPCS; // @synthesize recordPCS=_recordPCS;
@property(retain, nonatomic) CKAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

