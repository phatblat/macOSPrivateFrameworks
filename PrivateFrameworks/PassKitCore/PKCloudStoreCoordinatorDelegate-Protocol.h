//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PKCloudStoreCoordinatorDelegate <NSObject>
- (void)recreateZone:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(NSString *)arg2 qualityOfService:(long long)arg3 completion:(void (^)(PKCloudRecordObject *, NSError *))arg4;
@end

