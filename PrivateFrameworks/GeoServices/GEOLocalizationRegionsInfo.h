//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock;

@interface GEOLocalizationRegionsInfo : NSObject
{
    NSDictionary *_regions;
    NSLock *_regionsLock;
}

- (void).cxx_destruct;
- (BOOL)needsLocalizationForKey:(const struct _GEOTileKey *)arg1 language:(id)arg2;
- (void)reset;
- (id)init;

@end

