//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSIndexJob;

@protocol CSSearchableIndexServiceInterface <NSObject>
- (void)performIndexJob:(CSIndexJob *)arg1 acknowledgementHandler:(void (^)(NSError *))arg2;
- (void)performIndexJob:(CSIndexJob *)arg1;
@end

