//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NUComposition;

@protocol PAItemRenderDescriptionObserver <NSObject>
- (void)composition:(NUComposition *)arg1 endInteractiveForKey:(NSString *)arg2;
- (void)composition:(NUComposition *)arg1 beginInteractiveForKey:(NSString *)arg2;
- (void)compositionChanged:(NUComposition *)arg1 key:(NSString *)arg2;
@end

