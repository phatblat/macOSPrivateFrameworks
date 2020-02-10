//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol PLAssetsdServiceContext <NSObject>
@property(copy, nonatomic) NSError *replyWarning;
@property(readonly, copy, nonatomic) NSString *clientDebugDescription;
@property(readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property(readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (BOOL)hasEntitlement:(NSString *)arg1;
@end
