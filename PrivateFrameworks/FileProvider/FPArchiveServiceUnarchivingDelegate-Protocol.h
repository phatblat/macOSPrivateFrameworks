//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPArchiveService, NSArray;

@protocol FPArchiveServiceUnarchivingDelegate <NSObject>

@optional
- (void)service:(FPArchiveService *)arg1 didReceiveArchivedItemsDescriptors:(NSArray *)arg2;
@end

